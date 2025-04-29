#include<stdio.h>
#include<string.h>
// Q.1 WAF to check whether given string is palindrome or not

int checkPalindrome(char s[])
    {
        int i, l;
        for (l=0;s[l];l++);
        for (i=0;i<l/2;i++)
            {
                if (s[i] != s[l-1-i])
                    return 0;
            }
        return 1;
    }

// Q.2 WAF to trime a string

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

// Count Number of words
int CountWords(char s[])
{
    int c=1, i;
    for (i=0;s[i];i++)
        if (s[i]==' ')
            c++;
    return c;
}

// Q. 4. WAF to reverse a string word wise.

char* ReverseWordWise(char s[])
{
    int i, j, i1, i2, i2_, l, l1, k=0;
    l = strlen(s);
    char s1[l];
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
    strcpy(s, s1);
    return s;
}

// Sir's Approach

char* ReverseStringWordWise(char str[])
{
    int i, j=-1, k, n;
    n = CountWords(str);
    char s[n][20];

    for (i=0;i<n;i++)
        {
            for (j++, k=0;str[j]!=' ' && str[j]!= '\0';j++,k++)
                {
                    s[i][k] = str[j];
                }
            s[i][k] = '\0';
        }
    strcpy(str, s[n-1]);
    strcat(str, " ");
    for (i=n-2;i>0;i--)
        {
            strcat(str, s[i]);
            strcat(str, " ");
        }
    strcat(str, s[0]);
    strcat(str, "\0");
    return str;
}

int main()
{
    char s[] = "MySirG Education Services";
    printf("%s", ReverseStringWordWise(s));
    // printf("\n%lu", strlen(s));
}