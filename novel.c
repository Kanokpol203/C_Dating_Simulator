#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int heart = 0;

void delay(unsigned int milliseconds) { 
    //a delay function   
    clock_t start = clock();    
    while ((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds);    
}
void delayprint(char string[],int milisecond){
    //first parameter for String mili for amount delay per char
    int i = 0;
    for(i; string[i] != '\0'; i++){
        printf("%c", string[i]);
        fflush(stdout);
        delay(milisecond);
    }
}
void intro(){
    char input = '0';
    delayprint("In this game you will play as \"Un\" \n\
he's a soy milk merchant who's gonna meet \"Kao\" \n\
Who's a librarian to play this game there will be decisions\n\
that you have to make so choose wisely and try to get \n\
the information as much as possible the choice will be like this\n\
Do you under stand how to play?\n\
(1.type 1 to continue / 2.type 2 to read the intro again)\n", 5);
    while(1){
        scanf("%c", &input);
        if(input == '1'){
            break;
        }else if(input == '2'){
            system("clear");
            intro();
            break;
        }else{
            printf("Please type in your answer\n");
        }
    }
}
int main(){
    printf("Would you like to play intro? (y/n)\n");
    while(1){
        scanf("%c", &input);
        if(input == 'y'){
            system("clear");
            intro();
            break;
        }else if(input == 'n'){
            system("clear");
            break;
        }else{
            printf("Please type in your answer\n");
        }
    }
}