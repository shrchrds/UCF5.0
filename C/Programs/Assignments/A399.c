#include<stdio.h>
#include<string.h>
// Q.1 WAF to count frequency of each character of given string

void sort(char str[])
{
    int i, j, l;
    char ch;
    l = strlen(str);
    for (i=1;i<=l-1;i++)
        {
            for (j=0;j<=l-1-i;j++)
                {
                    if (str[j] > str[j+1])
                        {
                            ch = str[j];
                            str[j] = str[j+1];
                            str[j+1] = ch;
                        }
                }
        }
}

void CountFreq(char str[])
{
    int i, count;
    char temp[100];
    strcpy(temp, str);
    sort(temp);
    for (i=0, count=1;temp[i];i++)
        {
            if (temp[i] == temp[i+1])
                count++;
            else
                {
                    printf("%c : %d\n", temp[i], count);
                    count = 1;
                }
        }
}

// Q.2 WAF to find a word in given string

int FindWord(char s[], char w[])
{
    
    
    int i, j, l;
    l = strlen(w);
    for (i=0;i<=strlen(s)-l;i++)
        {
            for (j=0;j<l;j++)
                {
                    if (s[i+j] != w[j])
                        break;
                }
            if (j==l)
                return i;
        }
    return -1;
    
}

// WAF to make first character of each word of string Capital.

char* Capitalize(char s[])
{
    int i;
    if (s[0]<='z'&&s[0]>='a')
        s[0] = s[0] - 32;

    for (i=1;s[i];i++)
        {
            if (s[i-1] == ' ')
                {
                    if (s[i]<='z'&&s[i]>='a')
                        {
                            s[i] = s[i] - 32;
                        }
                }
        }

    return s;
}


// 3. WAF to make acronym name from a given name.

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

char* AcronymName(char s[])
{
    char temp[50];
    int i, n, j=1, k=0;
    if (s[0]>='a'&&s[0]<='z')
        temp[0] = s[0] - 32;
    else
        temp[0] = s[0];
    
    n = CountWords(s);
    for (i=1;s[i];i++)
        {
            if (s[i-1] == ' ')
                {
                    j++;
                    if (j==n)
                    {
                        k++;
                        temp[k] = ' ';
                        k++;
                        if (s[i]>='a'&&s[i]<='z')
                            temp[k] = s[i] - 32;
                        else
                            temp[k] = s[i];
                        for(k++, i++;s[i];i++, k++)
                            temp[k] = s[i];
                        temp[k] = '\0';
                    }
                    else
                        {
                            k++;
                            temp[k] = ' ';
                            k++;
                            if (s[i]>='a'&&s[i]<='z')
                                temp[k] = s[i] - 32;
                            else
                                temp[k] = s[i];
                        }                    
                }
        }
    strcpy(s, temp);
    return s;
}


// WAF to concatenate two strings.
char* ConcatStrings(char s1[], char s2[])
{
    int i, j, k=0;
    for (i=0;s1[i];i++);
    for (j=0;s2[j];j++, i++)
        s1[i] = s2[j];
    s1[i] = '\0';
    return s1;
}

int main()
{
    char s1[200], s2[400], ch;
    char s[200] = "shri krishna govind hare murari";
    // printf("Enter a string1: \n");
    // fgets(s, 200, stdin);
    // printf("Enter a string2: \n");
    // fgets(s1, 200, stdin);
    // printf("%d", FindCount(s, 'a'));
    // s[strlen(s)-1]=0;
    printf("%s",ConcatStrings(s, "he nath narayan vasudev"));
    // printf("%s",s);
}