#include<stdio.h>
#include<string.h>

// Q. 1 WAF to swap strings of two char arrays (TSRN)
void swapStrings(char s1[], char s2[])
{
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

// Q. 2 WAF to swap strings of two char arrays (TSRN)
void sort(int *p, int size)
    {
        int r, i, t;
        for (r=1;r<size;i++)
            {
                for (i=0;i<size-r;i++)
                    {
                        if (p[i] > p[i+1])
                            {
                                t = p[i];
                                p[i] = p[i+1];
                                p[i+1] = t;
                            }
                    }
            }
    }


// Q. 3 WAF to merge two arrays in given array
// void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
// {   
//     int i, j, k=0;
//     for (i=0;i<size1;i++, k++)
//         {
//             arr3[k] = arr1[i];
//         }
//     for (j=0;j<size2;j++, k++)
//         {
//             arr3[k] = arr2[j];
//         }
//     for (i=0;i<(size1+size2);i++)
//         printf("%d ", arr3[i]);
// }

// Sir Solution
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{   
    int i, j, k=0;
    for (i=0, j=0;i<size1 && j <size2;k++)
        {
            if (arr1[i] < arr2[j])
                {
                    arr3[k] = arr1[i];
                    i++;
                }
            else
                {
                    arr3[k] = arr2[j];
                    j++;
                }
        }
    while (i<size1)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    while (j<size2)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    for (i=0;i<(size1+size2);i++)
        printf("%d ", arr3[i]);
}


// int main()
// {
//     int s1, s2, i;
//     printf("Enter size of array1 & array2: ");
//     scanf("%d %d",&s1, &s2);
//     int a[s1], b[s2], c[s1+s2];
//     printf("Enter %d elements of array 1 & \n% d elements of array2: ", s1, s2);
//     for (i=0;i<s1;i++)
//         scanf("%d", &a[i]);
//     for (i=0;i<s2;i++)
//         scanf("%d", &b[i]);
//     merge(a, s1, b, s2, c);
//     return 0;
// }

// Q. 4 WAF to move first value of array to the position where all smaller values will be in left and greater value in right
// void sortAsc(int *arr1, int size1)
// {   
//     int i, j, temp;
//     for (i=1;i<size1;i++)
//         {
//             for (j=1;j<size1;j++)
//                 {
//                     if (*(arr1 + j - 1) > *(arr1 + j))
//                         {
//                             temp = *(arr1 + j - 1);
//                             *(arr1 + j - 1) = *(arr1 + j);
//                             *(arr1 + j) = temp;
//                         }
//                 }
//         }
//     for (i=0;i<size1;i++)
//         printf("%d ", arr1[i]);      
// }

// int main()
// {
//     int s1, i;
    
//     printf("Enter size of array1 : ");
//     scanf("%d",&s1);
//     int a[s1];
//     printf("Enter %d elements of array 1: ", s1);
//     for (i=0;i<s1;i++)
//         scanf("%d", &a[i]);
//     sort(a, s1);
//     return 0;
// }

// Sir Solution

int f1(int A[], int size)
    {
        int left, right, loc, temp;
        left = 0;
        right = size-1;
        loc = 0;

        while (left  < right)
            {
                while (left < right && A[loc] < A[right])
                    right--;
                if (left == right)
                    break;
                temp = A[right];
                A[right] = A[loc];
                A[loc] = temp;
                loc = right;
            
                while (left < right && A[left] < A[loc])
                    left++;
                if (left == right)
                    break;
                temp = A[left];
                A[left] = A[loc];
                A[loc] = temp;
                loc = left;
            }
        return loc;
    }

// Q. 5 There are 5 classes with different number of students. WAF to find highest marks of all.
// int HighestMarks(int *a1, int s1, int *a2, int s2, int *a3, int s3, int *a4, int s4, int *a5, int s5)
// {   
//     int i, max=0;
//     for (i=0;i<s1;i++)
//          if (a1[i] > max)
//             max = a1[i];
//     for (i=0;i<s2;i++)
//         if (a2[i] > max)
//             max = a2[i];
//     for (i=0;i<s3;i++)
//         if (a3[i] > max)
//             max = a3[i];
//     for (i=0;i<s4;i++)
//         if (a4[i] > max)
//             max = a4[i];
//     for (i=0;i<s5;i++)
//         if (a5[i] > max)
//             max = a5[i];
//     return max;
// }

// int main()
// {
//     int a[3]={90, 75, 40}, b[4] = {44, 76, 56, 88}, c[5] = {34, 29, 55, 47, 70};
//     int d[6] = {25, 76, 45, 87, 56, 76}, e[7] = {27, 57, 87, 44, 89, 65, 21};
//     printf("%d", HighestMarks(a, 3, b, 4, c, 5, d, 6, e, 7));
//     return 0;
// }

// Sir Solution

int HighestMarks(int **p, int no_of_classes, int num_of_students[])
{   
    int i, j, max=0;
    max = p[0][0];
    for (i=0;i<no_of_classes;i++)
        {
            for (j=0; j<num_of_students[i];j++)
                {
                    if (max < p[i][j])
                        max = p[i][j];
                }
        }
    return max;
}