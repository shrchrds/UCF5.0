// Switch Case Control
#include<stdio.h>
#include<stdlib.h>
// Q. 1 WAP which takes month as input and displays number of days in month
// int main()
// {
//     int m;
//     printf("Enter a month number: ");
//     scanf("%d",&m);
//     switch (m)
//     {
//     case 2:
//         printf("28 Days");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         printf("30 Days");
//         break;
//     case 1:
//     case 3:
//     case 5:
//     case 7 ... 8:
//     case 10:
//     case 12:
//         printf("31 Days.");
//         break;
//     default:
//         printf("Incorrect Month Number ");
//     }
// }

// Q.2 Write menu driven program for 1. Addition, 2. substraction, 3. Multiplication, 4. Division, 5. Exit

// int main()
// {
//     int a, b, choice;
    
//     while (1)
//     {
//         printf("\nEnter your choice: \n");
//         printf("1. Addition, 2. substraction, 3. Multiplication, 4. Division, 5. Exit.\n");
//         scanf("%d", &choice);
        

//         switch (choice)
//             {
//             case 1:
//                 printf("Enter two numbers: ");
//                 scanf("%d %d",&a,&b);
//                 printf("Addition of %d and %d is: %d",a,b,a+b);
//                 break;
//             case 2:
//                 printf("Enter two numbers: ");
//                 scanf("%d %d",&a,&b);
//                 printf("Substraction of %d and %d is: %d",a,b,a-b);
//                 break;
//             case 3:
//                 printf("Enter two numbers: ");
//                 scanf("%d %d",&a,&b);
//                 printf("Multiplication of %d and %d is: %d",a,b,a*b);
//                 break;
//             case 4:
//                 printf("Enter two numbers: ");
//                 scanf("%d %d",&a,&b);
//                 printf("Division of %d and %d is: %d",a,b,a/b);
//                 break;
//             case 5:
//                 exit(0);
//             }
//     }
// }

// Q3. WAP which takes day number of week and display unique message for the day.

// int main()
// {
//     int d;
//     printf("Enter a day number of week: ");
//     scanf("%d",&d);
//     switch (d)
//     {
//     case 2:
//         printf("Transformation Tuesday. ");
//         break;
//     case 4:
//         printf("Thriving Thursday");
//         break;
//     case 6:
//         printf("Serene Saturday");
//         break;
//     case 1:
//         printf("Motivation Monday");
//         break;
//     case 3:
//         printf("Wellness Wednesday");
//         break;
//     case 5:
//         printf("Fantastic Friday");
//         break;
//     case 7:
//         printf("Soulful Sunday");
//         break;
//     default:
//         printf("Incorrect Day Number ");
//     }
// }

// Q.4 Write menu driven program for 1. Check given lengths are of isosceles triangle or not, 
                    // 2. Right Angled Triangle, 3. Equilateral Triangle, 4. Exit

// int main()
// {
//     int a, b, c, choice;
//     while (1)
//     {
//         printf("\nEnter your choice: \n");
//         printf("1. Check given lengths are of isosceles triangle or not, \n2. Right Angled Triangle, \n3. Equilateral Triangle, \n4. Exit\n");
//         scanf("%d", &choice);
        
//         switch (choice)
//             {
//             case 1:
//                 printf("Enter lengths of Triangle: ");
//                 scanf("%d %d %d",&a,&b,&c);
//                 if ((a==b && a!=c)|| (a==c && b!=c) || (b==c && a!=b))
//                     {
//                         printf("%d, %d and %d are sides of Iscosceles Traingle",a,b,c);
//                         break;
//                     }
//                 else
//                     {
//                         printf("%d, %d and %d are NOT sides of Iscosceles Traingle",a,b,c);
//                         break;
//                     }
//             case 2:
//                 printf("Enter lengths of Triangle: ");
//                 scanf("%d %d %d",&a,&b,&c);
//                 if ((a*a + b*b == c*c)|| (a*a + c*c == b*b) || (b*b + c*c == a*a))
//                     {
//                         printf("%d, %d and %d are sides of Right Angled Traingle",a,b,c);
//                         break;
//                     }
//                 else
//                     {
//                         printf("%d, %d and %d are NOT sides of Right Angled Traingle",a,b,c);
//                         break;
//                     }

//             case 3:
//                 printf("Enter lengths of Triangle: ");
//                 scanf("%d %d %d",&a,&b,&c);
//                 if ((a==b && a==c)|| (a==c && b==c) || (b==c && a==b))
//                 {
//                     printf("%d, %d and %d are sides of Equilateral Traingle",a,b,c);
//                     break;
//                 }
//                 else
//                     {
//                         printf("%d, %d and %d are NOT sides of Equilateral Traingle",a,b,c);
//                         break;
//                     }
//             case 4:
//                 exit(0);
//             }
//     }
// }

// Q.5 Conver if else statement into switch case

// int main()
// {
//     int var;
//     printf("Enter a variable number: ");
//     scanf("%d", &var);
//     switch (var)
//     {
//         case 1:
//             printf("Good");
//             break;
//         case 2:
//             printf("Better");
//             break;
//         case 3:
//             printf("Best");
//             break;
//         default:
//             printf("Invalid");
//     }
// }