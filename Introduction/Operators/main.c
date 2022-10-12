#include<stdio.h>

int main()
{
    int a, b;    a = 5;
    b = 2;

    printf("Arithmetic Operators  : \n");
    printf("a x b  : ", a*b);
    printf("a / b  : ", a/b);
    // And other arithmatic operators

//  Increment Operators
    printf("Increment and Decrement : \n");
    printf("a++ Here value of a is printed and then increment   : %d \n",a++); // "5"  then incremented to 5+1 = 6
    printf("++b Here value of b is incremented and then printed : %d \n",++b); // 2 is incremented by 1, then 3 is printed

    // Decrement Operators 
    // Changing value of variables
    b = 7;
    a = 3;

    printf("a-- Here value of a is printed and then decremented   : %d \n",a--); // "3"  is printed and then decremented by 1
    printf("b Here value of b is decremented and then printed     : %d \n",--b); // "7" is decremented by 1 and then printed  

    //Assignment Opertors
    float num1 = 5.0;
    float num2 = 3.0;

    printf("The value of num1 += 6.0  = %f \n",num1+=6.0); // Here num1 = num1 + 6.0
    printf("The value of num2 -= 3.0  = %f \n",num2); // Here num2 = num2 - 3.0

    // Relational operator 
    // True  : 1
    // False : 0
    printf("num1 > num2 : %d", num1 > num2);
    printf("num1 > num2 : %d", num1 < num2);

    

}