#include<iostream>
#include<string>
using namespace std;


// Q. 1 Define a function to sort an array of integers in ascending or descending order(default arg True for ascending)

int* SortArray(int a[], int n, int ascending=1)
{
    int i, r, t;
    for (r=1;r<n;r++)
        {
            if (ascending)
                { 
                    for (i=1;i<=n-r;i++)
                    {
                        if (a[i-1] > a[i])
                            {
                                t = a[i-1];
                                a[i-1] = a[i];
                                a[i] = t;
                            }
                    }
                }
            else
                {
                    for (i=1;i<=n-r;i++)
                    {
                        if (a[i-1] < a[i])
                            {
                                t = a[i-1];
                                a[i-1] = a[i];
                                a[i] = t;
                            }
                    }
                }
        }
    return a;
}

// Q. 2 Define a function to sort string array of in ascending or descending order(default arg True for ascending)

char* SortArray(char s[], int ascending=1)
{
    int i, r, t, l;
    for (l=0;s[l];l++);
    for (r=1;r<l;r++)
        {
            if (ascending)
                { 
                    for (i=1;i<=l-r;i++)
                    {
                        if (s[i-1] > s[i])
                            {
                                t = s[i-1];
                                s[i-1] = s[i];
                                s[i] = t;
                            }
                    }
                }
            else
                {
                    for (i=1;i<=l-r;i++)
                    {
                        if (s[i-1] < s[i])
                            {
                                t = s[i-1];
                                s[i-1] = s[i];
                                s[i] = t;
                            }
                    }
                }
        }

    return s;
}

// Q. 3 Define a function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. d = -1 or 1. n last argument default 1
int* RotateArray(int a[], int size, int d=1, int n=1)
{
    int b[size]={0};
    int i, j=0;   
    if (d==1)
        {
            for (i=0;i<size;i++)
            {
                if (i<n)
                    {
                        b[j] = a[size-1-i];
                        j++;
                    }
                else
                    {
                        b[j] = a[i-n];
                        j++;
                    }
            }
        }
    else
        {
            for (i=0;i<size;i++)
            {
                if (i<n)
                    {
                        b[size-n+j] = a[i];
                        j++;
                    }
                else
                    {
                        b[j-n] = a[i];
                        j++;
                    }
            }
        }
    for (i=0;i<size;i++)
        a[i] = b[i];
    return a;
}

// Q. 4. Write function to calculate LCM of 3 numbers
int highest(int a, int b, int c)
{
    if (a>b)
        {
            if (a>c)
                return a;
            else
                return c;
        }
    else if (b >c)
        return b;
    else 
        return c;
}
int LCM(int a, int b, int c)
{
    int h, i;
    h = highest(a, b, c);
    for (i=h;h<a*b*c;h++)
        {
            if (h%a==0 && h%b==0 && h%c==0)
                return h;
        }
}

// Q. 5. Write function to print all prime factors of given number

int* remove_duplicates(int a[], int n)
{
    SortArray(a, n);
    int nd[n];
    int l=0, i;
    nd[l++] = a[0]; 
    for (i=1;i<n;i++)
        {
           if (a[i] != a[i-1])
                {
                    nd[l++] = a[i];
                }
        }
    for (i=0;i<l;i++)
        {
            a[i] = nd[i];
        }
    for (i=l;i<n;i++)
        a[i] = 0;
    // cout<<endl;
    return a;
}

void PrintPrimeFactors(int n)
{
    int i, k=0, l;
    int a[10]={0};
    while (n!=1)
        {
            for (i=2;i<=n;)
                {
                    if (n%i==0)
                        {
                            a[k] = i;
                            n = n/i;
                            k++;
                        }
                    else
                        i++;
                }
        }
    for (l=0;a[l]!=0;l++);
    remove_duplicates(a, l);
    for (l=0;a[l]!=0;l++);
    for (i=0;i<l;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    // for (l=0;a[l]!=0;l++);
    // for (i=0;i<l;i++)
    //     cout<<a[i]<<" ";
}


int main()
{
    int a[] = {1, 2, 3, 2, 4};
    char s[] = "shivanand";
    // RotateArray(a, 5, -1, 3);
    // remove_duplicates(a, 5);
    // int i;
    // for (i=0;i<5;i++)
    //     if (a[i]!=0)
    //         cout<<a[i]<<" ";
    
    PrintPrimeFactors(45);
    // printf("%s", s);
}