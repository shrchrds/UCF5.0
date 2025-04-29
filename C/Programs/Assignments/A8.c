#include<stdio.h>
/*
// WAP to check whether given number is three digit number or not
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n < 1000 && n >= 100)
        printf("%d is Three Digit number",n);
    else
        printf("%d is NOT Three Digit number",n);
}

// Using conditional operator

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    (n < 1000 && n >= 100)?printf("%d is Three Digit number",n):printf("%d is NOT Three Digit number",n);
    return 0;
}

*/
// WAP to print greater number between given two numbers, if both are same enter any number

// int main()
// {
//     int n1, n2;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&n1, &n2);
//     if(n1 > n2)
//         {
//             printf("%d",n1);
//         }
//     else
//         {
//             printf("%d",n2);
//         }
//     return 0;
// }

// Using conditional operator

// int main()
// {
//     int n1, n2;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&n1, &n2);
//     (n1 > n2)?printf("%d",n1):printf("%d",n2);
//     return 0;
// }

// WAP to check whether roots of given quadratic equation are real & distinct or real and equal or imaginary

// int main()
// {
//     float a, b, c, D;
//     printf("Enter a, b, c of quadratic equation: ");
//     scanf("%f %f %f",&a, &b, &c);
//     D = b*b - 4*a*c;
//     if (D==0)
//     {
//         printf("Roots are Real and Equal");
//     }
//     else if (D>0)
//     {
//         printf("Roots are Real and Distinct");
//     }
//     else
//         printf("Roots are Imaginary");
// }

// WAP to Check given year is Leap Year or Not

// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//                 {
//                     printf("%d is Leap Year",year);
//                 }
//             else
//                 printf("%d is NOT Leap Year",year);
//         }
//     else
//         {
//             if (year % 4==0)
//                 {
//                     printf("%d is Leap Year",year);
//                 }
//             else
//                 printf("%d is NOT Leap Year",year);
//         }
// }

// WAP to find greatest among three numbers. Print number once if number appears twice or thrice

// int main()
// {
//     int n1, n2, n3;
//     printf("Enter Three Numbers: ");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     if (n1 > n2)
//         {
//             if (n1 > n3)
//                 {
//                     printf("%d is Greatest among Three Numbers", n1);
//                 }
//             else    
//                 {
//                     printf("%d is Greatest among Three Numbers", n3);
//                 }
//         }
//     else    
//         {
//             if (n2 > n3)
//                 {
//                     printf("%d is Greatest among Three Numbers", n2);
//                 }
//             else    
//                 {
//                     printf("%d is Greatest among Three Numbers", n3);
//                 }
//         }
// }

// Conditional Operator

// int main()
// {
//     int n1, n2, n3;
//     printf("Enter Three Numbers: ");
//     scanf("%d %d %d", &n1, &n2, &n3);
//     (n1 > n2)?printf("%d", n1 > n3? n1:n3): printf("%d", n2 > n3? n2 :n3);      
// }

// Conditional Operator Precise
int main()
{
    int n1, n2, n3;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d", (n1 > n2)? (n1 > n3? n1:n3):(n2 > n3)? n2 :n3);      
}