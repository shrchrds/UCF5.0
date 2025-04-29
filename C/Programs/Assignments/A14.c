#include<stdio.h>
// 1. WAP to calculate factorial of number
// int main()
// {
//     int num, fact=1;
//     printf("Enter a number: \n");
//     scanf("%d", &num);
//     for (num;num>0;num--)
//         {
//             fact = fact * num;
//         }
//     printf("Factorial of Given number is %d", fact);
// }

// 2. WAP to count digits in given number
// int main()
// {
//     int num, sum=0;
//     printf("Enter a number: \n");
//     scanf("%d", &num);
//     while (num)
//         {
//             num = num/10;
//             sum += 1;
//         }
//     printf("Sum of Given number is: %d", sum);
// }

// 3. WAP to to check given number is Prime or Not

// int main()
// {
//     int i, num;
//     printf("Enter a number: \n");
//     scanf("%d", &num);
//     for (i=2; num > i; i++)
//         {
//             if (num%i==0)
//                 {
//                     printf("Not Prime");
//                     break;
//                 }
//         }
//     if (i == num)
//         printf("Prime Number!");
// }

// 4. WAP to to calculate LCM of two numbers

// int main()
// {
//     int n1, n2, hcf, lcm, small, big, r;
//     printf("Enter two numbers: \n");
//     scanf("%d %d", &n1, &n2);
//     n1>n2?(big=n1,small=n2):(big=n2, small=n1);
    
//     while (big - small != 0)
//         {
//             r = big - small;
//             (r>small)?(big=r):(big=small, small = r);

//         }
//     hcf = small;
//     lcm = n1*n2/hcf;
//     printf("HCF of %d and %d is %d", n1, n2, hcf);
//     printf("\nLCM of %d and %d is %d", n1, n2, lcm);
// }

// # approach 2
// int main()
// {
//     int a, b, big;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     for (big=a>b?a:b; big <=a*b; big++)
//         if (big % a==0 && big % b == 0)
//             break;
//     printf("LCM of %d and %d is %d", a, b, big);
//     return 0;
// }

// 5. WAP to to reverse a numbers

// int main()
// {
//     int num, rev=0;
//     printf("Enter a number: \n");
//     scanf("%d",&num);
//     printf("Original Number: %d\n", num);
//     while (num)
//         {
//             rev = rev*10 + num%10;
//             num = num/10;
//         }
//     printf("Reversed Number: %d", rev);
// }