#include<stdio.h>
// 1. WAF Recursive to calculate factorial of given numbers
int Factorial(int n)
{
    if (n==1)
        return n;
    return n*Factorial(n-1);
}

// 2.WAF to calculate HCF of two numbers

// int HCF(int a, int b)
// {
//     int s;
//     s = a<b?a:b;
//     if (a<b)
//         {
//             if (b%a==0)
//                 return a;
//             HCF(a-1,b);
//         }
//     else

//     {
//         if (a%b==0)
//             return b;
//         HCF(a,b-1);
//     }
// }

int HCF(int a, int b)
{
    int s;
    s = a<b?a:b;
    if (a > b)
        {
            b = a;
            a = s;
        }
    if (b%a==0)
        return a;
    HCF(a-1,b);
}

// 3. WAF Recursive to print first N terms of fibonacci series.

int Fib(int n)
{
    if (n==1||n==2)
        return n-1;
    return Fib(n-2) + Fib(n-1);
}

void PrintNFib(int n)
{
    if (n>0)
        {
            PrintNFib(n-1);
            printf("%d ", Fib(n));
        }
}

// 4. WAF Recursive to calculate count digits of given number
int CountDigits(int n)
{
    if (n<10)
        return 1;
    return CountDigits(n/10) + 1;
}

// 5. WAF Recursive to calculate power of given number
int PowerOfNum(int n, int p)
{
    if (p==1)
        return n;
    return n*PowerOfNum(n,p-1);
}

int main()
{
    int a, b;
    printf("Enter a number and power: ");
    scanf("%d", &a);
    // Fib(a);
    PrintNFib(a);
    return 0;
}