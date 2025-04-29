#include<stdio.h>
// WAP to calculate profit or loss %. Take Cost price and selling price from user
/*
int main()
{
    float cp, sp;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f",&cp, &sp);
    float pnl;
    pnl = (sp - cp)/cp*100;
    if (pnl >0)
        printf("Profit in Percentage is %.2f %%", pnl);
    else
        printf("Loss in Percentage is %.2f %%", pnl*-1);
    return 0;
}


// WAP to take marks of 5 subjects from user out 100. Passing marks is 33. Display pass or fail
int main()
{
    printf("Enter marks of 5 subjects: ");
    int s1, s2, s3, s4, s5;
    scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
    if (s1>=33 && s2 >= 33 && s3 >= 33 && s4 >= 33 && s5 >= 33)
        {
            printf("Pass");
        }
    else
        {
            printf("Fail");
        }
}

// using conditional operator

int main()
{
    printf("Enter marks of 5 subjects: ");
    int s1, s2, s3, s4, s5;
    scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
    (s1>33 && s2 > 33 && s3 > 33 && s4 > 33 && s5 > 33)?printf("Pass"):printf("Fail");
}
*/
// WAP to check whether given alphabet is in uppercase or lowercase?
int main()
{
    printf("Enter an alphabet: ");
    char ch;
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        printf("%c is in Uppercase",ch);
    else if (ch>='a' && ch<='z')
        printf("%c is in Lowercase",ch);
    return 0;
}


// WAP to check whether given number is divisible by 3 and divisible by 2.
// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d",&n);
//     if (n%3==0 && n%2==0)
//         printf("%d is divisible by both 3 and 2", n);
//     else
//         printf("%d is NOT divisible by both 3 and 2", n);
// }

// // using conditional operator

// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d",&n);
//     (n%3==0 && n%2==0)?printf("%d is divisible by both 3 and 2", n):printf("%d is NOT divisible by both 3 and 2", n);
// }

// WAP to check whether given number is divisible by 7 or divisible by 3.
// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d",&n);
//     if (n%7==0 || n%3==0)
//         printf("%d is divisible by 7 or 3", n);
//     else
//         printf("%d is NOT divisible by both 7 and 3", n);
// }

// using conditional operator

// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d",&n);
//     (n%7==0 || n%3==0)?printf("%d is divisible by 7 or 3", n):printf("%d is NOT divisible by both 7 and 3", n);
// }