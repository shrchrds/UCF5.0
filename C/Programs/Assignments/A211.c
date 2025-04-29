#include<stdio.h>

// 1. WAF to calculate area of circle

float CircleArea(int r)
{
    return 3.14*r*r;
}


// 2. WAF to calculate simple interest

float SimpleInterest(int n, int p, float r)
{
    float si;
    si = n*p*r/100;
    return si;
}

// 3. Waf to check whether given number is even or odd

int CheckOddEven(int n)
{
    return n%2==0;
}

// 4. WAF to print first N natural numbers;
void PrintFirstNNum(int n)
{
    int i;
    for (i=1;i<=n;i++)
        printf("%d ", i);
}

// 4. WAF to print first N Odd natural numbers;
void PrintFirstNOdd(int n)
{
    int i;
    for (i=1;i<=n;i++)
        printf("%d ", 2*i-1);
}

int main()
{
    PrintFirstNOdd(5);
    // printf("%d",CheckOddEven(5));
}