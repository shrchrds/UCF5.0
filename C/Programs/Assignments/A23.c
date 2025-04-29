#include<stdio.h>
// 1. WAF to calculate LCM of two numbers(TSRS)

int LCM(int a, int b)
{
    int big;
    big = a>b?a:b;
    for (big;big<=a*b;big++)
        {
            if (big%a==0 && big%b==0)
                return big;
        }

}

// 2. WAF to calculate HCF of two numbers(TSRS)
int HCF(int a, int b)
{
    int small;
    small = a<b?a:b;
    for (small;small>=1;small--)
        {
            if (a%small==0 && b%small==0)
                return small;
        }

}

// 3. WAF to check whether given number is Prime or not?

int CheckPrime(int n)
{
    int flag=1;
    for (int i=2;i<n;i++)
        {
            if (n%i==0)
                {
                    flag=0;
                    break;
                }
        }
    return flag;
}

// 4. WAF to Find Next Prime of given number?
int NextPrime(int n)
{
    int prime=n+1, flag;
    while (1)
        {
            flag = CheckPrime(prime);
            if (flag)
                return prime;
            prime++;
        }
}

// 5. WAF to print first N Prime Numbers
void FirstNPrime(int n)
{
    int prime=2, flag, c=0;
    while (c<n)
        {
            flag = CheckPrime(prime);
            if (flag)
                {
                    printf("%d ",prime);
                    c++;
                }
            prime++;
            
        }
}


int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    FirstNPrime(a);

    return 0;
}