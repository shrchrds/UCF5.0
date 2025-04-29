#include<stdio.h>

// Q.1 WAP in C to check whether given number is odd or even.

int OddEvenCheck(int a)
{
    return a%2;
}

// 2. WAP to calculate factorial of given number
int Factorial(int a)
{
    int f=1;
    while (a)
        {
            f*=a;
            a--;
        }
    return f;
}

// Q. 3 WAP to swap values of two int variables

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b= temp;
    printf("Values of a and b after swapping: \n%d %d", a, b);
}

// Q. 4 WAF to calculate LCM of two numbers

int LCM(int a, int b)
{
    int h, i;
    h = a>b?a:b;
    for (i=h;i<=a*b;i++)
        {
            if (h%a==0&&h%b==0)
                break;
            h++;
        }

    return h;
}

// Q. 5 WAF to check whether given number is Prime or Not

int CheckPrime(int n)
{
    int i, flag=1;
    for (i=2;i<n;i++)
        {
            if (n % i==0)
                flag=0;
        }
    return flag;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", CheckPrime(a));
    // printf("Values of a and b after swapping: \n%d %d", a, b);
}