#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int heart = 0;
char input;

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
    delayprint("In this game you will play as \"Un\" \n\
he's a soy milk merchant who's gonna meet \"Kao\" \n\
Who's a librarian who's a very delicate person\n\
to play this game there will be decisions\n\
that you have to make so choose wisely and try to get \n\
the information as much as possible the choice will be like this\n\
Do you under stand how to play?\n\
([1:type 1 to continue] / [2:type 2 to read the intro again])\n", 2);
    while(1){
        scanf(" %c", &input);
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
void day1(){
    delayprint("DAY 1\n\
Kao usually buys soy milks before heading to work.\n\
Kao: 2 bags of soy milk please.\n\
Un : Sure thing!\n\
Kao: Your uncle isn't here today?\n\
Un look to Kao and said \"Oh my dad? he let me inherit this shop after he's retired!\n\
After he look to Kao his chest suddenly warm and his heart beating harder.\n\
Kao: Ah I see! Kao smile", 2);
}
void day2(){

}

int main(){
    int gameend = 0;
    while(1){
        printf("Would you like to play intro? (y/n)\n");
        scanf(" %c", &input);
        if(tolower(input) == 'y'){
            system("clear");
            intro();
            break;
        }else if(tolower(input) == 'n'){
            system("clear");
            break;
        }else{
            system("clear");
        }
    }
    input = 'e';
    day1();
    while(1){
        printf("What would you do?\n\
([1: Ask his name]/[2: Just give him the soy milk])\n");
        scanf(" %c", &input);
        if(input == '1'){
            system("clear");
            delayprint("Kao and Un Introduce themself their bond has start from now", 2);
            break;
        }else if(input == '2'){
            system("clear");
            gameend = 1;
            printf("Bad Ending 1: you two are just customer and a merchant not even trying to flirt him\n");
            break;
        }else{
            system("clear");
        }
    }
    if(!gameend){

    }
}