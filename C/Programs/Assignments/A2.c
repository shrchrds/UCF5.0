/*
//  Calculate average of three integers. Take input from user

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three numbers to calculate average: \n");
    scanf("%d%d%d",&a,&b,&c);
    float avg;
    avg = (a+b+c)/3.0;
    printf("Average of %d and %d and %d is: %f",a,b,c,avg);
    return 0;
}
   
//  Calculate circumference of circle. Take input from user
#include<stdio.h>
int main()
{
    float r, c;
    printf("Enter Radius of circle: \n");
    scanf("%f",&r);
    c = 2*3.14*r;
    printf("Circumference of Circle with radius %f is %0.2f",r,c);
    return 0;
}
    

//  Calculate Simple Interest. Take input from user

#include<stdio.h>
int main()
{
    int p, n;
    float r, si;
    printf("Enter Principal, Duration in years, rate of interest: \n");
    scanf("%d%d%f",&p,&n,&r);
    si = n*p*r/100;
    printf("Simple interest for Principle: %d, for Duration of %d years and Rate of interest %.2f is: %.2f", p,n,r,si);
    return 0;
}
    
     
//  Calculate Volume of cuboid. Take input from user

#include<stdio.h>
int main()
{
    int l,b,h;
    printf("Enter lenght, breadth and height of cuboid: \n");
    scanf("%d%d%d",&l,&b,&h);
    printf("Volume of Cuboid with length %d, breadth %d and height %d is %d", l,b,h,l*b*h);
    return 0;
}
   */  
//  Calculate Profit or loss of selling 25 bananas. Take input from user
#include<stdio.h>
int main()
{
    int cost_price, sell_price;
    float pnl;
    printf("Enter Cost Price and Selling Price of Bananas per dozen: \n");
    scanf("%d%d",&cost_price,&sell_price);
    pnl = 25*(sell_price - cost_price)/12;
    printf("Profit or Loss by selling 25 bananas is: %f ", pnl);
    getch();
    
    return 0; 
}

