#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macro
#define       SIZE      100

int main()
{
    char old_file_name[SIZE];
    char new_file_name[SIZE];
    char *p;

    printf("Enter File Name:");
    scanf("%s",old_file_name);

    //[1] Copy the text in the array named old_file_name to the array named new_file_name
    strcpy(new_file_name,old_file_name);

    //[2] If the file name in the new_file_name array does not have an extension, make the extension .jpg
    //Search for the dot character at the end of the file name
    /*
    p = strrchr(new_file_name, '.');
    if(!p){ //if(p == NULL)
        strcat(new_file_name, ".jpg");
    }
    */
    //Idiomatic notation
    if((p = strrchr(new_file_name, '.')) == NULL){
        strcat(new_file_name, ".jpg");
    }
    //[3] If the extension of the file name in the new_file_name array is .txt, make the extension .xls
    else if(!strcmp(p, ".txt")){
        strcpy(p, ".xls");
    }
    //[4] If the extension of the filename in the new_file_name array is .dat, delete the extension.
    else if(!strcmp(p, ".dat")){
        *p = '\0';
    }
    /*[5] If the extension of the file name in the new_file_name array is out of the above cases,
       make the file extension as .docs */
    else{
        strcpy(p, ".docs");
    }

    printf("(%s) => (%s)\n",old_file_name,new_file_name);
}
