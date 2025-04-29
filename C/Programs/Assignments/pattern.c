#include<stdio.h>
int main()
{
    int i,j,n=5;
    for (i=1;i<=2*n-1;i++)
        {
            for (j=1;j<=2*n-1;j++)
                {
                    if (i==1||i==(2*n-1))
                        printf("%d",n);
                    else if (i==2||i==(2*n-2))
                        {
                            if (j==1||j==(2*n-1))
                                {
                                    printf("%d",n);
                                }    
                            else 
                                printf("%d",n-1);
                        }
                    else if (i==3||i==(2*n-3))
                        {
                            if (j==1||j==(2*n-1))
                                {
                                    printf("%d",n);
                                } 
                            else if (j==2||j==(2*n-2))
                                printf("%d",n-1);
                            else 
                                printf("%d",n-2);
                        }
                    else if (i==4||i==(2*n-4))
                        {
                            if (j==1||j==(2*n-1))
                                {
                                    printf("%d",n);
                                } 
                            else if (j==2||j==(2*n-2))
                                printf("%d",n-1);
                            else if (j==3||j==(2*n-3))
                                printf("%d",n-2);
                            else
                                printf("%d",n-3);
                        }
                    else if (i==n)
                        {
                            if (j==1||j==(2*n-1))
                                {
                                    printf("%d",n);
                                } 
                            else if (j==2||j==(2*n-2))
                                printf("%d",n-1);
                            else if (j==3||j==(2*n-3))
                                printf("%d",n-2);
                            else if (j==4||j==(2*n-4))
                                printf("%d",n-3);
                            else 
                                printf("%d",n-4);
                        }
                    else
                        printf(" ");
                }
                printf("\n");
        }
    
    return 0;
}