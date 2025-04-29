#include<stdio.h>
#include "A22.c"
int CheckPrime(int n);
void PrimeNumbers(int a, int b);

// 1. WAF to print Prime Numbers between two numbers (TSRN)


void PrimeNumbers(int a, int b)
{
    int flag;
    for (int i=a;i<=b;i++)
        {
            flag = CheckPrime(i);
            if (flag)
                printf("%d ",i);
        }
}

// 2. WAF to print first N Terms of fibonacci series (TSRN)

void Fib_Numbers(int n)
{
    int a=-1, b=1, c, count=0;
        for (count;count<n;count++)
            {
                c=a+b;
                a=b;
                b=c;
                printf("%d ",c);
            }        
}

// 3. WAF to print Pascal's Triangle (TSRN)

void PascalTriangle(int num)
{
    int n, k, i, j,c, l=1;
    for (i=1; i<=num; i++)
        {           
            n = i-1;
            k = 0; 
            for (j=1;j<=2*num-1;j++)
                {
                                        
                    if (j>=(num+1-i)&&j<=(num-1+i))
                        {
                            if (num%2 && (i%2 && j%2 || i%2==0 && j%2==0))
                                {
                                    c = Combinations(n, k++);
                                    printf("%d",c);
                                }
                            else
                                printf("");
                            if (num%2==0 && (i%2 && j%2==0 || i%2==0 && j%2))
                                {
                                    c = Combinations(n, k++);
                                    printf("%d",c);
                                }
                            else
                                printf(" ");
                        }
                    else
                        printf(" ");
                }
            printf("\n");
        }
}

// WAF To print all armstrong numbers between two given numbers(TSRN)
int CountDigits(int n)
    {
        int c=0;
        while (n)
            {
                c++;
                n=n/10;
            }
        return c;
    }

int Power(int n, int p)
    {
        int power=1;
        for (int i=1;i<=p;i++)
            {
                power *= n;
            }
        return power;
        
    }
int Armstrong(int n)
    {
        int c, sum=0, num=n, flag=0;
        c = CountDigits(n);
        while (n)
            {
                sum += Power(n%10, c);
                n = n/10;
            }
        if (sum==num)
            flag=1;
    
        return flag;
    }

void GetArmstrong(int n1, int n2)
{
    int a;
    for (n1;n1<=n2;n1++)
        {   
            a = Armstrong(n1);
            if (a)
                printf("%d ",n1);
        }
}

// 5. WAF to find out sum of first N terms of series 1!/1 + 2!/2 + ... n!/n 


int SumOfSeries(int n)
{
    int sum=0;
    for (int i=1;i<=n;i++)
        {
            sum += Factorial(i-1);
        }
    return sum;
}
int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",SumOfSeries(a));

    return 0;
}