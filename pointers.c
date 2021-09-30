#include <stdio.h>

int main(){
  //part 1
  char character = 'a';
  int integer = 10;
  long longnumber = 2147483900;

  //part 2
  //Observation: Addresses are close together (apart by a few bytes)
  printf("The location of the character in hex is %p\n",&character);
  printf("The location of the integer in hex is %p\n", &integer);
  printf("The location of the long in hex is %p\n", &longnumber);
  printf("The location of the character in decimal is %lu\n",&character);
  printf("The location of the integer in decimal is %lu\n", &integer);
  printf("The location of the long in decimal is %lu\n", &longnumber);

  //part 3
  char *charPoint = &character;
  int *intPoint = &integer;
  long *longPoint = &longnumber;

  //part 4
  printf("The character pointer is %p\n",charPoint);
  printf("The integer pointer is %p\n", intPoint);
  printf("The long pointer is %p\n", longPoint);

  //part 5
  character = *charPoint + 1;
  integer = *intPoint + 1;
  longnumber = *longPoint + 1;

  printf("The new character is %c\n",character);
  printf("The new integer is %d\n",integer);
  printf("The new longnumber is %ld\n",longnumber);

  //part 6
  return 0;
}
