#include<stdio.h>
// WAP for increasing triangle, i=4, j=7
// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=4;j++)
//                 {
//                     if (j<=(4-i))
//                         printf(" ");
//                     else 
//                         printf("*");
//                 }
//             for (j=1;j<=3;j++)
//                 {
//                     if (j<i)
//                         printf("*");
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

int main()
{
    int i, j, n=5;
    for (i=1;i<=n;i++)
        {
            for (j=1;j<=n*2-1;j++)
                {
                    if(j>=n+1-i&&j<=n-1+i)
                        printf("*");
                    else
                        printf(" ");
                }
            printf("\n");
        }
}
// Q2. Decreasing Triagle, i=4, j=7
// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=4;j++)
//                 {
//                     if (j>=i)
//                         printf("*");
//                     else
//                         printf(" ");
//                 }
//             for (j=1;j<=3;j++)
//                 (j<=(4-i))?(printf("*")):(printf(" "));
//             printf("\n");
//         }
// }

// WAP for increasing triangle, i=4, j=7 with empty spaces
// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=7;j++)
//                 {
//                     if (i==1 && j==4)
//                         printf("*");
//                     else if (i==2 && (j==3 || j==5))
//                         printf("*");
//                     else if (i==3 && (j%2==0))
//                         printf("*");
//                     else if (i==4 && (j%2==1))
//                         printf("*");
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

// Q4.
// int main()
// {
//     int i,j, k, l;
//     for (i=1;i<=4;i++)
//         {
//             k=1;
//             for (j=1;j<=4;j++)
//                 {
//                     if (j >= (5-i))
//                         {
//                             printf("%d", k);
//                             k++;
//                     }
//                     else
//                         printf(" ");
//                 }
            
//             for (j=1;j<=3;j++)
//                 {   
//                     l = i-j;
//                     if (j < i)
//                         {
//                             printf("%d",l);
//                             l--;
//                         }
//                     else
//                         printf(" ");
//                 }
//             printf("\n");
//         }
// }

// Q. 5
// int main()
// {
//     int i,j,c;
//     for (i=1;i<=4;i++)
//         {
//             c='A';
//             for (j=1;j<=7;j++)
//                 {
//                     if (j<i || j>=(9-i))
//                         printf(" ");
//                     else    
//                         {
//                             printf("%c",c);
//                             c++;
//                         }
//                 }
//             printf("\n");
//         }
// }

// Q.6
// int main()
// {
//     int i,j,c;
//     for (i=1;i<=4;i++)
//         {
//             c='A';
//             for (j=1;j<=7;j++)
//                 {
//                     if (j<i || j>=(9-i))
//                         printf(" ");
//                     else    
//                         {
//                             if (j<=4)
//                                 {
//                                     printf("%c",c);
//                                     c++;
//                                 }
//                             else
//                                 {
//                                     c = c-2;
//                                     printf("%c",c);
//                                     c++;
//                                 }
//                         }
//                 }
//             printf("\n");
//         }
// }

// Q. 7 
// int main()
// {
//     int i,j, k;
//     for (i=1;i<=5;i++)
//         {
//             k=1;
//             for (j=1;j<=9;j++)
//                 {
//                     if (i%2)
//                     {
//                         if (i==1 && j==5)
//                             printf("%d",k);
//                         else if (i==3 && (j==3 || j == 5))
//                             {
//                                 printf("%d",k);
//                                 k++;
//                         }
//                         else if (i==3 && (j==7))
//                             {
//                                 k-=2;
//                                 printf("%d",k);
                                
//                         }
//                         else if (i==5 && (j%2 && j<=5))
//                             {
//                                 printf("%d",k);
//                                 k++;
//                             }
//                         else if (i==5 && (j%2 && j>5))
//                             {
//                                 k-=2;
//                                 printf("%d",k);
//                                 k++;
                                
//                             }
//                         else
//                             printf(" ");
//                         }
//                     else if (i%2==0)
//                         {
//                             if (i==2 & (j==4 || j==6))
//                                 printf("%d",k);
//                             else if (i==4 & (j%2==0 && j<5))
//                                 {
//                                     printf("%d",k);
//                                     k++;
//                                 }
//                             else if (i==4 & (j%2==0 && j>5))
//                             {
//                                 k--;
//                                 printf("%d",k);
                                
//                             }
//                             else
//                                 printf(" ");
//                         }
                            
                    
//                     }
//             printf("\n");
//         }
// }

// Q. 8
// int main()
// {
//     int i,j;
//     for (i=1;i<=4;i++)
//         {
//             for (j=1;j<=7;j++)
//                 {
//                     if (i>1)
//                         {
//                             if (i==2 && (j==4))
//                                 printf(" ");
//                             else if (i==3 && (j>2 && j<6))
//                                 printf(" ");
//                             else if (i==4 && (j>1 && j<7))
//                                 printf(" ");
//                             else
//                                 printf("*");
//                         }
//                     else
//                         printf("*");
//                 }
//             printf("\n");
//         }
// }

// // Q. 9 
// int main()
// {
//     int i,j, k;
//     for (i=1;i<=4;i++)
//         {
//             k=1;
//             for (j=1;j<=7;j++)
//                 {
//                     if (i>1)
//                         {
//                             if (i==2 && (j==4))
//                                 printf(" ");
//                             else if (i==3 && (j>2 && j<6))
//                                 printf(" ");
//                             else if (i==4 && (j>1 && j<7))
//                                 printf(" ");
//                             else
//                                 {
//                                     if (j<=4)
//                                     {
//                                         printf("%d",k);
//                                         k++;
//                                     }
//                                     else
//                                         {
//                                             k--;
//                                             printf("%d",k);
                                            
//                                         }
//                                 }
//                         }
//                     else
//                         {
//                             if (j<=4)
//                             {
//                                 printf("%d",k);
//                                 k++;
//                             }
//                             else
//                                 {
//                                     k-=2;
//                                     printf("%d",k);
//                                     k++;
//                                 }
//                         }
//                 }
//             printf("\n");
//         }
// }

// Q. 10
// int main()
// {
//     int i,j;
//     char k;
//     for (i=1;i<=4;i++)
//         {
//             k='A';
//             for (j=1;j<=7;j++)
//                 {
//                     if (i>1)
//                         {
//                             if (i==2 && (j==4))
//                                 printf(" ");
//                             else if (i==3 && (j>2 && j<6))
//                                 printf(" ");
//                             else if (i==4 && (j>1 && j<7))
//                                 printf(" ");
//                             else
//                                 {
//                                     if (j<=4)
//                                     {
//                                         printf("%c",k);
//                                         k++;
//                                     }
//                                     else
//                                         {
//                                             k--;
//                                             printf("%c",k);
                                            
//                                         }
//                                 }
//                         }
//                     else
//                         {
//                             if (j<=4)
//                             {
//                                 printf("%c",k);
//                                 k++;
//                             }
//                             else
//                                 {
//                                     k-=2;
//                                     printf("%c",k);
//                                     k++;
//                                 }
//                         }
//                 }
//             printf("\n");
//         }
// }