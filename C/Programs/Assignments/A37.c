#include<stdio.h>
// Q.1 WAF to count vowels in given string
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
    printf("No of Vowels in Given String are: %d", VowelsCount);
}

// Solution
int CountVowels(char s[])
{
    int i, j, c=0;
    char vowels[]="aeiouAEIOU";
    for (i=0;s[i];i++)
        {
            for (j=0; vowels[j];j++)
                {
                    if (s[i]==s[j])
                        {
                            c++;
                            break;
                        }
                }                  
        }   
    return c;
}

// Q.2 WAF to find a character in given string. Return index of first occurence of given character. If not found return -1

int FirstCharIndex(char s1[], char ch)
{
    int i;
    for (i=0;s1[i];i++)
        {
            if (s1[i] == ch)
                return i;            
        }
    return -1;
}

// Q.3 WAF to find a character in given string between specified indexes.

int CharBetweenIndex(char s1[], char ch, int i1, int i2)
{
    int i;
    for (i=i1;i<i2;i++)
        {
            if (s1[i] == ch)
                return i;            
        }
    return -1;
}

// Q.4 WAF to two characters of given string with specified indexes.

void SwapCharBetweenIndex(char s1[], int i1, int i2)
{
    char t;
    t = s1[i1];
    s1[i1] = s1[i2];
    s1[i2] = t;
    printf("%s",s1);
}

// Q.5 WAF to check whether given string is alphanumeric or not.

int CheckAlnum(char s1[])
{
    int d=0, a=0, i;
    for (i=0;s1[i];i++)
        {
            if (s1[i]>='A'&&s1[i]<='Z'|| s1[i]>='a'&&s1[i]<='z')
                a++;
            else if (s1[i]>='0'&&s1[i]<='9')
                d++;
        }
    if (d&&a)
        return 1;
    return 0;
}

int main()
{
    char s[20], ch;
    printf("Enter a string: \n");
    fgets(s, 20, stdin);
    // printf("%d", SwapCharBetweenIndex(s, ch, 2, 8));
    CheckAlnum(s);
}