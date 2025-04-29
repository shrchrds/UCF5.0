#include<stdio.h>

// 1. WAf to find greatest numbers stored in array of ANY size. 
int MaxNum(int a[], int n)
{
    int i, max;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max = a[0];
    for (i=0;i<n;i++)
        {
            if (a[i]>max)
                max = a[i];
        }
    return max;
}

// 2. WAf to find smallest numbers stored in array of ANY size. 

int MinNum(int a[], int n)
{
    int i, min;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    min = a[0];
    for (i=0;i<n;i++)
        {
            if (a[i]<min)
                min = a[i];
        }
    return min;
}

// 3. WAF to sort an array of any size.
void SortArray(int a[], int n)
{   
    int i, round, t;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (round=1;round<n;round++)
        for (i=0;i<n-round;i++)
            {
                if (a[i] > a[i+1])
                    {
                        t = a[i];
                        a[i] = a[i+1];
                        a[i+1] = t;
                    }
            }

    printf("Sorted Elements of an array are: \n");
    for (int i=0;i<n-1;i++)
        printf("%d, ",a[i]);
}

// Q4. WAF to rotate an array by n position in d direction. d is left or right.

void RotateArray(int a[], int n, int d)
{
    int i, b[n];
    printf("Enter an elements of an array: ");
    for (i=0;i<5;i++)
        scanf("%d", &a[i]);
    if (d==0)
        {
        for (i=0;i<5;i++)
            if (i>=n)
                b[i-n] = a[i];
            else
                b[5-n+i] = a[i];
            }
    else if (d==1)
        {
        for (i=0;i<5;i++)
            if (i>=n)
                b[i-n] = a[i];
            else
                b[5-n+i] = a[i];
            }
    printf("New elements after rotation: \n");

    for (i=0;i<5;i++)
        printf("%d ", b[i]);
}

// WAF to find first occurence of adjacent duplicate values in the array. Return value of element

int FirstOccurence(int a[], int n)
{
    int i;
    printf("Enter values for an array: \n");
    for (i=1;i<n;i++)
        scanf("%d",&a[i]);
    for (i=1;i<n;i++)
        if (a[i] == a[i+1])
            return a[i];
    
}

int main()
{
    int a[5], n, d;
    printf("Enter number of positions and direction d=0 for left and 1 for right: ");
    scanf("%d%d", &n, &d);
    RotateArray(a,n,d);
    // printf("%d", FirstOccurence(a, s));
    return 0;
}