#include<stdio.h>
#include<string.h>


// Q.1 WAF to store strings from user in 2D char array.

void InputStrings(char s[][20], int n)
{
    int i, l;
    for (int i=0;i<n;i++)
        {
            printf("Enter a String: \n");
            fgets(s[i], 20, stdin);
            l = strlen(s[i]);
            s[i][l-1] = '\0';
        }
}

// int main()
// {
//     char s[3][20];
//     int n=3;
//     InputStrings(s, 3);
//     return 0;
// }
// Q.2 WAP to find number of vowels in each of 5 strings stored in 2D char array, taken from user.

void CountVowels(char s[][20], int n)
{
    char v[] = "aeiouAEIOU";
    int i, j, c, k;
    InputStrings(s, n);
    for (i=0;i<n;i++)
        {
            for (j=0, c=0;s[i][j];j++)
                 for (k=0;v[k];k++)
                            if (s[i][j] == v[k])
                                c++;
            printf("Vowels in %s are: %d\n", s[i], c);
        }
}

// int main()
// {
//     char s[5][20];
//     CountVowels(s, 5);
//     return 0;
// }

// Q. 3 WAP to sort 10 city names stored in 2D array from user
void sort(char str[][20], int n)
{
    int r, i;
    char temp[20];
    for (r=1; r < n;r++)
        {
            for (i=0; i<n-r;i++)
                {
                    if (strcmp(str[i], str[i+1]) > 0)
                        {
                            strcpy(temp, str[i]);
                            strcpy(str[i], str[i+1]);
                            strcpy(str[i+1], temp);
                        }
                }
        }
} 

void display(char str[][20], int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("\n%s", str[i]);
}

// int main()
// {
//     char s[10][20];
//     InputStrings(s, 10);
//     sort(s,10);
//     printf("Sorted Cities are: \n");
//     display(s, 10);
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

int SplitToStrings(char str[], char s[][20], int n)
{
    int i, j=-1, n_w, k;
    n_w = CountWords(str);

    if (n_w <= n)
        for (i=0;i<n_w;i++)
            {
                for (j++, k=0;str[j]!= ' '&&str[j]!='\0';j++, k++)
                    s[i][k] = str[j];
                s[i][k] = '\0';
            }
    return n_w;
}

// int main()
// {
//     char s[10][20];
//     int n;
//     char str[]="Shri Krishna Govind Hare Murari!";
//     n = SplitToStrings(str, s, 10);
//     display(s, n);
// }

// Q. 5 WAF to remove duplicate names stored in the list of names stored in a 2D char array.

int remove_duplicate(char s[][20], int n)
{
    int i, j , k=0;
    char temp[n][20];
    sort(s, n);
    strcpy(temp[k],s[0]);
    for (i=0; i<n-1;)
        {
            for (j=i+1; j<n;j++)
                if (strcmp(s[i], s[j]) == 0)
                    continue;
                else
                    {
                        i=j;
                        k++;
                        strcpy(temp[k], s[j]);
                        break;
                    }
            if (j==n)
                break;
        }
    for (i=0;i<=k;i++)
        strcpy(s[i], temp[i]);
    return k+1;
}

int main()
{
    char s[10][20] = {"Raghav", "Madhav", "Madhav", "Gopal", "Gopal", "Raghav", "Govind", "Mahesh", "Mahesh", "Govind"};
    int n;
    n = remove_duplicate(s, 10);
    display(s, n);
    return 0;
}

