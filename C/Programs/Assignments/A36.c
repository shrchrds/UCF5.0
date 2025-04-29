#include<stdio.h>
// Q.1 WAF to calculate length of string
int len(char s[])
{
    int i, c=-1;
    for (i=0;s[i];i++)
        c++;
    return c;
}

// Q. 2 WAF to reverse a string
void reverseString(char s[], int n)
{
    if (n>0)
        {
            printf("%c",s[n-1]);
            reverseString(s, n-1);
        }
}

char* reverseStr(char s[])
{
    int i, l;
    char ch;
    for (l=0;s[l];l++);
    for (i=0;i<l/2;i++)
        {
            ch = s[i];
            s[i] = s[l-i-1];
            s[l-i-1] = ch;
        }
    return s;
}

// Q. 3 WAF to compare two strings
void CompareString(char s1[], char s2[])
{
    int l1, l2, i, flag;
    l1 = len(s1);
    l2 = len(s2);
    if (l1==l2)
        {
            for (i=0;i<l1;i++)
                {
                    if (s1[i]==s2[i])
                        flag = 1;
                    else
                        flag = 0;
                }
            if (flag)
                printf("Both Strings are Equal.");
            else
                printf("Both Strings are Equal.");
        }
    else if (l1>l2)
        printf("String 1 is having length more than String 2");
    else
        printf("String 2 is having length more than String 1");
    
}

// Solution
int CompareStr(char s1[], char s2[])
{
    int i;
    for (i=0;s1[i]&&s2[i];i++)
        {
             if (s1[i]!=s2[i])
                return s1[i] - s2[i];
        }
    return s1[i] - s2[i];
}

// Q. 4 WAF to transform string in uppercase

void StrUpper(char s[])
    {
        int l, i;
        l = len(s);
        char s1[l];
        for (i=0;i<l;i++)
            {
                s1[i] = s[i]-32;
            }
        for (i=0;i<l;i++)
            {
                printf("%c", s1[i]);
            }
    }

// Solution
char* Upper(char s[])
{
    int i;
    for (i=0;s[i];i++)
        {
            if (s[i]>='a' && s[i] <= 'z')   
                {
                    s[i] = s[i] - 32;
                }                
        }   
    return s;
}

// Q. 5 WAF to transform string in lowercase

void StrLower(char s[])
    {
        int l, i;
        l = len(s);
        char s1[l];
        for (i=0;i<l;i++)
            {
                if (s[i]>='A'&&s[i]<='Z')
                    s1[i] = s[i]+32;
                else
                    s1[i] = s[i];
            }
        for (i=0;i<l;i++)
            {
                printf("%c", s1[i]);
            }
    }

// Solution
char* Lower(char s[])
{
    int i;
    for (i=0;s[i];i++)
        {
            if (s[i]>='A' && s[i] <= 'Z')   
                {
                    s[i] = s[i] + 32;
                }                
        }   
    return s;
}

int main()
{
    char s1[200], s2[200];
    int i, c=0, l=0;
    char ch;
    printf("Enter a string1: \n");
    fgets(s1, 200, stdin);
    // printf("Enter a string2: \n");
    // fgets(s2, 200, stdin);
    // l = len(s1);
    StrLower(s1);
    return 0;
}