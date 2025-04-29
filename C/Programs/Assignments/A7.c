
// WAP to check whether a given number is positive or non positive
#include<stdio.h>
/*
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non Positive");
    }
}

// using conditional operator

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    (n>0)?printf("Positive"):printf("Non Positive");
  
}

// WAP to check whether given number is divisible by 5 or not
int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    CheckDiv();
}

// using conditional operator

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    (n%5==0)?printf("Divisible by 5"):printf("Not Divisible by 5");
  
}
*/
    

// WAP to check whether given number is Even or Odd
// int main()
// {
//     int n;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     if(n%2==0)
//     {
//         printf("Even");
//     }
//     else
//     {
//         printf("Odd");
//     }
// }

// Other approach

// int main()
// {
//     int n;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     if(n%2)
//         printf("Odd");
//     else
//         printf("Even");
// }
// using conditional operator

// int main()
// {
//     int n;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     printf((n%2)?"Odd":"Even");
  
// }


// WAP to check whether given number is Even or Odd using % operator    
// int main()
// {
//     int n, r;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     r = n&1;
//     if(r==0)
//     {
//         printf("Even");
//     }
//     else
//     {
//         printf("Odd");
//     }
// }

// int main()
// {
//     int n;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     if (n/2*2==n)
//         printf("Even");
//     else
//         printf("Odd");
// }

// using conditional operator

// int main()
// {
//     int n,r;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     r = n&1;
//     (r==0)?printf("Even"):printf("Odd");
  
// }

// using conditional operator Different Approach

int main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf(n/2*2==n?"Even":"Odd");
}
// WAP to check whether given number is Even or Odd without using % operator    
// int main()
// {
//     int n, xor;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     xor = n^1;
//     if(xor>n)
//     {
//         printf("Even");
//     }
//     else
//     {
//         printf("Odd");
//     }
// }

// using conditional operator

// int main()
// {
//     int n,xor;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
//     xor = n^1;
//     xor>n?printf("Even"):printf("Odd");
//     return 0;
// }