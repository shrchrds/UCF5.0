#include<stdio.h>
/*
// WAP to print MySirG on screen N times

int main()
{
    int i=1, N;
    printf("How many times you want to print MySirG on screen?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("MySirG\n");
            i++;
    }
}

// WAP to print first N natural numbers
int main()
{
    int i=1, N;
    printf("How many firt natural numbers you want to print on screen?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("%d\n",i);
            i++;
    }
}

// WAP to print first N natural numbers in reverse order
int main()
{
    int i,N;
    printf("How many firt natural numbers you want to print on screen in reverse order?: ");
    scanf("%d", &N);
    i = N;
    while (i>0)
        {
            printf("%d\n",i);
            i--;
    }
}


// WAP to print first N odd natural numbers
int main()
{
    int i=1, N;
    printf("How many firt natural numbers you want to print on screen in reverse order?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("%d\n",2*i-1);
            i++;
    }
}


// WAP to print first N odd natural numbers in reverse order
int main()
{
    int i, N;
    printf("How many firt natural numbers you want to print on screen in reverse order?: ");
    scanf("%d", &N);
    i = N;
    while (i>0)
        {
            printf("%d\n",2*i-1);
            i--;
    }
}


// WAP to print first N Even natural numbers
int main()
{
    int i=1, N;
    printf("How many firt natural numbers you want to print on screen in reverse order?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("%d\n",2*i);
            i++;
    }
}


// WAP to print first N odd natural numbers in reverse order
int main()
{
    int i, N;
    printf("How many firt natural numbers you want to print on screen in reverse order?: ");
    scanf("%d", &N);
    i = N;
    while (i>0)
        {
            printf("%d\n",2*i);
            i--;
    }
}

// WAP to print Square of first N natural numbers
int main()
{
    int i=1, N;
    printf("How many Squares of first natural numbers you want?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("%d\n",i*i);
            i++;
    }
}

// WAP to print Cubes of first N natural numbers
int main()
{
    int i=1, N;
    printf("How many Cubes of first natural numbers you want?: ");
    scanf("%d", &N);
    while (i<=N)
        {
            printf("%d\n",i*i*i);
            i++;
    }
}
*/
// WAP to print Table of N
int main()
{
    int i=1, N;
    printf("For which nuber you want to create Table? : ");
    scanf("%d", &N);
    while (i<=10)
        {
            printf("%d X %d = %d\n",N,i, N*i);
            i++;
    }
}