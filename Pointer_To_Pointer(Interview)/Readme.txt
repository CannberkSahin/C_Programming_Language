Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

In this program, two of the frequently asked questions in interviews are shown.
The first question is what will be the output of the program below?

char **ptr = NULL;

    printf("sizeof(p) = %zu\n",sizeof(ptr));      //4 byte
    printf("sizeof(*p) = %zu\n",sizeof(*ptr));    //4 byte
    printf("sizeof(**p) = %zu\n",sizeof(**ptr));  //1 byte

A pointer variable named **ptr of type char is defined and NULL pointer is given 
as the first value.Later, various expressions of this variable with sizeof were 
printed on the screen.The statements inside the first and second printf functions 
are pointer sizeof.Since the expression in the last printf **ptr statement is char 
of type char, it is sizeof. Therefore, pointer sizeof is 4 bytes and char type is 1 byte.
Note that NULL pointer is not dereference. Because the compiler does not generate the 
opcode for the statement, which is the operand of the sizeof operator.


//Second question What will be the output of the program below?
    int a[5] = {0, 10, 20, 30, 40};
    int *p = a;
    int **pa = &p;

    ++*pa;
    ++**pa;

    display_array(a, 5);  //0 11 20 30 40

In the second question, a series of 5 elements named a is defined. This series is given 
the first value with 0,10,20,30,40. int * p = a; With the statement, the address of the 
first element of the array a is given the initial value to variable p. int ** c = & p; 
With the statement, the address of variable p to the variable pa is given as the first value.
* pa; The expression means p so ++ * pa is equal to ++ p. ++ p expression increases p by one. 
Since P is a pointer variable, incrementing p by 1 means that it points to the next element 
of the array. Now the value of p is not the address of the first element of the array a, 
but the address of the second element. That is the address of the object with a value of 10.
** pa means the object pointed to by p. The object that P points to is the second element 
of the array a. ++ ** pa; With the expression, the value 10, which is the second element of 
the array a, has been increased by one. When the array a is printed on the screen, the new 
value of the second element of the array a becomes 11.

Table of the variable pointer and type
======================================
int x = 10;
int *p = &x;
int **ptr = &p;

Expression		Data Type		L Value/R Value
==========		=========		===============	
    x			   int 			      L value
    &x                     int *                      R value
    p			   int *                      L value
    *p                     int                        L value
    &p                     int **                     R value
    ptr                    int **                     L value
    *ptr                   int *                      L value
    **ptr                  int                        L value
    &ptr                   int ***                    R value

==============================================================
for(int i=1; i<25; ++i){
        printf("int ");
        for(int k=0; k<i; ++k){
            printf("*");
        }
        printf("p%d = &p%d;\n",i, i-1);
    }
==============================================================
    int x = 99;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;
    int **********p10 = &p9;
    int ***********p11 = &p10;
    int ************p12 = &p11;
    int *************p13 = &p12;
    int **************p14 = &p13;
    int ***************p15 = &p14;
    int ****************p16 = &p15;
    int *****************p17 = &p16;
    int ******************p18 = &p17;
    int *******************p19 = &p18;
    int ********************p20 = &p19;
    int *********************p21 = &p20;
    int **********************p22 = &p21;
    int ***********************p23 = &p22;
    int ************************p24 = &p23;

    ++************************p24;
    printf("x = %d\n", x);

Output:
x = 100;

Normally, the codes as above are not written, but to show that 
this is not a problem for the compiler.

Good work and Best Regards.