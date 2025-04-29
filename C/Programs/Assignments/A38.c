#include<stdio.h>
// Q.1 WAF to check whether given string is palindrome or not

int len(char s[])
{
    int i, c=-1;
    for (i=0;s[i];i++)
        c++;
    return c;
}

void CheckPalindrome(char s[])
{
    int i, l, flag=0;
    l = len(s);
    char s1[l];
    for (i=0;i<=l/2;i++)
        {
            if (s[i] == s[l-i-1])
                flag = 1;
            else
                flag = 0;
        }
    if (flag)
        printf("Given string is Palindrome.");
    else
        printf("Given string is NOT Palindrome.");
}   

// Q.2 WAF to trime a string
void TrimString(char s[], char s1[])
{
    int i1=0, i2, l, d;
    l = len(s);
    
    i2 = l-1;
    while (s[i1]==' ')
        {
            i1++;
        }
    while (s[i2]==' ')
        {
            i2--;
        }
    d = i2-i1+1;
    for (int i=i1, j=0;i<i2;i++, j++)
        {
            s1[j]=s[i];
        }
    s1[d] = 0;
    
}

// Q.3 WAF to count words in given string
int CountWords(char s[])
{
    TrimString(s, s);
    int c=1, i;
    for (i=0;s[i];i++)
        if (s[i]==' ')
            c++;
    return c;
}

// Q. 4. WAF to reverse a string word wise.
void ReverseWordWise(char s[], char s1[])
{
    int i, j, i1, i2, i2_, l, l1, k=0;
    l = len(s);
    i = l-1;
    i1 = i;
    while (i>=0)
        {
            if (s[i]==' '||i==0)
                {
                    if (i==0)
                        i2 = i;
                    else
                        i2 = i+1;                      
                    i2_=i2;
                    for (j=0; j<=(i1-i2);j++)
                        {
                            s1[k] = s[i2_];
                            i2_++;
                            k++;
                        }
                    if (k<l)
                        {
                            s1[k] = ' ';
                            k++;
                            i1 = i2-2;
                        }
                    else
                        s1[l] = 0;
                }
            i--;             
        }
    printf("\n");
    for (i=0;s1[i];i++)
        printf("%c",s1[i]);
}


// Q. 5 WAF to do case sensitive comparison of two string.
void StrLower(char s[], char s1[])
    {
        int l, i;
        for (i=0;i<l;i++)
            {
                if (s[i]>='A'&&s[i]<='Z')
                    s1[i] = s[i]+32;
                else
                    s1[i] = s[i];
            }
    }

int CompareString(char s1[], char s2[])
{
    int l1, l2, i, flag;
    l1 = len(s1);
    l2 = len(s2);
    StrLower(s1, s1);
    StrLower(s2, s2);
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
                return 0;
        }
    else if (s1[0]<s2[0])
        return -1;
    return 1;
    
}


  

int main()
{
    char s[200], ch;
    int i, l;
    printf("Enter a string1: \n");
    fgets(s, 200, stdin);
    // l = len(s);
    // char s1[l];
    // printf("Enter a string2: \n");
    // fgets(s1, 200, stdin);
    printf("%d", CountWords(s));
    // CountWords(s);
    
}