#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non positive");
    }
    return 0;

}