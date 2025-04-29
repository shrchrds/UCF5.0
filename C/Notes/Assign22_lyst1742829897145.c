#include<stdio.h>
int fact(int n)
{
    int i,f;
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
int permu(int n,int r)
{
    return fact(n)/fact(n-r);
}
int contains(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
    return 0;
}
void printPrimeFactors(int num)
{
    int i;

    for(i=2;num>1;i++)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
}
int main()
{
    printPrimeFactors(1000);
    printf("\n");
    return 0;
}