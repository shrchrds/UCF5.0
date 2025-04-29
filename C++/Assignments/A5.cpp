#include<iostream>
using namespace std;

// Q. 1 Define a function to swap data of two int variables using call by reference

void Swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

// Q. 2 Define a function using default arguments to add 2 or 3 numbers

int add(int a, int b, int c=0)
{
    return a + b + c;
}

// Q. 3 Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
float area(float r)
{
    return 3.14*r*r;
}

float area(float l, float b)
{
    return l*b;
}

float area(int b, int h)
{
    return 0.5*b*h;
}

// Q. 4. Write function using overloading to find maximum of two numbers and both the numbers can be integer or real
int FindMax(int a, int b)
{
    return a>b?a:b;
} 

float FindMax(float a, float b)
{
    return a>b?a:b;
} 
// Q. 5. Write function using overloading to add two numbers having different data types

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int a=5, b=6, c=3;
    cout<<area(5.1f, 2.1f);
}