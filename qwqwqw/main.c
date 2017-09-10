#include <stdio.h>
#include <stdlib.h>

int main()
{

  char FirstName[20];
  char CrushName[20];
  int NumberOfBabies;
  printf("What is your name ? \n");
  scanf("%s",FirstName);

  printf("Who are you going to marry ? \n");
  scanf("%s",CrushName);

   printf("How many kids will you have ? \n");
  scanf("%d",&NumberOfBabies);


printf("%s and %s are in love and will have %d babies",FirstName,CrushName,NumberOfBabies);

    return 0;
}
