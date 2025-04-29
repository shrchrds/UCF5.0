#include<stdio.h>
void swapElements(int a[],int i,int j)
{
    int t;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
}
void sort(int a[],int size)
{
    int round,i,t;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
int countDuplicateElements(int a[],int size)
{
    int i,j,count=0;
    sort(a,size);
    for(i=0,j=1;j<size;j=i+1)
    {
        while(j<size && a[i]==a[j])
            j++;
        if(i+1<j)
            count++;
        i=j;
    }
    return count;
}
void printUniqueElements(int a[],int size)
{
    int i,j;
    sort(a,size);
    for(i=0,j=1;j<size;j=i+1)
    {
        printf("%d ",a[i]);
        while(j<size && a[i]==a[j])
            j++;
        i=j;
    }
    if(i==size-1)
        printf("%d",a[i]);
}
void merge(int A[],int B[],int size,int C[])
{
    int i,j,k;
    for(i=0,j=0,k=0;i<size && j<size ;k++)
    {
        if(A[i]>B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        C[k]=B[j];
        j++;
        k++;
    }

}
void findFrequency(int a[],int size)
{
    int i,j,count;
    sort(a,size);
    for(i=0,j=1;j<size;j=i+1)
    {
        printf("%d ",a[i]);
        count=1;
        while(j<size && a[i]==a[j])
        {    
            j++;
            count++;
        }
        printf("- %d\n",count);
        i=j;
    }
    if(i==size-1)
        printf("%d - %d",a[i],1);
}
int main()
{
    int a[]={7,11,5,8,8,5,11,12,8,10,9,11};
    //printf("Count=%d",countDuplicateElements(a,12));
    findFrequency(a,12);
    printf("\n");
    return 0;
}