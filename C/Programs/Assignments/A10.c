#include<stdio.h>
/*
// WAP to check whether given number is positive, negative or zero
int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n>0)
        {
            printf("%d is Positive Number",n);
        }
    else if (n<0)
        {
            printf("%d is Negative Number",n);
        }
    else
        printf("%d is Zero Number",n);
}
*/

// WAP to check whether given character is Uppercase, lowercase, digit or special character?

// int main()
// {
//     printf("Enter a character: ");
//     char ch;
//     scanf("%c",&ch);
//     if (ch>='A' && ch<='Z')
//         printf("%c is in Uppercase",ch);
//     else if (ch>='a' && ch<='z')
//         printf("%c is in Lowercase",ch);  
//     else if (ch>='0' && ch<='9')
//         printf("%c is a Digit",ch);
//     else 
//         printf("%c is a Special Character",ch);
// }



// WAP to take length of sides of triangle as input and check whether triangle is valid or not

// int main()
// {
//     printf("Enter sides of triangle: ");
//     float s1, s2, s3;
//     scanf("%f %f %f",&s1, &s2, &s3);
//     if (((s1 + s2) > s3) && ((s2 + s3) > s1) && ((s1+s3)>s2))
//         printf("Triangle is Valid Triangle with sides %.1f %.1f %.1f",s1,s2,s3);
//     else
//         printf("Triangle is NOT Valid Triangle with sides %.1f %.1f %.1f",s1,s2,s3);

// }



// WAP which takes month number as input and display number of days in month

// int main()
// {
//     printf("Enter month number: ");
//     int m;
//     scanf("%d",&m);
//     if (m==2)
//         printf("There are 28 Days for the month number %d", m);
//     else if (m == 2 || m==4 || m==6 || m==9 ||m==11)
//         printf("There are 30 Days for the month number %d",m);
//     else if (m>12)
//         printf("%d is not a valid month",m);
//     else
//         printf("There are 31 Days for the month number %d",m);
// }