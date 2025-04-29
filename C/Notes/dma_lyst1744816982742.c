#include<stdio.h>
#include<stdlib.h>
/*
Static Memory Allocation (SMA)

int x;
float y;
int a[5];
int *p;
struct Book b1;


Dynamic Memory Allocation (DMA)

malloc()
calloc()
*/
/*
int* f1()
{
    int *p;
    p=(int*)malloc(4);
    *p=25;
    ...
    return p;
}
*/
void f1()
{
    int *p;
    p=(int*)malloc(4);
    *p=25;
    
    free(p);
    
}
void f2()
{
    int i;
    float *q;
    q=(float*)calloc(5,4);
    printf("Enter 5 floating values");
    for(i=0;i<=4;i++)
        scanf("%f",q+i);

    free(q);
}
void f4()
{
    char ch;
    int i,size=5;
    float *q;
    q=(float*)calloc(size,4);
    printf("Enter 5 floating values");
    for(i=0;i<=4;i++)
        scanf("%f",q+i);
    printf("Do you want to enter 5 more values (Y/N)");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='Y' || ch=='y')
    {
        size+=5;
        q=realloc(q,size*4);
        printf("Enter 5 floating values");
        for(i=5;i<=9;i++)
            scanf("%f",q+i);
    }

    for(i=0;i<size;i++)
        printf("%f\n",*(q+i));
    free(q);
}
void f3()
{
    int *ptr;
    //ptr=f1();
    f1();
}
/*
void* malloc(int size)
{


    return address;
}
*/
int main()
{
    f4();
    printf("\n");
    return 0;
}