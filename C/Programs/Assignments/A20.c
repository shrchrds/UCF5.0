// Switch Case Control
#include<stdio.h>
#include<stdlib.h>
// Q. 1 WAP to display grade obtained by student
// int main()
// {
//     int m;
//     printf("Enter marks: ");
//     scanf("%d",&m);

//     switch (m)
//     {
//         case 90 ... 100:
//             printf("Grade A");
//             break;
//         case 80 ... 89:
//             printf("Grade B");
//             break;
//         case 70 ... 79:
//             printf("Grade C");
//             break;
//         case 60 ... 69:
//             printf("Grade D");
//             break;
//         case 50 ... 59:
//             printf("Grade E");
//             break;
//         case 1 ... 49:
//             printf("Grade F");
//             break;
//         default:
//             printf("Invalid Marks");
//     }
// }

// Q.2 Write menu driven program for 1. Factorial of number, 2. Check Even and Odd, 3. Area of Circle, 4. Sum of first N natural numbers, 5. Exit
// int main()
// {
//     int num, f, choice, a;
//     float r;    
//     while (1)
//     {
//         printf("\n\nEnter your choice: \n");
//         printf("1. Factorial of number, \n2. Check Even and Odd, \n3. Area of Circle, \n4. Sum of first N natural numbers, \n5. Exit.\n");
//         scanf("%d", &choice);
        
//         switch (choice)
//             {
//             case 1:
//                 f = 1;
//                 printf("Enter a number: ");
//                 scanf("%d",&num);
//                 for (num;num>0;num--)
//                     {
//                         f *= num;
//                     }
//                 printf("Factorial is: %d",f);
//                 break;
//             case 2:
//                 printf("Enter a number: ");
//                 scanf("%d",&a);
//                 printf(a%2?"Odd":"Even");
//                 break;
//             case 3:
//                 printf("Enter radius of circle: ");
//                 scanf("%f",&r);
//                 printf("Area of circle with radius %.2f is: %.2f",r,3.14*r*r);
//                 break;
//             case 4:
//                 printf("Enter a number: ");
//                 scanf("%d",&a);
//                 num = 0;
//                 for (int i=1;i<=a;i++)
//                     {
//                         num += i;                        
//                     }
//                 printf("Sum of first %d natural numbers is: %d",a,num);
//                 break;
//             case 5:
//                 exit(0);
//             }
//     }
// }

// Q.3 WAP to check whether given character is uppercase, lowercase or special character

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);

//     switch (c)
//     {
//         case 'A'...'Z':
//             if (c>='A' && c <= 'Z')
//                 printf("%c is Uppercase Alphabet.",c);
//             break;
//         case 'a'...'z':
//             if (c>='a' && c <= 'z')
//                 printf("%c is Lowercase Alphabet.",c);
//             break;
//         case '0'...'9':          
//                 break;
//         default:
//                 printf("%c is Special Character.",c);
//     }
// }

// Q.4 WAP to check whether given character is vowel, consonant or special character

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);

//     switch (c)
//     {
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//             printf("%c is Vowel Character.",c);
//             break;
//         case 'b'...'d':
//         case 'f'...'h':
//         case 'j'...'n':
//         case 'p'...'t':
//         case 'v'...'z':
//         case 'B'...'D':
//         case 'F'...'H':
//         case 'J'...'N':
//         case 'P'...'T':
//         case 'V'...'Z':
//             printf("%c is Consonant Character.",c);
//             break;
//         case '0'...'9':
//                 break;
//         default:
//                 printf("%c is Special Character.",c);
//     }
// }

// Q.5 Write menu driven program for 1. LCM of Two numbers, 2. Sum of digits of numbers, 3. Volume of cuboid, 4. Check given number is Prime or Not, 5. Exit
int main()
{
    int num, f, choice, a, b,c;
    while (1)
    {
        printf("\n\nEnter your choice: \n");
        printf("1. LCM of Two numbers, \n2. Sum of digits of a number, \n3. Volume of cuboid, \n4. Check given number is Prime or Not, \n5. Exit.\n");
        scanf("%d", &choice);
        
        switch (choice)
            {
            case 1:
                printf("Enter Two number: ");
                scanf("%d %d",&a, &b);
                for (num=a>b?a:b;num<=a*b;num++)
                    {
                        if (num % a == 0 && num % b == 0)
                        { 
                            printf("LCM of %d and %d is: %d", a,b,num);
                            break;
                        }
                    }
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d",&a);
                num = 0;
                while (a)
                    {
                        num += a%10;
                        a = a/10;
                    }
                printf("Sum of digits of a number is: %d", num);
                break;
            case 3:
                printf("Enter length, breadth and height of cuboid: ");
                scanf("%d %d %d",&a, &b, &c);
                printf("Volume of cuboid is: %d",a*b*c);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d",&a);
                int i=2;
                while (i<=a/2+1)            
                    {
                        if (a%i==0)
                            {
                                break;
                             }  
                        i++;
                    }
                if (i>=a/2+1)
                    printf("%d is Prime Number",a);
                else
                    printf("%d is NOT Prime Number.", a);
                break;
            case 5:
                exit(0);
            }
    }
}