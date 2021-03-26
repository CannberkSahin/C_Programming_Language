Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Pointer To Pointer
==================
int x = 10;
int *ptr = &x;

An x variable of type int is defined and its value is 10.Then a pointer variable 
named ptr is defined. Its value is the address of the x variable. Note that ptr 
is also an object. For example, x's address is 4000. Then the value of ptr is 4000.
Therefore, it is said that ptr points to x.Ptr alone is also an object. Since Ptr 
is also a variable, ptr also has an address. So ptr also takes up space in memory.
The issue here is related to the addresses of pointer variables. 

Ex: Adress of pointer variable
int x = 10;
int *ptr = &x;

printf("&x  =%p\n", &x);  //The address of x is written on the screen
printf("ptr =%p\n", ptr); //The address of x is written on the screen also ptr has tihis adress

Output
--------------
&x  = 00BFFD38
ptr = 00BFFD38

Also, ptr has its own address and we can print it on the screen:
printf("&ptr =%p\n", &ptr); //The address of ptr is written on the screen 
This is the answer to the question of where is ptr in memory.

Output
---------------
&ptr = 00F3FED4

Pointer Type
============
T x;
T * &x;
--------------------------------------------------------------------------
If we have an object of type T, then T x; As here, T is any type, 
such as int, double or long, the type of expression that means the address 
of this object is T *. 

int *ptr;
int ** &ptr;
--------------------------------------------------------------------------
If T itself is already an address type ie int * ptr; Like now, if we get 
the address of ptr with & ptr, the type of% ptr will be int **.
This type, int ** type, is called pointer to pointer to int.

ptr  -> int *
&ptr -> int **

Pointer To Pointer Example
==========================
int x = 10;
int *ptr = &x;
int *p = &ptr;

//Same value: address of variable x
printf("&x    =%p\n",&x);   
printf("ptr   =%p\n",ptr);
//Same value: address of variable ptr
printf("&ptr  =%p\n",&ptr);
printf("p     =%p\n",p);

Output
======
&x   = 00EFFC58
ptr  = 00EFFC58

&ptr = 00EFFC4C
p    = 00EFFC4C

In the above expression, ptr point to the variable x, ptr point to the variable.
If ptr is direference, variable x is accessed.If the variable p is direfined, 
(*p) the variable ptr is accessed. 

Example of pointer to pointer direference 
=========================================
int x = 10;
int y = 99;
int *ptr = &x;
int **p = &ptr;

*p = &y; //ptr = &y;
printf("y = %d\n", y);

Output
------
y = 100

By p dereference above, ptr variable is accessed. A variable with a name of y 
and a value of 99 has been defined.* p = & y; With the expression * p means ptr 
ie ptr = & y; statement is the same. After this assignment, the value of ptr 
has changed. Ptr is no longer points to x variable and points to the variable y.
++ ** p; With the expression, the value of the variable y is increased by one. 
There are 3 operators here. Two are the dereference operator and the other is 
the ++ operator. Operators are right associative.With the *p expression, you can 
access the variable pointed to by p, which means ptr. **p with the expression, 
the variable pointed to by ptr is reached, which means y. In this case, the operand 
of the ++ operator is object y. The value of the y variable has been increased by 
one to 100. The variable y has been printed on the screen.

Good work and Best Regards.
























