#include<stdio.h>
// void input(int b[],int size)
// {
//     int i;
//     printf("Enter %d numbers",size);
//     for(i=0;i<=size-1;i++)
//         scanf("%d",&b[i]);
// }
void input(int *p,int size)
{
    int i;
    printf("Enter %d numbers",size);
    for(i=0;i<=size-1;i++)
        scanf("%d",&p[i]);
}
int main()
{
    int a[5];
    input(a,5);

}