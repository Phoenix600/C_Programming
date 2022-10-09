# Input Output in C Programming

---

scanf() function is used to take the formated input from the user.

# Formated Input Function Scanf() :

---

scanf("Control String", address_of `<args>`,address_of `<args>`);

Note the number of format specifiers in the control string is always equal to the number of argument.

An adress of argument is used with the scanf, since the  address of variable is required to change / assign value to it.

Example :
scanf("%d %d",&a,&b);  // Here %d is format specifier for integer , &a  indicates we are passing the address of the  variabl (In more technical term we are passing the variable by reference)

scanf("%d %s %lf",&a.&var1,&var2);

Note :-  In control string, there should be  no comma between the format specifiers (%d %lf %c %s)
Note :-

```c
c        int a;
        char name[] ;
        scanf("%d %s",&a,&name);
               ^      ^  
               |      |
// 	      (1)    (2)

```

 How Scanf works  ?

Compiler will first encounter  the format specifier %d  at postion (1) and then checks the first argument type at position (2) , wheather that is integer or not. Then it will encounter %s and lastly check the variable name's data type it must match with format specifier %s, otherwise it will throw an warrning in compile time. Data won't get stored in the variable, if format specifier is mis-matched with agrument.

scanf() function takes the input form the user and reurns that value to the arguments via referfece

// in short

It returns the number argument or the number of inputs it is taking from the user.

# Formated Input Function Printf() :

general Syntax :

```C

printf("control string",<args>,<args>);

// Ex
int age = 19;
printf("Hello, I'm Ayush, I'm %d years old",age);
printf( );

```
