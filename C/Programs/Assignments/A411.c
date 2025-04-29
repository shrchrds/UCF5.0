#include<stdio.h>
#include<string.h>
char* TrimString(char s[])
{
    int i1=0, i2, l, d;
    l = strlen(s);
    char s1[l];
    i2 = l-1;
    while (s[i1]==' ')
        i1++;
    while (s[i2]==' ')
        i2--;
    d = i2-i1+1;
    for (int i=i1, j=0;i<=i2;i++, j++)
        s1[j]=s[i];
    s1[d] = 0;
    strcpy(s, s1);
    return s;
}

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

// Q. 1 WAP to find words ending with 's' and store it in 2D char array.

void FindWordsEndingWithS()
{
    char str[] = "Shri Krishna Govind Hare Murari He Nath Narayan Vasudev. Mantras Gurus";
    char s[20][20], temp[100][20];
    int i, j, n_w;
    n_w = SplitToStrings(str, temp, strlen(str));
    for (i=0,j=0;i<n_w;i++)
        {
            if (temp[i][strlen(temp[i])-1] == 's')
                {
                    strcpy(s[j], temp[i]);
                    j++;
                }
        }
    for (i=0;i<j;i++)
        printf("\n%s", s[i]);
}

// int main()
// {
//     FindWordsEndingWithS();
//     return 0;
// }

// 2. WAF to return most repeating character in a list of strings

char MaxFreqChar(char s[][20], int n)
    {
        int freq[256] = {0};
        int i, j, max;
        char ch;

        for (i=0; i<n; i++)
            {
                for (j=0; s[i][j];j++)
                    freq[s[i][j]]++;
            }
        max=freq[0];
        ch = 0;
        for (i=1;i<256;i++)
            if (max < freq[i])
                {
                    max = freq[i];
                    ch = i;
                }
        return ch;
    }

// int main()
// {
//     char s[][20] = {"Krishna", "Madhav", "Govind", "Radheshyam"};
//     printf("%c", MaxFreqChar(s, 4));

// }

// 3. WAF to check whether a pair of strings are anagram or not. Both the strings are stored in 2D array.

int isAnagram(char s1[], char s2[])
    {
        int f1[256] = {0}, f2[256] = {0};
        int i;
        for (i=0;s1[i];i++)
            f1[s1[i]]++;
        for (i=0;s2[i];i++)
            f2[s2[i]]++;
        
        for (i=0;i<256;i++)
            if (f1[i]!=f2[i])
                return 0;
        return 1;
    }

// int main()
// {
//     char s1[20]="takes";
//     char s2[20]="steaa";

//     printf("%d", isAnagram(s1, s2));
//     return 0;
// }

// 4. WAF to store all the words in a given string which are starting from 'a', in 2D char array.

void FindWordsStartingWithA()
{
    char str[] = "Ambe Jagdambe Amruta Arati Karato Tujhi";
    char s[20][20], temp[100][20];
    int i, j, n_w;
    n_w = SplitToStrings(str, temp, strlen(str));
    for (i=0,j=0;i<n_w;i++)
        {
            if (temp[i][0] == 'a'||temp[i][0] == 'A')
                {
                    strcpy(s[j], temp[i]);
                    j++;
                }
        }
    for (i=0;i<j;i++)
        printf("\n%s", temp[i]);
}

// int main()
// {
//     FindWordsStartingWithA();
//     return 0;
// }

// 2 D array is full with 10 email IDs. WAF to find how many of them belogs to gmail.com

int CountGmail(char s[][50], int n)
{
    char text[] = "@gmail.com";
    int i, c=0, j, k;
    for (i=0; i<n;i++)
        {
            if (strlen(s[i]) > 10)
            {
                for (k=0, j = strlen(s[i]) - 10;s[i][j]; j++, k++)
                    if (text[k]!=s[i][j])
                            break;
                if (!text[k])
                    c++;
            }
        }
    return c;
}

int main()
{
    char emailIDs[][50] = {
            "abc@gmail.com", 
            "smita@yahoo.com",
             "amruta@hotmail.com", 
             "pavan@gmail.com", 
             "wangchuk@yahoo.com", 
             "jay@google.co.in"
            };
    printf("%d", CountGmail(emailIDs, 6));
    return 0;

}
