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
(y:Yes, n:No)\n", 2);
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
possibly much more\n", 2);
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
\"I see, tell him his usual customer miss him.\" kao said with a satisfied smile. \"understood\".\n", 2);

}
void day2(){
    delayprint("Day 2\n\
\"Good morning Mr.kao\" Greeted by Oun upon seeing his usual customer\n\
\"good morning, 1 Soy milk with 3 pairs of Youtiao please.\" kao said\n\
\"You want more youtiao today?\" Oun asked\n\
\"Yeah..I didn't eat much today\" replied by kao with a faint blush on his face, with an unexpected respond.\n\
Oun felt a little embarass asking such question , he end up blushing himself.\n", 2);

}
void day3(){
    delayprint("Day 3\n\
\"1 Soy milk with 3 pairs of Youtiao please.\" kao asked.\n\
\"Good morning Mr.Kao\" Oun greeted him feeling unusually bright and fresh.\n\
\"Good morning\" Kao replied.\n\
\"You work around here?, You've been coming here everyday\" Oun questioned. \"Yes, I'm a librarian\" \n\
Kao answered while pointing at the nearby library. \"I've been working there since graduated\" Kao added.\n\
\"Mr.kao graduated around here?\" Oun asked. \"Not at all, I studied in bangkok but I want to be back here for work because its near my home\" Kao answered.\n", 2);
}
void day4(){
    delayprint("Day 4\n\
\"Morning\" Kao said while quickly run up to the shop, \n\
the young librarian seem to be exhausted from running with a sweat drop running down on his face.\n\
\"I was late today, do you still have anything left on shelves?\" kao asked\n", 2);
}
void day4_2(){
    delayprint("\"Don't you ever feel tired? You always wake up early everyday\" Kao asked\n\
\"Maybe I'm used to it. Physically is tolerable but it would be worse if I would get to see..\"\n\
\"If you want to rest yourself, you can come to the library. You are always welcome to-\"\n\
Kao sudden stop talking after realising that inviting someone to watch him work sounds weird to him\n\
\"I'm happy to go\" Oun answered with a smile so bright, it felt like the warmth of sunshine.", 2);
}
void day5(){
    delayprint("Day 5\n\
Today is the day Oun want to get Kao contact\n\
\n\
\"Morning! I want the usual please.\" Kao asked with a bright look on his face, he seem to be in a great mood today.\n\
\n\
\"1 soy milk and 3 youtiao coming up!\" Oun said while handling it to Kao.\n\
\n\
\"thank you\" Kao grab the bag from Oun hand and walk off.\n\
\n\
\"Mr.kao\" Oun called for Kao.\n\
\n\
\"Yes?\" Kao reacted.\n", 2);
}
void day6(){
    delayprint("After that day, Oun and Kao shared each other stories through numerous meaningful conversation.\n\
They cherish every moment they had with each other.\n\
And with each passing moment, they are getting even closer with each other.\n\
Both of them eventually start meeting even after working time.\n\
Their feelings for each other matures, into something greater than before\n\
From spending time with each other, Oun learned that Kao love quiet places and dislike loud noises. \n\
Kao also had a pretty shy personality.", 2);
    delayprint("A few months later", 2);
    delayprint(". . .\n", 7);
    delayprint("\"Here you go\" Oun happily hands a bag of soy milk and youtiao to kao like he always do.\n\
\"Thank you\" Kao take the item with a fidgety look on his face, as if he wanting to say something.\n\
\"Umm..A-Are you free this weekend? If you are.. d-do you want to go hang out with me?\" Kao reluctantly asked.\n\
Kao face reddened. His heart is pounding faster than ever. He cannot hear anything else other than his heart beating.\n\
There is no way Oun would reject this offer from a person in front of him being this cute.\n", 2);
}
void day7(){
    delayprint("\"So where shoud we be going?\" \n\
Oun asked because he doesn't really have any idea to where they should go out.\n", 2);
}
void day8(){
    delayprint("The day finally arrived.\n\
It was saturday.\n\
At the Café, happiness is in the air.\n\
both of them enjoy the lunch they had.\n\
after that, they went to have a little walk.\n\
The flow of time went by so fast both of them don't even realise that its already the evening.\n\
Its 5:00 pm. both of them were taking a little walk at the town nearby lake.\n\
The sky aand clouds are beaming with golden shine.\n\
A nice breeze acompany them.\n\
They both laid down at a nearby bench, looking up at the sky.\n\
Kao's eyes are beaming with joy.\n\
\n\
\"Today is an amazing day\" Kao said while starring at the glimming water.\n", 2);
}
void day8_2(){
    delayprint("After hearing such words, Kao smiles full of happiness with a blushy cheeks.\n\
Both of you sit to see the sunset together.\n\
At 6:00 pm, both of you went back home.\n", 2);
}
void day9(){
    delayprint("Tuesday\n\
Something is off.\n\
\n\
Kao didn't seem to come at the shop.\n\
\n\
Usually, Kao will be at the shop for his usual order.\n\
Even when its weekend, Kao will still be here.\n\
Its around 8:30 am.\n\
Not much customer seems to be around here.\n\
Oun felt a little concerned.\n\
He prepared Kao usual order and head off on his motorcycle.\n\
His destination is the library where kao work at.\n\
Arrived at the place, Oun head in with a bag of youtiao and soy milk in his hand.\n\
\"I'm sorry sir, you cannot bring food into this area\" said by the librarian at the reception counter.\n\
She is blocking Oun off from entering.\n\
\"Oun!\" A sudden familiar shout came from behind the nearby shelf.\n\
\"Don't mind him, He was a friend of mine\" Kao said the the librarian at the reception counter while walking to Oun.\n\
\"The library is not openned yet, you should come back later\" Kao said with a little worried look.\n\
Oun is relieved to see that Kao is fine and all but he still has to do something.\n", 2);
}
void day10(){
    delayprint("From that day on, their relationship seems to be getting better than ever.\n\
Oun often went to see Kao at the library.\n\
At the same time, Kao would often go to help Oun sell during the evening.\n\
They learn about each other.\n\
Even if there is conflict between each other, they overcome them together through understanding.\n", 2);
    delayprint("a few time has passed...", 8);
    delayprint("Its been 3 months.\n\
\n\
Oun and Kao is eating out at the Café near the river.\n\
The water is clear with ducks swimming around.\n\
\n\
\"These cakes looks really nice\" Kao excitingly said while looking at the desserts in front of him.\n\
\n\
The cake look stunningly beautiful, decorated with sparkling sprinkle.\n\
Oun thought to himself about the action he wants to do next.\n", 2);
}
void day11(){
    delayprint("They enjoyed the cakes with happy face.\n\
After they are done, they decided to take a little walk in the nearby street market.\n\
It seems there is a little event at the market with plenty of carnival games alongside plenty of food booths.\n\
The sound of children playing alongside the music being played really liven up the atmosphere.\n\
They enjoy coconut milk ice cream together.\n\
They enjoy cotton candy together.\n\
They got to paint the mud sculpture together.\n\
Both of them enjoyed their time in the market.\n\
Time weaved in and out until its time for dinner.\n\
They selected a nearby crab fried rice booth ran by Madam gui.\n\
The sky is clear with no star in sight, perfect for lighting fireworks.\n\
\n\
\"2 plates please maam\" said by Oun.\n\
\n\
\"Coming right up!\" enthusiasticly answered by Madam gui.\n\
\n\
\"I'm having a really great time today, how about you?\" Kao asked while smiling with eyes full of happiness.\n\
\n\
\"Of course! I'm really happy today. By the way, aren't you feeling full? You ate all day.\" Oun replied.\n\
\n\
\"Aw come on, didn't you know I always have a place for sweet stuff?\" Kao answered while laughing.\n\
Both of them talked and giggle along enjoying the scenery of a night sky reflecting on the river.\n\
To be honest, Today is the day you finally want to confess your feeling for Kao.\n\
\n\
\"Kao\"\n\
\n\
\"Yes?\"", 2);
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
            printf("Please type in your answer\n");
            system("clear");
        }
    }
    input = 'e';
    day1();
    while(1){
        printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
        printf("([1: Ask the vendor his name]/[2: leave him be])\n");
        scanf(" %c", &input);
        if(input == '1'){
            delayprint("\"by the way, may I know your name?\" Oun asked.\n\
\"I'm kao\" replied by kao.\n\
\"My name is Oun, good to know you. here is your order\n", 2);
            delay(5000);
            break;
        }else if(input == '2'){
            delayprint("here is your order\n", 2);
            printf("BAD END: Both of you remained just a customer and vendor to each other... \n\
Connection must be made to go further, and you failed to do so.\n");
            delay(5000);
            gameend = 1;
            break;
        }else{
            printf("Please type in your answer\n");
        }
    }
    //don't forget to clear terminal every day
    system("clear");
    if(!gameend){
        day2();
        input = 'e';
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.give him extra youtiao]/[2.give him extra steamed custard])\n");
            scanf(" %c", &input);
            if(input == '1'){
                heart += 1;
                delayprint("YOU RECEIVED 1 HEART POINT: KAO THINK YOU ARE KIND\n\
\"Total is 20 baht sir\" Oun said\n\
\"Umm.. I think you miscalculate the price\" Kao asked concernedly\n\
\"I want to give you extra, those are free. Want some steamed custard with those too?\" Oun replied with a smile\n\
\"oh umm.. its fine. I don't really like steamed custard, but thank you for those extra youtiao\" \n\
Kao said with a considerated smile.\n\
Oun will remember that kao dislike steamed custard.\n", 2);
                delay(5000);
                break;
            }else if(input == '2'){
                delayprint("YOU DIDN'T RECEIVED ANY HEART POINT: KAO DISLIKE STEAMED CUSTARD\n\
\"oh umm.. its fine. I don't really like steamed custard\" Kao said\n", 2);
                delay(5000);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        
    }
    system("clear");
    //day 3
    if(!gameend){
       day3();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.said that it was better to stay in bangkok instead of moving back]/[2.agree that it was a good choice moving back])\n");
            scanf(" %c", &input);
            if(input == '1'){
                heart -= 1;
                if(heart >= 0){
                    delayprint("\"oh..I see\" kao said with a slightly sad smile on his face.\n", 5);
                }else{
                    gameend = 1;
                    system("clear");
                    printf("BAD END: kao does a smile out of irritation and never went back to you again \n\
because he think you shouldn't decide for him \n");
                }
                delay(5000);
                break;
            }else if(input == '2'){
                heart += 1;
                printf("YOU RECEIVED 1 HEART POINT: KAO IS HAPPY\n");
                delayprint("\"I went back here so I can help my family too, the atmosphere around here was very nice too\" Oun replied with a smile\n\
\"right?\" Kao is very happy to hear that you have the same thought.\n\
Oun laughs. \"Here is your soy milk, enjoy!\" Oun said delightedly\n\
\n\
\"Thank you!\" Kao replied\n\
\n\
The conversation they had today was more than enough to lighten the start of their day.\n", 2);
                delay(5000);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
    }
    system("clear");
    //day 4
    if(!gameend){
        day4();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.said that you have already prepared his usual order]/[2.wait for him to order])\n");
            scanf(" %c", &input);
            if(input == '1'){
                heart += 1;
                delayprint("YOU RECEIVED 1 HEART POINT: KAO IS VERY HAPPY\n\
\n\
Kao was quite confused why Oun would do that but deeply, he was very happy.\n", 2);
                break;
            }else if(input == '2'){
                delayprint("YOU DIDN'T RECEIVED ANY HEART POINT\n", 1);
                delayprint("\"Yes, there are still something left. what would you like?\" Oun asked\n\
\"I want the usual, thank you\" Kao answered with relief and a smile on his face.\n", 2);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        day4_2();
        delay(5000);
    }
    
    system("clear");
    //day 5
    if(!gameend){
        day5();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.said \"nevermind\"]/[2.ask for his contact])\n");
            scanf(" %c", &input);
            if(input == '1'){
                gameend = 1;
                delayprint("BAD END: Both of you remained just a customer and vendor to each other...\n\
Connection must be made to go further. You actually tried, but not hard enough.\n", 2);
                break;
            }else if(input == '2'){
                heart += 1;
                delayprint("\"YOU RECEIVED 1 HEART POINT: KAO IS VERY HAPPY\n\
\n\
\"By any chance, do you want to exchange our number?\" Oun asked nervously. \n\
his heart beat faster and faster in anticipation for the answer\n\
\n\
\"Yeah sure, why not\" Kao answered. Oun nervousness turns into a relief comparable to a clear blue sky after the storm.\n", 2);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delay(5000);
    }
    
    system("clear");
    //day 6
    if(!gameend){
        day6();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.said \"I'm happy to go with you. Is this a date offer?\"]/[2.said \"Yeah sure\"])\n");
            scanf(" %c", &input);
            if(input == '1'){
                heart += 1;
                delayprint("YOU RECEIVED 1 HEART POINT: KAO IS SO HAPPY HE CAN'T ANSWER BACK\n\
\n\
\"I'm happy to go with you. Is this a date offer?\"\n\
\n\
No answer was given back due to both of them blushing up so much\n\
they couldn't do anything but hide behind their own hands.", 2);
                break;
            }else if(input == '2'){
                delayprint("YOU DIDN'T RECEIVED ANY HEART POINT: KAO ONLY FELT THE RELIEF\n\
\n\
\"Yeah sure\" Oun repiled\n\
\n\
\"That settles it then\"\n", 2);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delay(5000);
    }
    
    //day 7
    system("clear");
    if(!gameend){
        day7();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.Choose to go to the concert]/[2.Choose to go to the Café])\n");
            scanf(" %c", &input);
            if(input == '1'){
                heart -= 1;
                delayprint("YOU LOSE 1 HEART POINT: KAO DISLIKE LOUD NOISE AT THE CONCERT\n\
\n\
\"The concert is kinda loud.. I probably won't enjoy the place that much. Could we.. go somewhere else?\"\n\
Anxiously asked by Kao\n\
\n\
\"How about the Café?\" Oun replied\n\
\n\
\"Sounds great\" Kao seems to be in a better mood after hearing that.\n", 2);
                break;
            }else if(input == '2'){
                heart += 1;
                delayprint("YOU RECEIVED 1 HEART POINT: KAO IS HAPPY\n\
\n\
\"I was thinking about having something sweet too, lets go there\" Kao excitingly answered.\n", 2);
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delay(5000);
    }
    //day 8
    system("clear");
    if(!gameend){
        day8();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.said \"I'm kinda a little tired\"]/[2.said \"Me too\"]/\n\
[3.said \"It is amazing, but Its even more amazing to have you here with me\"])\n");
            if(input == '1'){
                heart -= 1;
                printf("YOU LOSE 1 HEART POINT: KAO IS A LITTLE SAD\n");
                break;
            }else if(input == '2'){
                printf("YOU DIDN'T RECEIVED ANY HEART POINT\n");
                break;
            }else if(input == '3'){
                heart += 1;
                printf("YOU RECEIVED 1 HEART POINT: KAO IS VERY HAPPY\n");
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        day8_2();
        delay(5000);
    }
    //day 9
    system("clear");
    if(!gameend){
        day9();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.hands him the bag with his order]/[2.head back to the shop])\n");
            if(input == '1'){
                heart += 1;
                printf("YOU RECEIVED 1 HEART POINT: KAO FELT EXTREMELY HAPPY\n");
                delayprint("\"Thank you Oun!\" Kao is very happy to receive it.\n\
He is working happily the entire day remembering what happened in the morning.\n", 2);
                break;
            }else if(input == '2'){
                printf("YOU DIDN'T RECEIVED ANY HEART POINT\n");
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delay(5000);
    }
    system("clear");
    //day 10
    if(!gameend){
        day10();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.spoonfed Kao Coffee cake]/[2.spoonfed Kao strawberry cake]/[3.do nothing])\n");
            if(input == '1'){
                heart -= 1;
                printf("YOU LOSE 1 HEART POINT: KAO DISLIKE THE BITTERNESS OF COFFEE\n");
                delayprint("\"Let me feed you\" Oun said before spoonfeeding Kao the coffee cake.\n\
\n\
\"Mfhgh..ah..that was kinda bitter\" Kao said while trying to swallow it.\n\
\"oh um.. Sorry...I didn't know you dislike bitter stuff\" Oun said with a little worried look.\n\
\"Don't worry, I'm good\" Kao said with a smile while chewing a strawberry cake.\n", 2);
                break;
            }else if(input == '2'){
                heart += 1;
                printf("YOU RECEIVED 1 HEART POINT: KAO LIKE STRAWBERRIES\n");
                delayprint("\"Let me feed you\" Oun said before spoonfeeding Kao the Strawberry cake.\n\
\"Mhmm..this is delicious\" Kao said while chewing it happily.\n\
Kao seems to like the way you spoonfed him.\n", 2);
                break;
            }else if(input == '3'){
                printf("YOU DIDN'T RECEIVED ANY HEART POINT\n");
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delay(5000);
    }
    //day 11
    system("clear");
    if(!gameend){
        day11();
        while(1){
            printf(" _________________\n\
|                 |\n\
| Make the choice |\n\
|_________________|\n");
            printf("([1.Confess your feeling]/[2.do nothing])\n");
            if(input == '1'){
                if(heart == 6 || heart == 7){
                    delayprint("Kao decide to be Oun lover. Kao accept with a happy smile and blushed up face. For Oun, its a very precious moment.\n\
This is the diary oun decided to write during that time. At present time, Oun is 27 years old.\n", 8);
                }else if(heart == 8){
                    delayprint("Kao decide to be Oun lover. he ran to oun and hug him. his face is beaming with joy.\n\
Oun went back home happily. From now on, they will be living their life together. through love, pain, sadness, happiness, They will be here for each other.", 8);
                }else if(heart == 9){
                    delayprint("MAX HEART:\n\
\n\
Kao decide to be Oun lover.\n\
\n\
he ran to oun and hug him. his face is beaming with joy.\n\
\n\
Oun went back home happily.\n\
\n\
A few years later....\n\
\n\
24th January 2008\n\
\n\
\"Oun, what are you reading?\"\n\
\n\
\"oh..Its a diary of mine.\"\n\
\n\
Oun close the book and put it back into his bag.\n\
Its their marriage ceremony.\n\
\n\
\"Do you take Kao as your lawful wife/husband, to have and to hold, from this day forward,\n\
for better or for worse, for richer or for poorer, in sickness and in health,\n\
 to love and cherish until death do you part?\" asked by the priest.\n\
\n\
\"Yes\" replied by Oun\n\
\n\
\"In the sight of God and these witnesses, I now pronounce you husband and wife! You may now kiss!\"\n\
\n\
The hail of applause and cheering rained upon the couple, as they passionately kiss each other.\n\
Time has passed, but for them it just a moment.\n\
Kao has been living with Oun and help with his family business, increasing the size and overall quality of soymilk business.\n\
\"Daddy, what are you reading?\" a small child is questioning.\n\
\n\
\"hmm? oh, it's daddy old diary. by the way, what is daddy Kao doing?\" Oun asked\n\
\n\
\"Daddy Kao is preparing our dinner in the kitchen.\" replied by Oun and Kao one and only treasure, their son named Arpao.\n\
\n\
\"Dinner is ready darling\" Kao voice coming from the kitchen.\n\
\n\
Oun piggyback his son to the table, they all had a wonderful dinner together.\n\
This is a long journey and there seems to be more.. but what will it be.. only god knows the answer.\n", 2);
                }else{
                    printf("Normal Ending - Friendzoned: Oun and Kao is each other best friend until the end.");
                }
                break;
            }else if(input == '2'){
                printf("Normal Ending - Friendzoned: Oun and Kao is each other best friend until the end.");
                break;
            }else{
                printf("Please type in your answer\n");
            }
        }
        delayprint("FIN", 8);
        delay(5000);
    }
}