#include<stdio.h>
// WAP to calculate Nth term of fibonacci series
// 
// int main()
// {
//     int i, a=-1, b=1, n, c;
//     printf("Enter a numbers: ");
//     scanf("%d", &n);
//     for (i=1;i<=n;i++)
//                 {
//                     c = a + b;
//                     a = b;
//                     b = c;
//                 }

//     printf("%dth term of fibonacci series is: %d", n, c);

     
// }

// WAP to print first Nth terms of fibonacci series
// int main()
// {
//     int i, a=0, b=1, n, c;
    
//     printf("Enter a numbers: ");
//     scanf("%d", &n);
//     printf("First %d terms of fibonacci series are: \n", n);
//     for (i=1;i<=n;i++)
//         {
//             printf("%d ",a);
//             c = a + b;
//             a = b;
//             b = c;
//         }
// }

// WAP to check whether given number is there in fibonacci series or not

// int main()
// {
//     int i, a=0, b=1, n, c;
    
//     printf("Enter a numbers: ");
//     scanf("%d", &n);
//     while (n>a)
//         {
//         c = a + b;
//         a = b;
//         b = c;  
//         }
//     n==a?printf("%d is there in fibonacci series", n):printf("%d is NOT there in fibonacci series", n);

// }

// WAP to check given number is Armstrong number or not for 3 digits

// int main()
// {
//     int num, s=0,i, r;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     i=num;
//     while (num)
//         {
//             r = num%10;
//             s = s + r*r*r;
//             num = num/10;
//         }
//     if (s==i)
//         printf("%d is Armstrong Number",i);
//     else
//         printf("%d is NOT Armstrong Number",i);
// }

// Armtrong number or not for any digits
// int main()
// {
//     int n, c,s=0, d, count;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     // count digits
//     c = 0;
//     for (int i=n;i;i=i/10)
//         {            
//             c++;
//         }

//     for (int i=n;i;i=i/10)

//         {
//             count = c;
//             d = 1;
//             while (count)
//             {                   
//                 d *= i%10;
//                 count--;       
//             }
//             s+=d;
//         }
//     if (n==s)
//         printf("%d is an Armstrong Number",n);
//     else
//         printf("%d is NOT an Armstrong Number",n); 
// }


// WAP to print all Armstrong number under 1000

// int main()
// {
//     for (int j=1;j<1000;j++)
//     {    int n=j, c,s=0, d, count;

//         // count digits
//         c = 0;
//         for (int i=n;i;i=i/10)
//             {            
//                 c++;
//             }

//         for (int i=n;i;i=i/10)

//             {
//                 count = c;
//                 d = 1;
//                 while (count)
//                 {                   
//                     d *= i%10;
//                     count--;       
//                 }
//                 s+=d;
//             }
//         if (n==s)
//             printf("%d ",n);

//     }
// }