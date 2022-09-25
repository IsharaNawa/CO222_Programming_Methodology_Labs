#include <stdio.h>
#include <stdlib.h>

//Nawarathna K.G.I.S.
//E/17/219

int main()
{
    char input[70];//stores the name of the input file
    char output[70];//stores the name of the output file
    char sen[20000];//stores one line from the input file

    //Getting the input file's name from the user
    printf("Enter the filename to read:\n");
    scanf("%s",input);

    //Creating a FILE pointer for the input file
    FILE * inPointer = fopen(input,"r");

    //Checking if the file inputting was unsuccessful
    if(inPointer==NULL){
        printf("Cannot open file %s\n",input);
        return 0;
    }

    //Getting the name of the output file's name from the user
    printf("Enter the filename to write:\n");
    scanf("%s",output);

    //Creating a FILE pointer for the output file
    FILE * outPointer = fopen(output,"w");

    //Looping through the FILE and copying it to the output file
    while(fgets ( sen, 20000, inPointer ) != NULL){

        fputs(sen, outPointer);

    }

    //Printing the success message to the user
    printf("\nContents copied to %s",output);

    return 0;
}
