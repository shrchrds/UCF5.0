#include<stdio.h>
// Q.1 WAF to count frequency of each character of given string

int len(char s[])
{
    int i, c=-1;
    for (i=0;s[i];i++)
        c++;
    return c;
}

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

int FindCount(char s[], char ch)
{
    int i, c=0;
    for (i=0;s[i];i++)
        {
            if (s[i]==ch)
                c++;
        }
    return c;
}

void FindFrequency(char s[])
    {
        int i, c=0;
        char s1[200]="";
        UniqueString(s, s1);
        for (i=0;s1[i];i++)
            {
                c = FindCount(s, s1[i]);
                printf("%c: %d\n",s1[i],c);
            }
    }

// Q.2 WAF to find a word in given string

void FindWord(char s[], char w[])
{
    int i=0,j, l, flag=0;
    while (s[i]!=w[0])
        i++;
    for (j=0;w[j];j++)
        {
            if (w[j]==s[i])
                {
                    flag = 1;
                    i++;
                }
            else
                flag = 0;
        }
    l = len(w);
    if (flag)
        printf("Word found between indexes %d - %d",i-l-1,i-1);

    
}

// WAF to make first character of each word of string Capital.

void Capitalize(char s[])
{
    int i, j;
    i = 0;
    s[0] = s[0]-32;
    while (s[i])
        {
            if (s[i]==' ')
                {                                   
                    s[i+1] = s[i+1]-32;
                }
            i++;             
        }
    printf("\n");
    for (i=0;s[i];i++)
        printf("%c",s[i]);
}


// WAF to make acronym name from a given name.

int CountWords(char s[])
{
    int c=1, i;
    for (i=0;s[i];i++)
        {
            if (s[i]==' ')
                c++;
        }
    return c;
}

void AcronymName(char s[], char s1[])
{
    int i=0, l, c, k=0;
    c = CountWords(s);
    if (s[0]>='a'&&s[0]<='z')
        s1[k] = s[0] - 32;
    else
        s1[k] = s[0];
    k++;
    if (c==2)
        {
            while (s[i]!=' ')
                i++; 
            for (i;s[i];i++, k++)
                {
                    s1[k] = s[i];
                }
        }
    else if (c==3)
        {
            while (s[i]!=' ')
                i++;
            s1[k++] = s[i];
            s1[k++] = s[i+1];
            i++; 
            while (s[i]!=' ')
                i++; 
            for (i;s[i];i++, k++)
                {
                    s1[k] = s[i];
                }
        }
    s1[k++] = 0;
    for (i=0;s1[i];i++)
        printf("%c",s1[i]);
}


// WAF to concatenate two strings.
void ConcatStrings(char s[], char s1[], char s2[])
{
    int i, j, k=0;
    for (i=0;s[i];i++,k++)
        s2[k] = s[i];
    s2[k-1] = ' ';
    for (j=0;s1[j];j++,k++)
        {
            s2[k] = s1[j];
            printf("%c", s2[k]);
        }
    s2[k] = 0;
}

int main()
{
    // char s[200], s1[200], s2[400], ch;
    // printf("Enter a string1: \n");
    // fgets(s, 200, stdin);
    // printf("Enter a string2: \n");
    // fgets(s1, 200, stdin);
    // printf("%d", FindCount(s, 'a'));
    char s[] = "abacbaabccbbaabbc", s1[] = "abc";
    FindWord(s, s1);
}