#include<stdio.h>
// 1. WAF Recursive to print first N Even natural numbers in reverse order
void FirstNEvenRev(int n)
{
    if (n==1)
        printf("%d ",2*n);
    else
    {
        printf("%d ",2*n);
        FirstNEvenRev(n-1);        
    }
}

// 2. WAF Recursive to print squares of first N natural numbers
void FirstNSquares(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        FirstNSquares(n-1);
        printf("%d ",n*n);
    }
}

// 3. WAF Recursive to print binary of given decimal numbers
void DecimalToBinary(int n)
{
    if (n==1)
        printf("%d",n);
    else
    {
        DecimalToBinary(n/2);
        printf("%d",n%2);
    }
}

// 4. WAF Recursive to print octal of given decimal numbers
void DecimalToOctal(int n)
{
    if (n<8&&n>=0)
        printf("%d",n);
    else
    {
        DecimalToOctal(n/8);
        printf("%d",n%8);
    }
}

// 5. WAF Recursive to print reverse of number
void ReverseNum(int n)
{
    if (n<10&&n>=0)
        printf("%d",n);
    else
    {
        printf("%d",n%10);
        ReverseNum(n/10);        
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    ReverseNum(n);
    return 0;
}