#include<stdio.h>
// 1. WAF Recursive to calculate sum of first N natural numbers
int FirstNSum(int n)
{
    
    if (n==1)
        return n;
    return n + FirstNSum(n-1);
}

// 2. WAF Recursive to calculate sum of first N Odd natural numbers
int OddFirstNSum(int n)
{
    
    if (n==1)
        return n;
    return 2*n-1 + OddFirstNSum(n-1);
}

// 3. WAF Recursive to calculate sum of first N Even natural numbers
int EvenFirstNSum(int n)
{
    
    if (n==1)
        return 2*n;
    return 2*n + EvenFirstNSum(n-1);
}

// 4. WAF Recursive to calculate sum of squares first N natural numbers
int SquaresFirstNSum(int n)
{
    
    if (n==1)
        return n;
    return n*n + SquaresFirstNSum(n-1);
}

// 5. WAF Recursive to calculate sum of digits of given number
int DigitSum(int n)
{
    
    if (n<10)
        return n;
    return n%10 + DigitSum(n/10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d",DigitSum(n));
    return 0;
}