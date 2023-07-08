//Labs 3 and 4
// Created by Austin Jones
//

#include <stdio.h>
#include <math.h>

#define PI 3.141592


//
////[PS2-1]
////Code for Differentiation
//
//
//double mycosfun(); //initialize the function
//
//int main(void)
//{
//    double x,dx,A,B,deriv,C; //double assignment variables
//    printf("Enter x and dx \n");
//    scanf("%lf %lf",&x,&dx); //get the memory location for the values x and dx
//    A=mycosfun(x); //assignment variable for value function(x)
//    B=mycosfun(x+dx); //assignment variable for value function(x+dx)
//    deriv= (B-A)/dx; //assignment variable for calculation
//    printf(" df/dx=  %lf  \n",deriv); //print statement initializes process; then prints value
//    return 0; //returns value to screen
//
//}
//
//double mycosfun(double x) //processing of function with argument double value
//{
//    double fofx; //initialize variable fofx as double value
//    fofx = cos(x); //what the variable is doing
//    return fofx; //returns value to print function
//}



////[PS2-4]
////Code for Integration
////
////A code for integration!  This code implements the usual definition of the integral as a Reimann sum using the
//// rectangle rule. It integrates the functionf(x) from x=a to x=b by dividing the interval (a, b) into N segments of
//// length dx = (b−a)/N for right triangles
//
//double func();
//
//int main(void)
//{
//
//    int N,i;
//    double a,b,x,dx, integral = 0;
//    printf("Enter a, b and N \n");
//    scanf("%lf %lf %i",&a,&b,&N);
//    dx = (b-a)/N;
//
//    for (i=0;i<N;i++)
//    {
//        x = a + i*dx;
//        integral = integral + func(x)*dx;
//    }
//    printf("Integral: %lf \n", integral);
//    return 0;
//
//}
//
//double func(double x)
//{
//    double y;
//    y = x*x;
//    return y;
//}



//
////[PS2-5]
////Integration using trapezoidal rule
//
//double func();
//
//int main(void)
//{
//
//    int N,i;
//    double a,b,x,dx, integral=0;
//    printf("Enter a, b and N \n");
//    scanf("%lf %lf %i",&a,&b,&N);
//    dx = (b-a)/N;
//
//    integral = func(a)+func(b);
//    for (i=1;i<N-1;i++)
//    {
//        x = a + i*dx;
//        integral = integral + 2*func(x);
//    }
//    integral = integral*dx/2;
//
//    printf("Integral: %lf \n", integral);
//    return 0;
//
//}
//
//double func(double x)
//{
//    double y;
//    y = x*x);
//    return y;
//}
//





