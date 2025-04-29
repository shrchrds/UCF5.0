#include<iostream>
using namespace std;

// Q. 1 WAP to print "Hello MySirG" on screen

void Hello()
{
    cout<<"Hello MySirG";
}

// Q. 2 WAP to print "Hello" on first line and "MySirG" on second line using endl
void HelloMySirG()
{
    cout<<"Hello"<<endl<<"MySirG";
}

// Q. 3 WAP to calculate sum of two numbers
int sum(int a, int b)
{
    return a+b;
}

// Q. 4 WAP to calculate area of circle

float CircleArea(float r)
{
    return 3.14*r*r;
}

// Q. 5. WAP to calculate volume of cuboid

float CuboidVolume(float l, float b, float h)
{
    return l*b*h;
}

int main()
{
    cout<<CuboidVolume(3.3, 2.2, 2);
}