#include<iostream>
using namespace std;

// Q. 1 WAP to calculate average of 3 numbers

float average(float a, float b, float c)
{
    return (a+ b+c)/3;
}

// Q. 2 WAP to calculate square a number
int square(int a)
{
    return a*a;
}

//  Q. 3 WAP to swap values of two int variables without using third variable

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<b;
}

// Q. 4 WAP to find maximum of two numbers
int max(int a, int b)
{
    int m;
    return a>b?a:b;
}

// Q. 5 WAP to add all the numbers of an array of size 10
int ArraySum(int a[], int n)
{
    int i, s=0;
    for (i=0; i<n;i++)
        s+=a[i];
    return s;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout<<ArraySum(a, 5);
    return 0;
}