#include <iostream>
using namespace std;

class Tool
{
protected:
    int strength;
    char type;

public:
    virtual void setStrength(int s)
    {
        strength = s;
    }

    int getStrength()
    {
        return strength;
    }

    char getType()
    {
        return type;
    }

    virtual bool fight(Tool* t)=0;
};

class Rock : public Tool
{
public:
    Rock(int s)
    {
        strength = s;
        type = 'r';
    }

    bool fight(Tool* t)
    {
        double myStrength = strength;

        if(t->getType()=='s')
            myStrength *= 2;

        else if(t->getType()=='p')
            myStrength /= 2;

        return myStrength >
               t->getStrength();
    }
};

class Paper : public Tool
{
public:
    Paper(int s)
    {
        strength = s;
        type = 'p';
    }

    bool fight(Tool* t)
    {
        double myStrength = strength;

        if(t->getType()=='r')
            myStrength *= 2;

        else if(t->getType()=='s')
            myStrength /= 2;

        return myStrength >
               t->getStrength();
    }
};

class Scissors : public Tool
{
public:
    Scissors(int s)
    {
        strength = s;
        type = 's';
    }

    bool fight(Tool* t)
    {
        double myStrength = strength;

        if(t->getType()=='p')
            myStrength *= 2;

        else if(t->getType()=='r')
            myStrength /= 2;

        return myStrength >
               t->getStrength();
    }
};

int main()
{
    Rock r(10);
    Paper p(8);
    Scissors s(12);

    cout<<"Rock vs Paper : "
        <<r.fight(&p)
        <<endl;

    cout<<"Paper vs Rock : "
        <<p.fight(&r)
        <<endl;

    cout<<"Scissors vs Paper : "
        <<s.fight(&p)
        <<endl;

    return 0;
}