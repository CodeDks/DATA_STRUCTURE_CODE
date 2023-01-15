// C++ ambiguity

#include <iostream>

using namespace std;

class dog
{
public:
    void speak()
    {
        cout << "Barking.." << endl;
    }
};

class cat
{
public:
    void speak()
    {
        cout << "Meowing.." << endl;
    }
};

class animal : public dog, public cat // this class is inherited from class dog and class cat...
{
public:
};

int main()
{
    animal tell;
    tell.dog ::speak(); // both dog and cat class contains function of same name..therefore using scope resolution operator
                        // we have to specify which class's funtion we are calling..
}
