#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char text[20];
    char word[20];
    int counter1,counter2;
    int output=0;
    int difference;
    int totaldifference=0;
    int a,b;
    int i=0;

    a=scanf("%s",word);

    for(counter1=0;counter1<50;counter1++){
        b=scanf("%s",text);
        if(counter1==0 && b==-1){
            printf("Wrong Input");
            break;
        }
        totaldifference=0;
        for(counter2=0;counter2<strlen(text);counter2++){
            if(isalpha(word[counter2])==0){
                break;
            }
            i =+ 1;
            difference = toupper(text[counter2])-toupper(word[counter2]);
            totaldifference +=  difference;
            if(totaldifference==0 && strlen(word)==strlen(text))
                output += 1;   
        }
    }

    if(a!=-1 && i>0){
        printf("The occurrences of \"%s\" in the text are %d.",word,output/strlen(word));
    }

     return 0;
}


