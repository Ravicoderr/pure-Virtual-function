#include <iostream>
using namespace std;
//Abstract base class is a class that has at least one pure virtual function in its body.
//The classes which are inheriting the base class must need to override the virtual  
//function of the abstract class otherwise compiler will throw an error.
class shop
{
protected:  
    int size;
    string fabric;     // Here [shop] classs is abstract class

public:
    shop(int s, string f)   
    {
        size = s;
        fabric = f;
    }
    virtual void display() = 0;      // Pure virtual function [Pure virtual function is a 
};//function that doesn’t perform any operation and the function is declared by assigning 
 // the value 0 to it. Pure virtual functions are declared in abstract classes.]

class girlsjeans : public shop
{
protected:
    int rate;

public:
    girlsjeans(int s, string f, int r) : shop(s, f)
    {
        rate = r;
    }
    void display()
    {
        cout << "the size of the pant is " << size << endl
             << "the fabric of the jeans is " << fabric
             << endl
             << "the rate of the girl jeans is " << rate;
    }
};
class boysjeans : public shop
{
protected:
    int rate;

public:
    boysjeans(int s, string f, int r) : shop(s, f)
    {
        rate = r;
    }
    void display()
    {
        cout << "the size of the pant is " << size << endl
             << "the fabric of the jeans is " << fabric
             << endl
             << "the rate of the boy jeans is " << rate;
    }
};
int main()
{
    int size, rate;
    string fabric;
    size = 32;
    rate = 12000;
    fabric = "cotton";
    girlsjeans girl(size, fabric, rate);
    rate = 1000;
    boysjeans boy(size, fabric, rate);

    shop *ptr[2];
    ptr[0] = &girl;
    ptr[1] = &boy;
    ptr[0]->display();
    cout << endl;
    ptr[1]->display();

    return 0;
}