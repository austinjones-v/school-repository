//Homework Assignment 1
// Created by Austin Jones on 4/5/20.
//


//
//#include <stdio.h> /* Needed at the beginning of every program */
//#include <math.h> /*needed for the 4 elem. operations*/
//
//
//// PS[1-1]
////Program prints the first 20 multiples of 7
//
//int main(void)
//{
//
//    int j;
//    int i;//integer variable is j
//    for (j = 7 , i=1; i<21 ; j = j + 7 , i++) // increments from 7*1
//    {
//        printf("\n%i", j); //prints each value on new line
//    }
//    printf("\n"); //prints new line below last integer
//    return 0; //return value to calling function
//}
//
//
//
////[PS1-2]
////determining if i is n or odd int
//
//int main() {
//
//    int i; //two integer variables
//    printf("\nEnter i\n"); //print input statement
//    scanf("%i", &i); //get i and it's location(&) from printf() staement
//    if (i % 2 == 0)
//        printf("\nThe Number is Even");
//    if (i % 2 != 0)
//        printf("\nThe Number is odd");
//
//    return 0; //return value to calling function
//}


//[Optional Collatz Conjecture]



//
////[PS1-3]
////Other cases for quadratic values
//
//int main()
//
//{
//
//    double a,b,c,root1,root2; // float values assigned to variables
//    printf("Please enter a,b, and c\n"); //receive input values
//    scanf("%lf %lf %lf" ,&a,&b,&c); //gets value from user
//    if (b*b-4.*a*c>0) //if this value is true then execute else if statement
//
//    {
//        root1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a);
//        root2 = (-b - sqrt(b*b-4.*a*c) ) / (2.*a);
//        printf("\n First root is %lf ",root1);
//        printf("\n Second root is %lf ",root2);
//    }
//
//    else if (b*b-4.*a*c==0) //if this value is true then execute else statement
//
//    {
//        root1 = root2 = (-b)/ (2.*a); //both variables assigned to one integer
//        printf("\n First and Second roots are %lf ",root1);
//    }
//
//    else
//
//    {
//        printf("\n Discriminant is negative!  No roots!");
//    }
//    return 0; //return value to calling function
//}


