#include<stdio.h>
// 1. WAP to find sum of numbers stored in array of size 10. 
int ArraySum(int a[], int n)
{
    int i, sum=0;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        sum += a[i];
    return sum;
}

// 2. WAP to find average of numbers stored in array of size 10. 
float ArrayAverage(int a[], int n)
{
    int i,sum=0;
    float avg=0.0, N;
    N = n;
    printf("Enter %d values for array: ",n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        sum += a[i];
    avg = sum/N;
    return avg;
}

// 3. WAP to find sum of all even numbers and odd numbers stored in array of size 10. 

void ArraySumEvenOdd(int a[], int n)
{
    int i, OddSum=0, EvenSum=0;
    printf("Enter values for array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        {
            if (a[i]%2)
                OddSum+=a[i];
            else if (a[i]%2==0)
                EvenSum+=a[i];
        }
    printf("Sum of Even numbers is: %d\n", EvenSum);
    printf("Sum of Odd numbers is: %d", OddSum);
}

// 4. WAP to find greatest numbers stored in array of size 10. 
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

// 4. WAP to find smallest numbers stored in array of size 10. 
int MinNum(int a[], int n)
{
    int i, min=999999;
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

int main()
{
    int a[10], m;   
    m = MinNum(a,10);
    printf("Minimum Number in Array is: %d",m);
    return 0;
}