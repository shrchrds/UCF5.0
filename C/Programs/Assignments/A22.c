// 1. WAF to calculate factorial of a number.(TSRS)
int Factorial(int n);
int Combinations(int n, int r);
int Permutations(int n, int r);

int Factorial(int n)
{
    int i, fact=1;
    for (i=1;i<=n;i++)
        fact*=i;
    return fact;
}


// 2. WAF to calculate a number of combinations one can make from n items and r selected at a time.(TSRS)

int Combinations(int n, int r)
{ 
    int c,d;
    d = Factorial(n-r)*Factorial(r);
    c = Factorial(n)/d;
    return c;
}

// 3. WAF to calculate a number of arrangements one can make from n items and r selected at a time.(TSRS)

int Permutations(int n, int r)
{ 
    int c,d;
    d = Factorial(n-r);
    c = Factorial(n)/d;
    return c;
}

// WAF to check given number contains given digit or not (TSRS)
int CheckDigit(int n, int d)
{
    int r, flag=0;
    while (n)
        {
            r = n%10;
            if (r==d)
                {
                    flag=1;
                    break;
                }
            n = n/10;
        }
    flag?printf("%d is present in given number",d):printf("%d is NOT present in given number",d);
}

// WAF to print all prime factors of given numbers. (TSRN)

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

void PrimeFactors(int n)
{
    int flag, prime=2;
    flag = CheckPrime(n);
    while (flag==0)
        {
            if (n%prime==0)
                {
                    printf("%d, ",prime);
                    n = n/prime;
                    flag = CheckPrime(n);
                }
            else
                {
                    prime = NextPrime(prime);
                }
        }
    
    if (flag)
        printf("%d.",n);
}
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     PrimeFactors(n);
//     return 0;
// }
