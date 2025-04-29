#include<stdio.h>
// Q1. Increasing * pattern i = 5, j = 1 to 5 

// int main()
// {
//     for (int i=1;i<=5;i++)
//         {
//             for (int j=1;j<=5;j++)
//                 {
//                     if (j<=i)
//                         printf("*");
//                     else
//                         printf(" ");
//                 }
//                 printf("\n");
//         }
// }

// Q. 2 Increasing * pattern i = 5 to 1, j = 1 to 5 

// int main()
// {
//     for (int i=1;i<=5;i++)
//         {
//             for (int j=1;j<=5;j++)
//                 {
//                     if (j>=(6-i))
//                         printf("*");
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

// Q.3 Decreasing * pattern i = 5, j = 5 to 1

// int main()
// {
//     for (int i=1;i<=5;i++)
//         {    
//             for (int j=1;j<=5;j++)  
//                 {
//                     if (j<= (6-i) )
//                         printf("*");
//                     else 
//                         printf(" ");
//                 }
//             printf("\n");   
//         }
// }

// Q.4 WAP Increasing  * pattern i = 1, j= 5 to 1
// int main()
// {
//     int i, j;
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j>=i)
//                         printf("*");
//                     else 
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

// Q. 5 WAP Increasing number i = 1 to 5, j= 1 to 5
// int main()
// {
//     int i,j;
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j<=i)
//                         printf("%d",j);
//                     else
//                         printf(" ");
//                 }
//                 printf("\n");
//         }
// }

// Q. 6

// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=4;j++)
//                 {
//                     if (j<=i)
//                         printf("%d",i+1-j);
//                     else
//                         printf(" ");
//                 }
//                 printf("\n");
//         }
// }

// Q. 7

// int main()
// {
//     int i, j, k = 64;
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j>=i)
//                         printf("%c",k+j);
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//             k--;
//         }
// }

// Without using ASCII Character
// int main()
// {
//     int i, j, k = 'A';
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j>=i)
//                         printf("%c",k+j-1);
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//             k--;
//         }
// }

// Q. 8 
// int main()
// {
//     int i,j, n=0;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=4;j++)
//                 {
//                     if (j<=i)
//                         printf("%d", n+j);
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//             n += i;
//         }
// }

// Q. 9 

// int main()
// {
//     int i, j, k = 64;
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j>=i)
//                         printf("%c",k+j);
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }
// Without using ASCII Character
// int main()
// {
//     int i, j, k = 'A';
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if (j>=i)
//                         printf("%c",k+j-1);
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

// Q.10

// int main()
// {
//     int i, j;
//     for (i=1;i<=5;i++)
//         {
//             for (j=1;j<=5;j++)
//                 {
//                     if ((i==2||i==3||i==4) && (j==2||j==3||j==4))
//                         printf(" ");
//                     else
//                         printf("*");
//                 }
//             printf("\n");
//         }
// }