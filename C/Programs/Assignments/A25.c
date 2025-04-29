#include<stdio.h>
// 1. WAF Recursive to print first N natural numbers
void FirstN(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        FirstN(n-1);
        printf("%d ",n);
    }
}


// 2. WAF Recursive to print first N natural numbers in reverse order
void FirstNRev(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        printf("%d ",n);
        FirstNRev(n-1);        
    }
}

// 3. WAF Recursive to print first N odd natural numbers
void FirstNOdd(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        FirstNOdd(n-1);
        printf("%d ",2*n-1);
    }
}

// 4. WAF Recursive to print first N Odd natural numbers in reverse order
void FirstNOddRev(int n)
{
    if (n==1)
        printf("%d ",n);
    else
    {
        printf("%d ",2*n-1);
        FirstNOddRev(n-1);        
    }
}

// 5. WAF Recursive to print first N Even natural numbers
void FirstNEven(int n)
{
    if (n==1)
        printf("%d ",2*n);
    else
    {
        FirstNEven(n-1);
        printf("%d ",2*n);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    FirstN(n);
    return 0;
}