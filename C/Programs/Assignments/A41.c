#include<stdio.h>
#include<string.h>
// Q. 1 WAP to find words ending with 's' and store it in 2D array.

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

void FindWordsEndingWithS(char s[])
{
    int i, j=0, l, c, k=0, m;
    l = strlen(s);
    c = CountWords(s);
    char s1[c][l];
    for (i=0;s[i];i++)
        {
            if ((s[i] == ' '||s[i]==s[l-1]))
                {
                    m=0;
                    for (j;j<i;j++)
                        {
                            if (s[i-1]=='s')
                                {
                                    s1[k][m++] = s[j];
                                }
                        }
                    if (s[i-1]=='s')
                        {
                            s1[k][m++] = 0;
                            k++;                            
                        }
                    j++;
                }                
        }
    s1[k][m++] = 0;
    for (i=0;i<k;i++)
        printf("%s\n", s1[i]);
}

// 2. WAF to return most repeating character in a list of strings

int CheckChar(char s[], char ch)
{
    int i, flag=0;
    for (i=0;s[i];i++)
        {
            if (s[i] == ch)
                flag = 1;
        }
    return flag;
}

void UniqueString(char s[], char s1[])
{
    int i, j;
    for (i=0, j=0;s[i];i++)
        {
            if (CheckChar(s1, s[i]))
                continue;
            else
                {
                    s1[j] = s[i];
                    j++;
                }
        }
    s1[j] = 0;
    // for (i=0, j=0;s[i];i++)
    //     printf("%c",s1[i]);
}

int GetCharCount(char s[], char ch)
{
    int i, c=0;
    for (i=0;s[i];i++)
        {
            if (s[i] == ch)
                c++;
        }
    return c;
}

// int main()
// {
//     char s[2][20];
//     int i, l, max, c, t;
//     char EntireString[500]="";
//     char str[20], maxChar;
    
//     printf("Enter a String: \n");
//     for (i=0;i<2;i++)
//         fgets(s[i], 20, stdin);
//     // Concat all strings
    
//     for (i=0;i<2;i++)
//         {
//             strcpy(str, s[i]);
//             l = strlen(str);
//             str[l-1] = 0;
//             strcat(EntireString, str);
//         }
//     // Find Unique String
//     l = strlen(EntireString);
//     char uniqueStr[l];
//     UniqueString(EntireString, uniqueStr);

//     // finding most repeating char
//     max = 0;
//     maxChar = EntireString[0];
//     for (i=0;uniqueStr[i];i++)
//         {
//             c = GetCharCount(EntireString, uniqueStr[i]);
//             if (c>max)                
//                     {
//                         max = c;
//                         maxChar = uniqueStr[i];
//                     }
//         }
//     printf("Most Repeating Character is: %c", maxChar);
//     return 0;
// }

// 3. WAF to check whether a pair of strings are anagram or not. Both the strings are stored in 2D array.

void SortString(char s[])
{
    int i, j, t, l;
    l = strlen(s);
    for (i=1; i<l;i++)
        {
            for (j=1;j<=l-i;j++)
                {
                    if (s[j-1] > s[j])
                        {
                            t = s[j-1];
                            s[j-1] = s[j];
                            s[j] = t; 
                        }
                }
        }
}

// int main()
// {
//     char s1[20]="listen";
//     char s2[20]="silenc";
//     SortString(s1);
//     SortString(s2);
//     if (strcmp(s1, s2) == 0)
//         printf("Anagram");
//     else
//         printf("NOT Anagram");
//     return 0;
// }

// 4. WAF to store all the words in a given string which are starting from 'a', in 2D char array.

void FindWordsStartingWithA(char s[])
{
    int i, j=0, l, c, k=0, m;
    l = strlen(s);
    c = CountWords(s);
    char s1[c][l];
    for (i=0;i<=l;i++)
        {
            if ((s[i] == ' '||s[i]=='\0'))
                {                    
                    if (s[j]=='a')
                        {    
                            m=0;
                            for (;j<i;j++)
                                {
                                    s1[k][m++] = s[j];                                      
                                }
                            s1[k][m] = 0;
                            k++;
                            j++;
                        }
                    else
                        j = i+1;                    
                }                
        }
    for (i=0;i<k;i++)
        printf("%s\n", s1[i]);
}

// 2 D array is full with 10 email IDs. WAF to find how many of them belogs to gmail.com

int main()
{
    int i, j, k,c=0,l;
    char s[9][20];
    printf("Enter a String: \n");
    for (i=0;i<9;i++)
        {
            fgets(s[i],20,stdin);
            l = strlen(s[i]);
            s[i][l-1]=0;
        }
    for (i=0;i<9;i++)
        {
            l = strlen(s[i]);
            for (j=0;j < l;j++)
                {                    
                    if (s[i][j] == '@'&&s[i][j+1]=='g')
                        {
                            if (s[i][j+2]=='m'&&s[i][j+3]=='a'&&s[i][j+4]=='i'&&s[i][j+5]=='l')
                                c++;
                        }
                }
        }
    printf("Count of gmail: %d",c);
    return 0;
}