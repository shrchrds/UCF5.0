#include<stdio.h>
#include<string.h>


// Q.1 WAF to store strings from user in 2D char array.

// int main()
// {
//     char s[3][20];
//     for (int i=0;i<3;i++)
//         {
//             fgets(s[i], 20, stdin);
//         }
//     printf("Stored Strings are: \n");
//     for (int i=0;i<3;i++)
//         {
//             printf("%s", s[i]);
//         }
//     return 0;
// }

// Q.2 WAP to find number of vowels in each of 5 strings stored in 2D char array, taken from user.
int CheckCharCount(char s[], char ch)
{
    int i, c=0;
    for (i=0;s[i];i++)
        {
            if (s[i] == ch)
                c++;
        }
    return c;
}

void CountVowels(char s[])
{
    char vowels[10]="aeiouAEIOU";
    int i, c=0, VowelsCount=0;
    for (i=0;s[i];i++)
        {
            c = CheckCharCount(s, vowels[i]);
            VowelsCount += c;
        }
    printf("No of Vowels in Given String are: %d\n", VowelsCount);
}

int main()
{
    char s[5][20];
    printf("Enter 5 String: \n");
    for (int i=0;i<5;i++)
        {
            fgets(s[i], 20, stdin);
        }
    printf("Number of Vowels in each string are: \n");
    for (int i=0;i<5;i++)
        CountVowels(s[i]);
    return 0;
}

// Q. 3 WAP to sort 10 city names stored in 2D array from user 

// int main()
// {
//     char s[10][20], temp [20], min [20];
//     printf("Enter 10 Cities: \n");
//     for (int i=0;i<10;i++)
//         {
//             fgets(s[i], 20, stdin);
//         }
    
//     // sorting cities
//     for (int i=1;i<10;i++)
//         {
//             for (int j=1;j<10;j++)
//                 {
//                     if (s[j-1] > s[j])
//                         {
//                             strcpy(temp, s[j-1]);
//                             strcpy(s[j-1], s[j]);
//                             strcpy(s[j], temp);
//                         }
                    
//                 }
//         }
    
//     printf("Sorted Cities are: \n");
//     for (int i=0;i<10;i++)
//         {
//             printf("%s", s[i]);
//         }
//         return 0;
// }

// 4. WAF to store each word of string in 2D array.
int CountWords(char s[])
{
    int c=1, i;
    for (i=0;s[i];i++)
        {
            if (s[i]==' ')
                {
                    c++;
                }
        }
    return c;
}

void StoreWords(char s[])
{
    int i, j=0, l, c, k=0, m;
    l = strlen(s);
    c = CountWords(s);
    // printf("%d %d",l, c);
    char s1[c][l];
    for (i=0;s[i];i++)
        {
            if (s[i] == ' '||s[i]==s[l-1])
                {
                    m=0;
                    for (j;j<i;j++)
                        {
                            s1[k][m++] = s[j];
                            // printf("%c", s[j]);
                        }
                    // printf("\n");
                    s1[k][m++] = 0;
                    k++;
                    j++;
                }                
        }
    s1[k][m++] = 0;
    for (i=0;i<c;i++)
        printf("%s\n", s1[i]);
}


// Q. 5 WAF to remove duplicate names stored in the list of names stored in a 2D char array.

// int main()
// {
//     char s[4][20] = {"Gopal", "Govind", "Mahesh", "Govind"}, l1[4][20], temp[20];
//     int i, j, k=0, flag;
//     // Sorting names
//     for (int i=1;i<4;i++)
//             {
//                 for (int j=1;j<4;j++)
//                     {
//                         if (s[j-1] > s[j])
//                             {
//                                 strcpy(temp, s[j-1]);
//                                 strcpy(s[j-1], s[j]);
//                                 strcpy(s[j], temp);
//                             }                        
//                     }
//             }
    
//     for (i=0;i<4;i++)
//         {
//             if (i<3)
//                 {
//                     if (strcmp(s[i], s[i+1])==0)
//                         continue;
//                     else
//                         {
//                             if (strcmp(s[i], s[i-1])==0)
//                                 strcpy(l1[k++], s[i]);
//                             else
//                                 strcpy(l1[k++], s[i]);
//                         }
//                 }
//             if (i==3)
//                 strcpy(l1[k], s[i]);
//         }
    
//     for (i=0;i<=k;i++)
//         printf("%s\n", l1[i]);
// }

