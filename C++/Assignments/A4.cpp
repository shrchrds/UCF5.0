#include<iostream>
using namespace std;

// Q. 1 WAF to print all prime numbers between two given numbers

int CheckPrime(int n)
{
    int i;
    for (i=2;i<n;i++)
        {
            if (n%i==0)
                break;
        }
    if (i==n)
        return 1;
    else
        return 0;
}

void PrintPrime(int a, int b)
{
    int i;
    for (i=a;i<b;i++)
        if (CheckPrime(i))
                cout<<i<<" ";
}

// Q. 2 WAF to find highest value digit in given number

int HighestDigit(int n)
{
    int max;
    max = n%10;
    while (n)
        {
            if ((n%10) > max)
                max = n%10;
                n = n/10;
        }
    return max;
}

//  Q. 3 WAF to find x raised to power y

int power(int x, int y)
{
    int p=1;
    while (y)
        {
            p = p*x;
            y--;
        }
    return p;
}

// Q.4 WAF to print Pascal's Triangle upto N lines
int fact(int n)
{
    int f=1;
    while (n)
        {
            f*=n;
            n--;
        }
    return f;
}

int combinations(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}

void PascalTriangle(int n)
{
    int i, j, k, r, c;
    for (i=1;i<=n;i++)
        {
            k=1;
            r = 0;
            for (j=1;j<2*n;j++)
                {
                    if(j<=n-1+i && j>=n+1-i && k)
                        {  
                            c = combinations(i-1, r);
                            cout<<c;
                            k = 1 - k;
                            r++;
                        }
                    else
                        {
                            cout<<" ";
                            k = 1;
                        }
                }
            cout<<endl;
        }
}

// Q. 5 WAF to check whether given number is a term in fibonacci series or not

int Fib(int n)
{
    if (n==1 || n==2)
        return n-1;
    return Fib(n-1) + Fib(n-2);
}
int checkFib(int n)
{
    int f=0, i=1;
    while (n>f)
        {
            f = Fib(i);
            i++;
        }
    if (n==f)
        return 1;
    return 0;
}

int main()
{
    // cout<<combinations(4, 2);
    PascalTriangle(7);
}