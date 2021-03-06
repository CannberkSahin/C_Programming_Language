#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define     asize(x)      (sizeof(x) / sizeof(x[0]))

void dline(void)
{
    printf("\n---------------------------------------------------------------------------------------------------\n");
}

int main()
{
    const char *p[] = {
        "kamil","korhan","beril","turhan","ufuk","murathan","figen","malik","bulent","cengiz",
        "baran","nurullah","dilber","tuncer","recep","pelinsu","cihan","yesim","aziz","kazim",
        "afacan","tevfik","sumeyye","hande","aslihan","emine","temel","gulsah","hasan","gul",
        "somer","ayla","cuneyt","tekin","binnaz","emrecan","yasar","yilmaz","feraye","tugra",
        "melek","garo","yurdagul","tarik","derin","handan","aytac","petek","cem","aylin",
        "gursel","haldun","nazife","hulusi","sevilay","sabriye","gulden","tansel","ege","turgut",
        "cahit","berk","nazli","aykut","kayhan","cemre","murat","kunter","gunay","cahide",
        "nedim","metin","kerim","utku","cumhur","kurthan","poyraz","can","candan","hikmet",
        "izzet","perihan","tufan","zahide","samet","melih","hakan","ayse","refik","efe",
        "belgin","bilal","niyazi","fugen","melike","saadet","cemile","nahit","arda","ugur",
        "aynur","yasin","polat","naz","yusuf","gulsen","nazif","demir","egemen","necmi",
        "fazilet","celal","ismail","kamile","mahir","caner","suleyman","cezmi","diana","sadullah",
        "atif","huseyin","necmettin","devlet","sezen","hulya","necmiye","ece","julide","onat",
        "emre","sinem","teoman","�rmak","cihat","adem","bilgin","muzaffer","suphi","pelin",
        "yalcin","kenan","atalay","akin","durmus","haluk","kelami","alparslan","busra","kasim",
        "durriye","tarcan","nihal","gizem","bilge","dilek","yasemin","fahri","furkan","papatya",
        "hakki","fadime","devrim","abdi","tayyip","yurdakul","zekai","nagehan","ata","naci",
        "mert","yelda","cebrail","rumeysa","beyhan","azize","cemil","sezer","beste","ciler",
        "enes","cahide","tayyar","cansu","burak","ediz","sefa","anil","alev","atil","muruvet",
        "nefef","cetin","tansu","bora","sevim","sarp","fuat","kaya","zarife","tanju","saadettin",
        "su","kerem","handesu","jade","halime","gurbuz","okan","azmi","sevda","leyla","hilal",
        "galip","alican","atakan","feramuz","efecan","osman","nihat","sefer","zerrin","binnur",
        "taner","kayahan","nalan","tonguc","kezban","kaan","abdulmuttalip","dost","deniz","refika",
        "tijen","umit","yunus","zahit","melisa","hulki","hilmi","edip","muslum","canan",
        "dogan","berivan","adnan","helin","fikret","derya","sidre","abdullah","billur","nurdan",
        "agah","engin","burhan","suheyla","esra","sadri","sezai","esen","askin","rupen","pinat",
        "ercument","birhan","ahmet","polathan","tayfun","mustafa","zubeyde","pakize","nevsin","naciye",
        "erdem","asim","orkun","sami","sade","demet","keriman","yavuz","mehmet","muhsin",
        "saniye","cesim","aydan","eda","mualla","saniye","ufuk","seher","canberk","ersin","seda",
        "ilayda","gokce","merve","buket","azra"};

    /*Printing the elements of the array to the screen*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%s ",p[i]);

    dline(); //Line printing function

    /*Printing the first character of names with a space between them*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%c ", *p[i]);
        //printf("%c ",p[i][0]);
        //putchar(*p[i]);

    dline(); //Line printing function

    /*Printing the last character of names with a space between them*/
    for(size_t i=0; i < asize(p); ++i)
        printf("%c ", p[i][strlen(p[i])-1]);

    dline(); //Line printing function

    int ch;
    printf("Enter a character:");
    ch = getchar();

    //Printing names with ch characters on the screen
    for(size_t i=0; i < asize(p); ++i)
        if(strchr(p[i], ch) != NULL) //if(strchr(p[i], ch))
        printf("%s ", p[i]);

    dline(); //Line printing function

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

    dline(); //Line printing function

        //Printing the lengths of names
     for(size_t i=0; i < asize(p); ++i)
         printf("%-16s   %zu\n",p[i],strlen(p[i]));


    dline(); //Line printing function

    //Addresses of names in char pointer array
    for(size_t i=0; i < asize(p); ++i)
         printf("%-16s   %p\n",p[i],p[i]);

    dline(); //Line printing function

    //Printing names that the user has entered and contains the entered characters
    char entry[40];
    printf("Enter a string:");
    scanf("%s",entry);

    for(size_t i=0; i < asize(p); ++i){
        if(strstr(p[i],entry))
            printf("%s ",p[i]);
    }

    dline(); //Line printing function
    //Printing names that the user has entered and contains the entered characters(strpbrk)
    char pbrk[40];
    printf("Enter a string:");
    scanf("%s",pbrk);

    for(size_t i=0; i < asize(p); ++i){
        if(strpbrk(p[i],entry))
            printf("%s ",p[i]);
    }
}
