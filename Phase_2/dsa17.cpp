// Access modifiers..

#include <iostream>
using namespace std;

class dheeraj
{
private:
    int health;

public:
    int level;

    void setHealth(int h) // this function is called setter because it helps to access the private data member..
    {
        health = h;
    }

    int getHealth() // this function is called getter because it returns the value of member function declared in private..
    {
        return health;
    }
};

int main()
{
    dheeraj singh; // here object of class dheeraj is created..  static memory allocation..
    singh.level = 70;
    singh.setHealth(50);
    cout << "The health is " << singh.getHealth() << endl;
    cout << "The level is " << singh.level << endl;

    dheeraj *kumar = new dheeraj; // this dynamically created object..
    (*kumar).level = 10;
    (*kumar).setHealth(99);
    cout << "The level is : " << (*kumar).level << endl;
    cout << "The health is : " << (*kumar).getHealth() << endl;

    // Another method to access the class

    dheeraj *navneeta = new dheeraj;
    navneeta->level = 78;
    navneeta->setHealth(110);

    cout << "The level is : " << navneeta->level << endl;
    cout << "The health is : " << navneeta->getHealth() << endl;
}