// WAP to calculate sum of first N natural numbers
#include<stdio.h>
/*
int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    i=N;
    int summ = 0;
    while (i > 0)
        {
            summ = summ + i;
            i--;
        } 
    printf("Sum of first %d natural numbers is: %d",N,summ);
}

// WAP to calculate sum of first N Even natural numbers

int main()
{
    int N, i=1;
    printf("Enter a number: ");
    scanf("%d", &N);
    int summ = 0;
    while (i<=N)
        {
            summ = summ + 2*i;
            i++;
        } 
    printf("Sum of first %d Even natural numbers is: %d", N, summ);
}


// WAP to calculate sum of first N Odd natural numbers

int main()
{
    int N, i=1;
    printf("Enter a number: ");
    scanf("%d", &N);
    int summ = 0;
    while (i<=N)
        {
            summ = summ + 2*i-1;
            i++;
        } 
    printf("Sum of first %d Odd natural numbers is: %d", N, summ);
}



// WAP to calculate sum of squares of first N natural numbers

int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    i=N;
    int summ = 0;
    while (i > 0)
        {
            summ = summ + i*i;
            i--;
        } 
    printf("Sum of squares of first %d natural numbers is: %d",N,summ);
}
*/
// WAP to calculate sum of cubes of first N natural numbers

// int main()
// {
//     int N, i;
//     printf("Enter a number: ");
//     scanf("%d", &N);
//     i=N;
//     int summ = 0;
//     while (i > 0)
//         {
//             summ = summ + i*i*i;
//             i--;
//         } 
//     printf("Sum of cubes of first %d natural numbers is: %d",N,summ);
// }

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int summ = 0;
    while (N)
        {
            summ = summ + N*N*N;
            N--;
        } 
    printf("Sum of cubes of first natural numbers is: %d",summ);
}