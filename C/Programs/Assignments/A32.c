#include<stdio.h>

// 1. WAf to swap two elements of given array with specified indexes.
void SwapElements(int a[], int i1, int i2)
{
    int i, t;

    t = a[i1];
    a[i1] = a[i2];
    a[i2] = t;
    printf("New elements after swap: \n");
    for (i=0;i<5;i++)
        printf("%d ", a[i]);
    
}

// 2. WAf to count duplicate elements in given array.
void SortArray(int a[], int n)
{   
    int i, round, t;
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
}

int FindCount(int a[], int n, int ele)
{
    int i, c=0;
    for (i=0;i<n;i++)
        {
            if (a[i]==ele)
                {
                    c++;
                }
        }
    return c;
}


int CountDuplicates(int a[], int n)
{
    int i, j, c=0;
    SortArray(a, n);
    for (i=0,j=1;i<n;j=i+1)
        {
            while (j<n && a[i]==a[j])
                {
                    j++;
                }
            if (i+1<j)
                c++;
            i = j;
        }
    return c;
    
}

// 3. WAf to print unique elements in given array.
void PrintUnique(int a[], int n)
{
    int i, j;
    SortArray(a, n);
    for (i=0,j=1;i<n;j=i+1)
        {
            printf("%d ", a[i]);
            while (a[i]==a[j])
                j++;    
            i = j;  
        }
}

// 4. WAf to merge two arrays of same size sorted in descending order.
// void MergeArray(int a[], int b[], int n)
// {
//     int i, c[2*n];
//     for (i=0;i<n;i++)
//         {
//             c[i] = a[i];
//             c[i+n] = b[i];
//         }
//     printf("\nElements of an aray before sorting are: \n");
//     for (i=0;i<2*n;i++)
//         printf("%d ", c[i]);
//     SortArray(c, 2*n);
//     printf("Sorted Elements of an aray are: \n");
//     for (i=0;i<2*n;i++)
//         printf("%d ", c[i]);
// }

void MergeArray(int a[], int b[], int n)
{
    int i, j, k, e, p;
    int c[2*n];
    for (i=0,j=0,k=0;k<2*n;k++)
        {
            if ((i < n) && (a[i] > b[j]))
            {
                c[k] = a[i];
                i++;
            }
            else if ((j < n) && (a[i] < b[j]))
                {
                    c[k] = b[j];
                    j++;
                }
            else if (i < n)
                {
                    c[k] = a[i];
                    i++;
                }
            else
                {
                    c[k] = b[j];
                    j++;
                }
        }

    printf("Sorted Elements of an aray are: \n");
    for (i=0;i<2*n;i++)
        printf("%d ", c[i]);
}
// 5. WAF to count frequency of each element of an array.
void CountFrequency(int a[], int n)
{
    int i, j, c=0;
    SortArray(a, n);
    for (i=0,j=1;i<n;j=i+1)
        {
            c=1;
            while (a[i]==a[j])
                {
                    j++;
                    c++;
                }   
            printf("%d : %d\n", a[i], c);
            i = j;  
        }
}

int main()
{
    int a[4] = {17, 14,13, 2};
    int b[4] = {18, 12, 5, 1};
    // int c[6];
    MergeArray(a, b, 4);
    // printf("%d", CountDuplicates(a, 7));
    return 0;
}