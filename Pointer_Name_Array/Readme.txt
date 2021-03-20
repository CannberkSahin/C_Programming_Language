Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

In this program, a pointer array of char * type with 300 names is defined.
In the program, many string operations with array have been performed.
First, the size of the array is printf ("size of the array =% zu \ n", asize (p)); 
It was printed on the screen with the command. The size of the array is 300.
This means there are 300 names in the array. 

One of the operations performed with an array is to print the elements of the array 
on the screen.
/*Printing the elements of the array to the screen*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%s ",p[i]);

Another operation with array is to print the first characters of the elements of 
the array on the screen.
/*Printing the first character of names with a space between them*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%c ", *p[i]);
        //printf("%c ",p[i][0]);
        //putchar(*p[i]);

Another operation with array is to print the last characters of the elements of 
the array on the screen.
  /*Printing the last character of names with a space between them*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%c ", p[i][strlen(p[i])-1]);

Another of the operations performed with the array is requested from the user 
to enter a character. The entered character is assigned to an int variable named ch.
Print all names with ch characters on the screen.
int ch;
    printf("Enter a character:");
    ch = getchar();

    //Printing names with ch characters on the screen
    for(size_t i=0; i < asize(p); ++i)
        if(strchr(p[i], ch) != NULL) //if(strchr(p[i], ch))
        printf("%s ", p[i]);

Another operation is done to illustrate nested loops.
 //Example of nested loops
    for(int c='a'; c<'z'; ++c){
        int cnt = 0;
        printf("Names with character (%c) inside\n",c);
        printf("==================================\n");
        for(size_t i=0; i < asize(p); ++i){
            if(strchr(p[i],c)){
                printf("%s ", p[i]);
                ++cnt;
            }

        }
        printf("\n%d characters\n",cnt);
        printf("\n\n");
    }

An operation was made to print the names themselves and their lengths on the screen.
     //Printing the lengths of names
     for(size_t i=0; i < asize(p); ++i)
         printf("%-16s   %zu\n",p[i],strlen(p[i]));

An operation was made to print the names themselves and the addresses of the variables 
on the screen.
    //Addresses of names in char pointer array
    for(size_t i=0; i < asize(p); ++i)
         printf("%-16s   %p\n",p[i],p[i]);

The program that searches and finds a word taken from the user in the names has been 
written.For example, the word "erk" has been entered. The program has printed the word 
"berk" on the screen as output.
   //Printing names that the user has entered and contains the entered characters
    char entry[40];
    printf("Enter a string:");
    scanf("%s",entry);

    for(size_t i=0; i < asize(p); ++i){
        if(strstr(p[i],entry))
            printf("%s ",p[i]);
    }

Finally, the use of the strpbrk function is demonstrated.
  //Printing names that the user has entered and contains the entered characters(strpbrk)
    char pbrk[40];
    printf("Enter a string:");
    scanf("%s",pbrk);

    for(size_t i=0; i < asize(p); ++i){
        if(strpbrk(p[i],entry))
            printf("%s ",p[i]);
    }

Good work and Best Regards.