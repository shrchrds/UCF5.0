#include<stdio.h>
int main()
{
    int i, n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n;i;i=i/10)
        {
            c++;
        }
    int num, power,s=0,count;
    num = n;
    while (num)
        {
            count = 0; 
            power = 1; 
            while (count < c)
                {   
                    power *= num % 10; 
                    count++;
                }          
            s = s + power;
            num = num/10;
        }
    if (s==n)
        printf("%d is An Armstrong Number",s);
    else
        printf("%d is NOT An Armstrong Number",s);
}