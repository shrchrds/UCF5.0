#include<stdio.h>

// 1. WAF to calculate factorial of number

int Factorial(int n)
{
    int f=1;
    while (n)
        {
            f*=n;
            n--;
        }

    return f;
}

// 2. WAF to calculate a number of combinations one can make from n items and r selected at a time.(TSRS)
int Combinations(int n, int r)
{
    return Factorial(n)/Factorial(n-r)/Factorial(r);
}

// 3. WAF to calculate a number of arrangements one can make from n items and r selected at a time.(TSRS)

int Permutations(int n, int r)
{
    return Factorial(n)/Factorial(n-r);
}

// 4. WAF to check given number contains given digit or not (TSRS)
int checkDigit(int n, int d)
{
    while (n)
        {
            if (n%10==d)
                return 1;
            n=n/10;
        }
    return 0;
}

// 5. WAF to print all prime factors of given numbers. (TSRN)
void PrimeFactors(int n)
{
    int i=2;
    while (n!=1)
        {    
            while (n%i==0)
                {
                    printf("%d ", i);
                    n = n/i;
                }
            i++;
        }
}

int main()
{
    PrimeFactors(36);
    // printf("%d", checkDigit(102, 3));
}