// Q1
// Take a character from user and print its ASCII character
#include<stdio.h>
// int main()
// {
//     char a;
//     printf("Enter a character: \n");
//     scanf("%c",&a);
//     printf("ASCII value of character %c is %d",a,a);

//     return 0;
// }

// Q2 Take ASCII Code as input from user and print its character
// int main()
// {
//     int a;
//     printf("Enter ASCII Code: \n");
//     scanf("%d",&a);
//     printf("Character value of ASCII Code %d is %c",a,a);

//     return 0;
// }

// Q3 Take 3 characters as input from user and print character & its ASCII code
int main()
{
    char a, b, c;
    printf("Enter 3 characters: \n");
    scanf("%c %c %c",&a,&b,&c);
    // character to ASCII
    printf("ASCII Code of Character %c is %d\nASCII Code of Character %c is %d\nASCII Code of Character %c is %d",a,a,b,b,c,c);
    return 0;
}

// Q4 Print last digit of given number
// int main()
// {
//     int a;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     printf("Last digit of %d is %d",a,a%10);
//     return 0;
// }

// Q5 Print given number without last digit

// int main()
// {
//     int a;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     printf("%d without last digit: %d",a,a/10);
//     return 0;
// }