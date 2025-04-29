#include<stdio.h>

// Q.1 WAP to convert given string in lowercase
int len(char s[])
{
    int i, c=-1;
    for (i=0;s[i];i++)
        c++;
    return c;
}

// int main()
// {
//     char s[200];
//     int i, c=0, l=0;
//     printf("Enter a string: \n");
//     fgets(s, 200, stdin);
//     l = len(s);
//     // s[l-1] = 0;
//     for (i=0;i<l;i++)
//         {
//             if (s[i]>='A'&&s[i]<='Z')
//                 printf("%c", s[i]+32);
//         }
//     return 0;
// }

// Q. 2 WAP to reverse a string

void reverseString(char s[], int n)
{
    while (n)
        {
            printf("%c", s[n-1]);
            n--;
        }
}

void reverse()
{
    char s[50], ch;
    int i, l;
    printf("Enter a string: \n");
    fgets(s, 50, stdin);
    for (i=0;s[i];i++);
    s[i-1] = '\0';
    l = i-1;

    for (i=0;i<l/2;i++)
    {
        ch = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = ch;

    }
    printf("%s", s);
}

int main()
{
    reverse();
}

// Q. 3 WAP to count total number of alphabets, digits and special character
void CountAlphaDigSpChar(char s[], int n)
{
    int i, a=0, d=0, sc=0;
    for (i=0;i<n;i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
                a++;
            else if (s[i] >= '0' && s[i] <= '9')
                d++;
            else
                sc++;
        }
    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d",a,d,sc);
}

// Q. 4 WAP to copy one string to another string
void CopyString(char s1[], int n, char s2[])
{
    int i;
    for (i=0;i<n;i++)
        {
            s2[i] = s1[i];
        }
    s1[i] = 0;
    printf("Copied string is %s",s2);
}

// Q. 5 WAP to find first occurence of given character in given string
void FirstCharIndex(char s1[], int n, char ch)
{
    int i;
    for (i=0;i<n;i++)
        {
            if (s1[i] == ch)
                {
                    printf("%c first occure at %d index",ch, i);
                    break;
                }
        }
}
// int main()
// {
//     char s1[200];
//     int i, c=0, l=0;
//     char ch;
//     printf("Enter a string: \n");
//     fgets(s1, 200, stdin);
//     l = len(s1);
//     printf("Enter a character: ");
//     scanf("%c",&ch);
//     FirstCharIndex(s1, l, ch);
//     return 0;
// }