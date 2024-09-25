#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c ;


    printf("enter a character : ");
    scanf("%c" , &c);


    if (c >= 97 && c <= 122)
          printf("alphabet minuscule");


    else  if(c >= 65 && c <= 90)
          printf("alphabet majuscule");

    else
          printf("non alphabet");


}
