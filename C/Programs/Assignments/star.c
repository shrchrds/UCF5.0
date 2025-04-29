#include<stdio.h>

int main()
{
    int i, j, k, s;
    for (i=1;i<=5;i++)
        {
            k=1;
            s=1;
            for (j=1;j<=9;j++)
                {
                    if (j>=6-i&&j<=4+i)
                        {
                            if (k)
                                {
                                    if (j<=5)
                                        {
                                            printf("%d",s++);
                                            k=0;
                                        }
                                    else
                                        {
                                            if (i%2)
                                                {
                                                    s=s-2;
                                                    printf("%d",s++);
                                                    k=0;
                                                }
                                            else
                                                {
                                                    printf("%d",--s);
                                                    k=0;
                                                }
                                        }
                                        
                                }
                            else
                                {
                                    printf(" ");
                                    k=1;
                                    
                                }
                        }
                    else
                        printf(" ");
                }
            printf("\n");
        }
}