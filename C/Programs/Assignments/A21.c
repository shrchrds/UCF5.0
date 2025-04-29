#include<stdio.h>
// 1. WAF to calculate area of cicle.(TSRS)

// float CircleArea(float r)
// {
//     return 3.14*r*r;
// }

// int main()
// {
//     float r, A;
//     printf("Enter a radius of cirlce: ");
//     scanf("%f",&r);
//     A = CircleArea(r);
//     printf("Area of Circle of radius %.2f is: %.2f",r,A);
//     return 0;
// }

// 2. WAF to calculate Simple Interest.(TSRS)

// float SimpleInterest(int p, int n, float r)
// {
//     float SI;
//     SI = p*n*r/100;
//     return SI;
// }

// int main()
// {
//     int p, n;
//     float r, interest;
//     printf("Principal, Number of years and rate of interest per annum: ");
//     scanf("%d %d %f",&p,&n,&r);
//     interest = SimpleInterest(p,n,r);
//     printf("Simple Interest for Principal %d, %d Number of years and %.2f %% rate of interest is: %.2f",p,n,r,interest);
//     return 0;
// }

// 3. WAF to check whether given number is Odd or Even. Return 1 if even else 0(TSRS)

// int EvenOdd(int n)
// {
//     if (n%2)
//         return 1;
//     else
//         return 0;
// }

// int main()
// {
//     int n, t;    
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     t = EvenOdd(n);
//     t==1?printf("%d is Odd",n):printf("%d is Even",n);
//     return 0;
// }

// 4. WAF to print first N natural numbers(TSRN)

// void FirstN(int n);
// int main()
// {
//     int n; 
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     FirstN(n);
//     return 0;
// }
// void FirstN(int n)
// {
//     for (int i=1;i<=n;i++)
//         printf("%d ",i);
   
// }

// 5. WAF to print first N Odd natural numbers(TSRN)

// void FirstNOdd(int n);
// int main()
// {
//     int n; 
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     FirstNOdd(n);
//     return 0;
// }
// void FirstNOdd(int n)
// {
//     for (int i=1;i<=n;i++)
//         printf("%d ",2*i-1);
   
// }