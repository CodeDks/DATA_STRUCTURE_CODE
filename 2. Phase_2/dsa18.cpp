// copy constructor..

#include <iostream>
using namespace std;

class dheeraj
{
private:
    int health;

public:
    int level;

    dheeraj()
    {
        cout << "This is default constructor..";
    }
    
    dheeraj(int health)
    {
        this -> health = health;
    }

    int GetHealth ()
    {
        return health;
    }
};

int main()
{
    dheeraj singh(89);
    cout << endl;
    singh.level = 10;
    cout << "The value of level is : " << singh.level << endl;
    cout << "The value of health is : " << singh.GetHealth() << endl;
}