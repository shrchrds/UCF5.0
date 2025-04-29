#include<stdio.h>
// Q1. WAP to print all prime numbers under 100
// int main()
// {   
//     int i, num=2;
//     while (num <= 100)
//         {
//             for (i=2; num>i;i++)
//                 {
//                     if (num % i==0)
//                         {
//                             break;
//                         }
//                 }
//             if (i == num)
//                 printf("%d ",num);
//             num++;
//         }
// }  

// Q2. WAP to print all prime numbers between two given numbers
// int main()
// {   
//     int i, num1, num2, num;
//     printf("Enter two numbers: \n");
//     scanf("%d %d",&num1, &num2);
//     num = num1;
//     while (num <= num2)
//         {
//             for (i=2; num>i;i++)
//                 {
//                     if (num % i==0)
//                         {
//                             break;
//                         }
//                 }
//             if (i == num)
//                 printf("%d ",num);
//             num++;
//         }
// }  

// Q3. WAP to find next prime number of given number

// int main()
// {
//     int k=2, num;
//     printf("Enter a number: \n");
//     scanf("%d", &num);
//     num +=1;
//     while (num)
//     {    
//         for (k=2; k < num;k++)
//             {
                
//                 if (num%k == 0)
//                     {
                        
//                         break;
//                     }
            
//             }
//             if (k == num)
//                     {
//                         printf("Next Prime Number is %d", num);
//                         break;
//                     }
//         num++;
//     }
//     return 0;
// }


// 4. WAP to to calculate HCF of two numbers

// int main()
// {
//     int n1, n2, hcf, small, big, r;
//     printf("Enter two numbers: \n");
//     scanf("%d %d", &n1, &n2);
//     n1>n2?(big=n1,small=n2):(big=n2, small=n1);
    
//     while (big - small != 0)
//         {
//             r = big - small;
//             (r>small)?(big=r):(big=small, small = r);

//         }
//     hcf = small;
//     printf("HCF of %d and %d is %d", n1, n2, hcf);
// }

// Different Approach
// int main()
// {
//     int n1, n2, hcf;
//     printf("Enter two numbers: \n");
//     scanf("%d %d", &n1, &n2);
//     for (hcf=n1<n2?n1:n2;hcf>=1;hcf--)
//         {
//             if (n1%hcf==0 && n2%hcf==0)
//                 {
//                     printf("HCF is %d", hcf);
//                     break;
//                 }
//         }
//     return 0;
// }

// WAP to check given numbers are coprime or not
int main()
{
    int n1, n2, hcf;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    for (hcf=n1<n2?n1:n2;hcf>=1;hcf--)
        {
            if (n1%hcf==0 && n2%hcf==0)
                {
                    break;
                }
        }
    hcf==1?printf("%d and %d are Co Prime Numbers.", n1, n2):printf("%d and %d are NOT Co Prime Numbers.", n1, n2);
    return 0;
}