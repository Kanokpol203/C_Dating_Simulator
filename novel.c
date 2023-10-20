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
    delayprint("Through one connection flickers another, through communication nurture their hearts.\n\
\"Love you from the star\"\n\
\n\
This story are told through the diary of an individual. though the way it ends, \n\
you are the one who make the choice. Will you be the one to brings them together, \n\
or be the one who severs.\n\
\n\
Shall the story commence?\n\
(y:Yes, n:No)", 2);
    while(1){
        scanf(" %c", &input);
        if(tolower(input) == 'y'){
            break;
        }else if(tolower(input) == 'n'){
            printf("Why r u here?\n");
            delay(1000);
            system("clear");
            break;
        }else{
            printf("Please type in your answer\n");
        }
    }
    system("clear");
    delayprint("Character Introduction:\n\
Name: Kao\n\
Age: 25\n\
Occupation: Librarian\n\
Daily routine: Buying a Soybean milk from a nearby local shop before getting to work\n\
\n\
Name: Oun\n\
Age: 25\n\
Occupation: Soybean milk vendor (Family business)\n\
Daily routine: Selling Soybean milk during the morning\n\
(previous goal was pocket money, present goal is meeting his romantic interest.)\n", 1);
    delayprint("You are Oun, The Soybean milk vendor. Your only goal is getting a happy relationship with Kao, \n\
possibly much more", 2);
    delayprint(". . .\n", 50);
    delay(2000);
}
void day1(){
    delayprint("DAY 1\n\
A young librarian heads off through his usual path. Unwavering shadow of the tree.\n\
the roaring distance noise of the car engine. the sounds of the motorcycle passing by. \n\
All are the norms for kao. He leisurely enjoy the surroundings while having thoughts about his work. \n\
A minutes passed, he arrived at the workplace. but instead of entering, he head towards a familiar location.\n\
\"1 Soy milk alongside a pair of Youtiao please.\" spoken in a softtone voice. \n\
\"Coming up.\" repiled by the vendor.\n\
\"Uncle isn't here today?\" kao asked. \n\
\"Pardon?\" the vendor shift his focus from preparing the order to the individual.\n\
they made eye contact. \n\
\"He was usually the one who does all work here, I was wondering where he been.\" kao questioned.\n\
\"oh..he retired, I'm the one who take the job after my father.\" Oun replied with a smile on his face.\n\
 \"I see, tell him his usual customer miss him.\" kao said with a satisfied smile. \"understood\".", 2);
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
([1: Ask the vendor his name]/[2: leave him be])\n");
        scanf(" %c", &input);
        if(input == '1'){
            system("clear");
            delayprint("by the way, may I know your name?\" Oun asked.\n\
\"I'm kao\" replied by kao.\n\
\"My name is Oun, good to know you. here is your order", 2);
            break;
        }else if(input == '2'){
            delayprint("here is your order", 2);
            delay(5000);
            gameend = 1;
            system("clear");
            printf("BAD END: Both of you remained just a customer and vendor to each other... Connection must be made to go further, and you failed to do so.\n");
            break;
        }else{
            system("clear");
        }
    }
    if(!gameend){

    }
}