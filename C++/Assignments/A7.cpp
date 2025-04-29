#include<iostream>
using namespace std;

// Q. 1 Define a function to calculate HCF of two numbers

int HCF(int a, int b)
{
    int i, l;
    l = a<b?a:b;
    for (i=l;i<a*b;l++)
        {
            if (l%a==0 && l%b == 0)
                return l;
        }
}

// Q. 2 Define a overloaded function to calculate volum of cuboid, cone and sphere

float volume(float l, float b, float h)
{
    return l*b*h;
}

double volume(float r, float h)
{
    return 1/3.0*3.14*r*r*h;
}

float volume(float r)
{
    return (4/3.0)*3.14*r*r*r;
}

// Q. 3 Define a function to print a substring from start index to end index(exlusive). define if second argument is not given, print till last index

void PrintSubstring(char s[], int size, int start, int end)
{
    int l;
    for (l=start;l<end;l++)
        cout<<s[l];
}

// Q. 4 Define a function to swap two arrays

void SwapTwoArrays(int *a, int *b, int n)
{
    int temp[n];
    int i;
    for (i=0;i<n;i++)
        temp[i] = a[i];
    for (i=0;i<n;i++)
        a[i] = b[i];
    for (i=0;i<n;i++)
        b[i] = temp[i];
}

// Q. 5 Define a function to merge two sorted array of same size

int* MergeArrays(int a[], int b[], int n, int c[])
    {
        int i, j, k;
        for (i=0,j=0,k=0;i<n&&j<n;k++)
            {
                if (a[i] < b[j])
                    {
                        c[k] = a[i];
                        i++;
                    }
                else if (a[i] > b[j])
                    {
                        c[k] = b[j];
                        j++;
                    }
            }
        if (i<n)
            {
                while (i<n)
                    {
                        c[k] = a[i];
                        i++;
                    }
            }
        if (j<n)
            {
                while (j<n)
                    {
                        c[k] = b[j];
                        j++;
                    }
            }
        return c;
    }

int main()
{
    int a[] = {1, 2, 13, 24, 31};
    int b[] = {6, 27, 28, 29, 30};
    int c[10]={0};
    int *p;
    char s[] = "shivanand";
    // RotateArray(a, 5, -1, 3);
    p = MergeArrays(a, b, 5, c);
    int i;
    // for (i=0;i<5;i++)
    //     cout<<a[i]<<" ";
    // cout<<endl;
    for (i=0;i<10;i++)
        cout<<p[i]<<" ";
    
    // PrintPrimeFactors(45);
    // printf("%s", s);
}