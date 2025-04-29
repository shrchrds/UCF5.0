#include<stdio.h>

// Q.1 WAP to calculate length of string
int len(char s[])
{
    int i, c=-1;
    for (i=0;s[i];i++)
        c++;
    return c;
}

// Q.2 WAP to count occurence of given character in given string
// int main()
// {
//     char s[20], ch;
//     int i, c=0;
//     printf("Enter a string: \n");
//     fgets(s, 20, stdin);
//     printf("Enter a character: \n");
//     scanf("%c",&ch);
//     for (i=0;s[i];i++)
//         {
//             if (s[i]==ch)
//                 c++;
//         }
//     printf("%c Occures %d times in given String", ch, c);
//     return 0;
// }

// Q.3 WAP to count vowels in given string
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

// int main()
// {
//     char s[20], vowels[10]="aeiouAEIOU";
//     int i, c=0, VowelsCount=0;
//     printf("Enter a string: \n");
//     fgets(s, 20, stdin);
//     for (i=0;i<10;i++)
//         {
//             c = CheckCharCount(s, vowels[i]);
//             VowelsCount += c;
//         }

//     printf("Count of vowels in given string is: %d", VowelsCount);
//     return 0;
// }

// Q. 4 WAP to count spaces in given string
// int main()
// {
//     char s[200];
//     int i, c=0;
//     printf("Enter a string: \n");
//     fgets(s, 200, stdin);
//     for (i=0;s[i];i++)
//         {
//             c = CheckCharCount(s, ' ');
//         }

//     printf("Count of spaces in given string is: %d", c);
//     return 0;
// }

// Q. 5 WAP to convert given string in uppercase
int main()
{
    char s[200];
    int i, c=0, l=0;
    printf("Enter a string: \n");
    fgets(s, 200, stdin);
    l = len(s);
    for (i=0;i<l;i++)
        {
            printf("%c", s[i]-32);
        }
    return 0;
}
