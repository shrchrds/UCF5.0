#include <stdio.h>

int main() {
    int i, n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n;i;i=i/10)
        {
            // find count
            c++;
        }
    printf("Count of %d is %d",n,c);
    int num=n, power=1,s=0,count=0;
    while (count<c);
        {
            power *= num%10;
            count++;
        }
    printf("Power of %d is %d", num%10, power);
    
    return 0;
}