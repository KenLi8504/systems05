#include <stdio.h>

int main(){
  printf("Part 1 \n");
  char character = 'a';
  int integer = 10;
  long longnumber = 2147483900;

  printf("Part 2 \n");
  printf("The location of the character in hex is %p\n",&character);
  printf("The location of the integer in hex is %p\n", &integer);
  printf("The location of the long in hex is %p\n", &longnumber);
  printf("The location of the character in decimal is %lu\n",&character);
  printf("The location of the integer in decimal is %lu\n", &integer);
  printf("The location of the long in decimal is %lu\n", &longnumber);

  printf("Part 3 \n");
  char *charPoint = &character;
  int *intPoint = &integer;
  long *longPoint = &longnumber;

  printf("Part 4 \n");
  printf("The character pointer is %p\n",charPoint);
  printf("The integer pointer is %p\n", intPoint);
  printf("The long pointer is %p\n", longPoint);

  printf("Part 6 \n");
  character = *charPoint + 1;
  integer = *intPoint + 1;
  longnumber = *longPoint + 1;

  printf("The new character is %c\n",character);
  printf("The new integer is %d\n",integer);
  printf("The new longnumber is %ld\n",longnumber);

  printf("Part 6 \n");
  unsigned int noSigns = 62;
  int *intPointerUS = &noSigns;
  char *charPointerUS = &noSigns;

  printf("Part 7 \n");
  printf("The value of the integer pointer is %p and it points to %lu \n",intPointerUS,noSigns);
  printf("The value of the char pointer is %p and it points to %c \n",charPointerUS,noSigns);

  printf("Part 8 \n");
  printf("The unsigned int as a decimal/unsigned integer is %u \n", noSigns);
  printf("The unsigned int as a hexadecimal is %x \n", noSigns);

  printf("Part 9 \n");
  printf("The unsigned integer in decimal is %hhx %hhx %hhx %hhx \n"
  ,*(charPointerUS),*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));
  printf("The unsigned integer in hex is %hhu %hhu %hhu %hhu \n"
  ,*charPointerUS,*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));


  printf("Part 10 \n");
    *(charPointerUS) = *(charPointerUS) + 1;
    printf("Adding 1 to the first byte will give in hex is %x and in decimal is %u \n",*(charPointerUS),*(charPointerUS) );
    *(charPointerUS+1) = *(charPointerUS+1) + 1;
    printf("Adding 1 to the second byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+1),*(charPointerUS+1) );
    *(charPointerUS+2) = *(charPointerUS+2) + 1;
    printf("Adding 1 to the third byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+2),*(charPointerUS+2) );
    *(charPointerUS+3) = *(charPointerUS+3) + 1;
    printf("Adding 1 to the fourth byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+3),*(charPointerUS+3) );

    printf("The new unsigned integer in decimal is %hhx %hhx %hhx %hhx \n"
    ,*(charPointerUS),*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));
    printf("The new unsigned integer in hex is %hhu %hhu %hhu %hhu \n"
    ,*charPointerUS,*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));

  printf("Part 11 \n");
  *(charPointerUS) = *(charPointerUS) + 16;
  printf("Adding 16 to the first byte will give in hex is %x and in decimal is %u \n",*(charPointerUS),*(charPointerUS) );
  *(charPointerUS+1) = *(charPointerUS+1) + 16;
  printf("Adding 16 to the second byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+1),*(charPointerUS+1) );
  *(charPointerUS+2) = *(charPointerUS+2) + 16;
  printf("Adding 16 to the third byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+2),*(charPointerUS+2) );
  *(charPointerUS+3) = *(charPointerUS+3) + 16;
  printf("Adding 16 to the fourth byte will give in hex is %x and in decimal is %u \n",*(charPointerUS+3),*(charPointerUS+3) );

  printf("The new unsigned integer in decimal is %hhx %hhx %hhx %hhx \n"
  ,*(charPointerUS),*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));
  printf("The new unsigned integer in hex is %hhu %hhu %hhu %hhu \n"
  ,*charPointerUS,*(charPointerUS+1),*(charPointerUS+2),*(charPointerUS+3));
  return 0;
}
