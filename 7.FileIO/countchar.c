/*
The program reads characters from a ﬁle and counts their occurrences. The program does not distinguish between uppercase characters and lowercase characters. Only the 26 Latin letters used in English are counted. If a character is not a Latin letter, the characteris ignored. The program then saves the occurrences into an output ﬁle.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define NUM_CHAR    26

int main(int argc, char* argv[]){
    //Need an input and output file
    if(argc<3){
        printf("ERROR: Need input and output file names\n");
        return EXIT_FAILURE;        
    }

    FILE* iptr;
    iptr = fopen(argv[1],"r");
    if(iptr == NULL){
        printf("ERROR: Could not open file for reading\n");
        return EXIT_FAILURE;
    }

    //Count the occurence of the character
    char char_count[NUM_CHAR] = {0};
    int char_read;
    do{
        char_read = fgetc(iptr)
        if (isupper(char_read)){
            char_count[char_read-'A']++;
        }
        if (islower(char_read){
            char_count[char_read-'a']++;
        }
    }while(char_read != EOF);
    fclose(iptr);

    FILE* optr;
    optr = fopen(argv[2],"w");
    if(optr == NULL){
        printf("ERROR: Could not open file for writing\n");
        return EXIT_FAILURE;
    }

    //Write array elemets to file
    for(int index = 0; index< NUM_CHAR; index++){
        fprintf(optr,"%c : %d",index+'A',char_count[index]);
    }
    //close file
    fclose(optr);
    return EXIT_SUCCESS;
}