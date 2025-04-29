#include<stdio.h>
// 1. WAP to sort an array of size 10. 

void SortedArray(int a[], int n)
{
    int i, j, c;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0; i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (a[i] > a[j])                   
                    {
                        c = a[j];
                        a[j] = a[i];
                        a[i] = c;
                    }                
            }
        }
    printf("Sorted Elements of an array are: ");
    for (i=0;i<n;i++)
        printf("%d ", a[i]);
}

// 2. WAP to Second largest in array. 

void SecondLargest(int a[], int n)
{
    int i, j, c;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0; i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (a[i] < a[j])                   
                    {
                        c = a[j];
                        a[j] = a[i];
                        a[i] = c;
                    }                
            }
        }
    printf("Second Largest Element of an array is: ");
    printf("%d ", a[1]);
}

// 2. WAP to Second smallest in array. 

void SecondSmallest(int a[], int n)
{
    int i, j, c;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0; i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (a[i] > a[j])                   
                    {
                        c = a[j];
                        a[j] = a[i];
                        a[i] = c;
                    }                
            }
        }
    printf("Second Smallest Element of an array is: ");
    printf("%d ", a[1]);
}

// 4. WAP to sort an array of size 10 in descending order. 

void SortedArrayDesc(int a[], int n)
{
    int i, j, c;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0; i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (a[i] < a[j])                   
                    {
                        c = a[j];
                        a[j] = a[i];
                        a[i] = c;
                    }                
            }
        }
    printf("Sorted Elements of an array are: ");
    for (i=0;i<n;i++)
        printf("%d ", a[i]);
}

// 5. WAP to Copy elements of one array into another. 

void CopyArray(int a[], int n, int b[])
{
    int i, j, c;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0; i<n;i++)
        {
            b[i] = a[i];
        }
    printf("Copied elements in new array are: ");
    for (i=0;i<n;i++)
        printf("%d ", b[i]);
}

int main()
{
    int a[10], n=10, b[10];
    CopyArray(a, n, b);
    return 0;
}