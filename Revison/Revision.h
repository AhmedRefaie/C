/* \n for new line */
printf("For typing texts\n");
/* \t for the tapes*/
printf("Refaie is awsome\t");
/* \a for the alert*/
printf("Refaie is awsome\a");

//for coments //

/*converging chrchters %s for charecters*/
printf("%s is the best person ever","Refaie");
printf("%s And %s are best friends ever","Refaie","okka");

/*%d for digit hole number*/
printf("I pray %d times per day",5);

/*%f for the float number decimal points*/
printf("Pi is equal to %f",3.141592654);
printf("Pi is equal to %.3f",3.141592654);

/* variables */
int age ;
age = 20 ;
printf("Refaie is %d years old\n",age);

age = 2017-1997 ;
printf("My age is %d",age);

/* Age calculation program*/
int age ;
int currentyear;
int birthyear ;

currentyear = 2017;
birthyear = 1997;
age = currentyear-birthyear;

printf("I am %d years old",age);

/* There is a string terminator \0 no one sees it but its here count it tho */

char name[14] = "Ahmed Refaie";
printf("My name is %s\n",name);
/* start counting with 0 */
name[1] = '7';
printf("My name is %s",name);

char food[] = "Pizza";
printf("Best food is %s\n",food);

/*to change the array charcter you need strcpy*/
strcpy(food,"Bacoon");
printf("Best food is %s",food);

/* to put a law a var never change we need #define*/
#define MYNAME "Ahmed Refaie"
#define AGE 20
printf("My name is %s\n",MYNAME );

int girlsage =(AGE / 2 + 7);
printf("%s can date girls %d years old or older",MYNAME,girlsage)

/* TO input data you need to use scanf(""); */
char FirstName[20];
char CrushName[20];
int NumberOfBabies;
printf("What is your name ??\n");
scanf("%s", FirstName);
printf("Name your crush\n");
scanf("%s",CrushName);
printf("What is you favorite number ??\n");
/* Dont forget to put & when dealing with float or didgts */
scanf("%d",&NumberOfBabies);
printf("%s and %s will get married and will have %d Babies",FirstName,CrushName,NumberOfBabies);

/* + add /divied *multiply -subtract % magulios gives you remiander */
int weight = 90;
printf("If i ate a watermillion i will weigh %d Kg\n",weight+2);

int a= 86;
int b= 21;
printf("The result is %d\n",a/b);
/* when you need a float answer use float */
float c=86;
float d=21;
printf("The result is %f/n",c/d);
/*BEDMAS*/
int a = 4+2*6;
printf("%d\n",a);

a = (4+2)*6;
printf("%d\n",a);

/* More math :P */
int a;
int b;
int c;

a = b =c = 100;
printf("%d %d %d\n",a,b,c);


float age1,age2,age3,average;
age1=20;
age2=33;
printf("Enter your age\n");
scanf("%f", &age3);
average=(age1+age2+age3)/3;
printf("The average age is %f",average);

/* += */

int pageviews = 0;
pageviews = pageviews +1;

printf("Page views is %d\n",pageviews);

pageviews = pageviews +1;

printf("Page views is %d\n",pageviews);

pageviews = pageviews +1;

printf("Page views is %d\n",pageviews);
/* old ways */
/* New way */

float Balance = 1000;
Balance*=1.1;
printf("Balance: %f \n",Balance);

Balance*=1.1;
printf("Balance: %f \n",Balance);

Balance*=1.1;
printf("Balance: %f \n",Balance);

/* typecasting when want to change float to int or int to floats */
float AvgProfit;
int PriceofMangos = 2;
int sales = 101 ;
int DayesWorked = 6 ;
AvgProfit=((float)PriceofMangos*(float)sales)/(float)DayesWorked;

printf("$%.2f",AvgProfit);

/* IF CONDITIONS*/
if(4<10){
      printf("Its true");

}
if(4>10){
    printf("LOL");

}


int age;
printf("How old are you ?\n");
scanf("%d", &age);

if(age>=18){
    printf("You may enter this site");

}
if(age<18){
printf("Nothing to see here");

}
/* dont forget to use spaces " %d" to run it cool %c ? */
int age;
char gender;

printf("How old are you ?\n");
scanf(" %d", &age);

printf("What is your gender?(m/f)\n");
scanf(" %c", &gender);

if(age>=18){
    printf("You may enter this site ");
if(gender=='m'){
    printf("Dude");
}
if(gender=='f'){
    printf("Lady");
}
}

if(age<18){
printf("Nothing to see here");

}

/* else statment uses*/
int age;
char gender;

printf("How old are you ?\n");
scanf(" %d", &age);

printf("What is your gender?(m/f)\n");
scanf(" %c", &gender);

if(age>=18){
    printf("You may enter this site ");
if(gender=='m'){
    printf("Dude");
}else{
     printf("Lady");
}
}else{
printf("Nothing to see here");
}

/* now we have alot more choises to compare*/
float grade1;
float grade2;
float grade3;

printf("Enter the three test gardes \n");
scanf(" %f", &grade1);
scanf(" %f", &grade2);
scanf(" %f", &grade3);

float avg = (grade1 + grade2 + grade3) / 3 ;
printf("Average: %.3f \n",avg);

if(avg>=90){
    printf("Grade A");
}else if(avg>=80){
printf("Grade B");
}else if(avg>=70){
printf("Grade C");
}else if(avg>=60){
printf("Grade D");
}else if(avg>=50){
printf("Grade D");
}else {
  printf("You are dump");
}

/*testing 2 conditions*/
int hoursStudied = 60; // 10 or more
int kidsBeatUp = 0 ; //0 kids

if( (hoursStudied>=10) && (kidsBeatUp==0) ){
    printf("Your a good student");
}

/* using or inside if */
 char answer;

    printf("Do you like pizza? (y/n) \n");
    scanf(" %c", &answer);

    if((answer=='y') || (answer=='n') ){
       printf("Good jop your not an eggy person");
    }else{
        printf("Don't mess my program dump ");
    }

/*shorthand if else*/
char lastname[20];
  printf("Enter your last name \n");
  scanf(" %s", lastname);

  (lastname[0] < 'M' ) ? printf("BlueTeam") : printf("RedTeam");


    int friends = 1;

    printf("i have %d friend%s", friends, (friends!=1) ? "s" : "" );

/* Some operations*/
int a = 5, b = 10, answer = 0;
    answer = ++a * b ;
    printf("%d \n",answer);
//add before opreation
    a = 5, b = 10, answer = 0;
    answer = a++ * b ;
    printf("%d \n",answer);
//add after operation
    printf("%d",a);

//while loops
    int pizza = 1;

    while(pizza < 5){
        printf("pizza is now %d \n",pizza);

    }

    int pizza = 1;

    while(pizza < 5){
        printf("pizza is now %d \n",pizza);
        pizza++;
    }
//Dollar test//
    int day = 1;
    float amount = .01;

    while(day<=31){
        printf("Day:%d \t Amount:$%.3f \n",day,amount);
        amount*=2;
        day++;
    }
//do while loop//
    float grade = 0;
    float scoreEntered = 0;
    float numberofTests = 0;
    float average =0;

    printf("Press 0 when complete. \n\n");

    do{
        printf("Tests:%.0f    Average:%.2f \n",numberofTests,average);
        printf("\nEnter test score: ");
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        numberofTests++;
        average=grade/numberofTests;

    }while(scoreEntered!=0);

//for loop
 int pizza;

    for(pizza=0; pizza<=100; pizza+=8){
        printf("Pizza is %d \n",pizza);

    }

//tables by nesting for
   int columns;
   int rows;

   for(rows=1; rows<=6; rows++){

     for(columns=1; columns<=4; columns++){
        printf("%d ", columns);
     }

     printf("\n");

   }
/*breaking a loop*/
    int a;
    int howMany;
    int maxAmount = 100;

    printf("How many times do you want this loop to loop?(Up to 100)");
    scanf("%d", &howMany);

    for(a=1; a<=maxAmount; a++){
        printf("%d\n", a);

        if(a==howMany){
            break;
        }
    }

/*continue loop*/
    int num = 1;

   do{

    if(num==6 || num==8){
            num++;
            continue;
        }

        printf("%d is available \n",num);
        num ++;

   }while(num<=10);


//switch statment to test

char grade = 'C';

    switch (grade){
        case'A' : printf("Sweeeeta !\n");
                  break;
        case'B' : printf("Try harder next time \n");
                  break;
        case'C' : printf("I C you didn't study !\n");
                  break;
        case'D' : printf("you love the D !\n");
                  break;
        case'F' : printf("This is shamfull to your family !\n");
                  break;
        default : printf("That dosen't even make sense \n");
    }

//int in char weird

int tuna = '&';

    if( isalpha(tuna) ){
        printf("%c is a letter \n",tuna);
    }else{

        if( isdigit(tuna) ){
            printf("%c is a number \n", tuna);
    }else{
             printf("%c is OMG what is that!? \n", tuna);
        }
    }

//upper or lower case test

 int tuna = 'f';

    if( isalpha(tuna) ){

       if( isupper(tuna) ){
          printf("%c is an Upper case Letter \n", tuna);
       }else{
          printf("%c is an Lower case letter \n", tuna);
       }
//makeing passwords
char password[20];
    int i;
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasDollarSign = 0;
    printf("Please enter a password password: \n");
    printf("Must contain Upper case,lower case,numbers and a $ sign \n");
    scanf(" %s", password);

    for(i=0; i<=20; i++){
        if(isupper(password[i])) hasUpperCase = 1;
        else if(islower(password[i])) hasLowerCase = 1;
        else if(isdigit(password[i])) hasDigit = 1;
        else if(password[i] == '$') hasDollarSign = 1;
    }
    if(hasUpperCase==1 && hasLowerCase==1 && hasDigit==1 && hasDollarSign==1) printf("Your password is great");
    else printf("Your password sucks");

//turning lower to upper

 char a ='a';
 printf("%c \n",toupper(a) );
//string plays
 char pizza[1000] = "Hey ";

    strcat(pizza, "Refaie ");
    strcat(pizza, "You ");
    strcat(pizza, "are ");
    strcat(pizza, "Lonely </3");
    printf("%s\n",pizza);

    strcpy(pizza,"Hey Refaie your so acompnied <3");
      printf("%s\n",pizza);

//puts and gets
   char catsName[50];
   char catsFood[50];
   char sentence[75] = "";

   puts("Whats the cats name? ");
   gets(catsName);

   puts("What does your cat eats? ");
   gets(catsFood);

   strcat(sentence,catsName);
   strcat(sentence," Loves to eat ");
   strcat(sentence,catsFood);

   puts(sentence);

//aproxmation up and down
    float pizza1 = 9.33122;
    float pizza2 = 3.3;

    printf("pizza1 is %.2f\n",floor(pizza1) );
    printf("pizza2 is %.2f\n",floor(pizza2) );

    printf("pizza1 is %.2f\n",ceil(pizza1) );
    printf("pizza2 is %.2f\n",ceil(pizza2) );

//abslute values

    int year1;
    int year2;
    int age;

    printf("Enter birth year \n");
    scanf(" %d", &year1);

    printf("Enter current year \n");
    scanf(" %d", &year2);

    age = year1-year2;
    printf(" %d\n",age);
    age=abs(age);
    printf(" %d\n",age);
//power is
 printf("%f",pow(5,3));
//square root
 printf("%f",sqrt(164));


//generate ranodm numbers dice rolles

    int i;
    int diceRoll;

    for(i=0; i<20; i++ ){
        diceRoll =  ( rand()%6 ) +1;
        printf("%d \n",diceRoll);
    }
//dice roll challenge
int x;
    int diceRoll;
    int diceRollTotalA = 0;
    for(x=0; x<3; x++){
    diceRoll = (rand()%6) + 1;
    printf("%d \n", diceRoll);
    diceRollTotalA += diceRoll;
    }
    printf("Total of 3 rolls is: %d", diceRollTotalA);
    char input;
    printf("\nGuess if the next total will be higher, same or lower than this one. (h/s/l)? ");
    scanf(" %c", &input);

    int diceRollTotalB = 0;
    for(x=0; x<3; x++){
    diceRoll = (rand()%6) + 1;
    printf("%d \n", diceRoll);
    diceRollTotalB += diceRoll;
    }
    printf("Total of 3 rolls is: %d", diceRollTotalB);

if((input=='h' && diceRollTotalB>diceRollTotalA) || (input=='l' && diceRollTotalB<diceRollTotalA) || (input=='s' && diceRollTotalB==diceRollTotalA)){
        printf("\nGood job!");
    }else{
        printf("\nYou suck!");
    }

//array f nums
int i;
    int pizzas[4] = {4,6,8,22};

    for(i=0;i<4;i++){
        printf("Element %d: %d \n",i,pizzas[i]);
    }
//enterign pieces of data to arrays
int i;
    int pizza[5];
    int totalPizza= 0;

    for(i=0;i<5;i++){
        printf("How many pizza do you eat on day %d??\n", i+1);
        scanf(" %d", &pizza[i]);
    }

     for(i=0;i<5;i++){
        totalPizza += pizza[i];
    }

    int avg = totalPizza/5;
    printf("You ate %d pizzas total,Thats an average of %d per day \n",totalPizza,avg);

//how to claculate avg gols per match
    int i;
    int players[5] = { 10, 44, 32, 3, 67};
    int goals[5] = { 35, 25, 30, 32, 27};
    int gamesPlayed[5] = { 30, 30, 28, 30, 26};
    float ppg[5];
    float bestPPG = 0.0;
    int bestPlayer;

    for(i=0; i<5; i++){
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
        printf("P:%d \t G:%d \t M:%d \t AVG:%.2f \n", players[i],goals[i],gamesPlayed[i],ppg[i]);

    if(ppg[i]> bestPPG){
        bestPPG = ppg[i];
        bestPlayer = players[i];
        }
    }
  printf("The best player is %d",bestPlayer);

//sorting arrays
int i, temp, swapped;
    int howMany = 10;
    int goals[howMany];

    for(i=0; i<howMany; i++){
        goals[i] = (rand()%25 )+1;
    }
        printf("Original List\n");
    for(i=0; i<howMany; i++){
        printf(" %d\n", goals[i]);
    }

    while(1){

        swapped=0;

        for(i=0; i<howMany-1; i++){

            if(goals[i]>goals[i+1]){
                int temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapped = 1;
            }
        }
            if(swapped==0){
                break;
            }
    }

    printf("\nSorted List\n");
    for(i=0; i<howMany; i++){
        printf(" %d\n", goals[i]);
    }

//pointers
int lol = 19;

printf("Address \t Name \t value \n");

printf("%p \t %s \t %d \n", &lol, "lol", lol);


//poniter int
  int lol = 19;

    printf("Address \t Name \t value \n");

    printf("%p \t %s \t %d \n", &lol, "lol", lol);

    int * pLol = &lol;

    printf("%p \t %s \t %d \n", pLol, "lol", lol);

    printf("%p \t %s \t %p \n", &pLol, "pLol", pLol);

//derefrence a pointer
 int lol = 19;
    int * pLol = &lol;

    printf("Address \t Name \t value \n");
    printf("%p \t %s \t %d \n", pLol, "lol", lol);
    printf("%p \t %s \t %p \n", &pLol, "pLol", pLol);

    printf("\n*pLol: %d \n", *pLol);

    *pLol = 71;
    printf("\n*pLol: %d \n", *pLol);
    printf("\nlol: %d \n", lol);

//more refrance
   int i;
   int pizza[5] = {4,6,78,92,4};

    printf("Element \t Address \t value \n");

   for(i=0; i<5; i++){
       printf("pizza[%d] \t %p \t %d \n", i , &pizza[i], pizza[i]);
   }

    printf("\npizza \t\t %p \n", pizza);

    printf("\n*pizza \t\t %d \n",*pizza);
    printf("\n*(pizza+2) \t %d \n",*(pizza+2));

//simple array of char cant change it if you make it a pointer you can now
char movie1[] ="BatMan";
char * movie2 = "SuperMan";

puts(movie2);

movie2 = "New title SuperMan2";

puts(movie2);


/*string length*/

char movie [20];
char * pMovie = movie;

fgets(pMovie, 20, stdin);/*contols number of char and inputs*/
puts(pMovie);

/*the heap an extra memory not uesd yet*/
int * points;

points= (int *) malloc(5 * sizeof(int));

free(points);
/*Heap Application*/
int i,howmany;
int total;
float average = 0.0;
int *pointArray;

printf("How many numbers do you want to average??\n");
scanf(" %d", &howmany);

pointArray=(int *) malloc(howmany * sizeof(int));

printf("Enter Numbers if you dare \n");

for(i=0;i<howmany;i++){
scanf(" %d", &pointArray[i]);
total += pointArray[i];
}

average = (float)total / (float)howmany;

printf("Average is %f",average);
/*structures*/
 struct user Refaie;
    struct user Khalil;

    Refaie.userID=123;
    Khalil.userID=321;

    puts("Enter the 1st name of user 1");
    gets(Refaie.firstName);

    puts("Enter the 2nd name of user 2");
    gets(Khalil.firstName);

    printf("User 1 id is %d\n", Refaie.userID);
    printf("User 2 id is %d\n", Khalil.userID);
struct user{
    int userID;
    char firstName[25];
    char lastName[25];
    int age;
    float weight;
};
//











































































