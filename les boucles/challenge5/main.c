#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,exposant,result = 1,i;
    printf("enter base\n");
    scanf("%f",&base);
    printf("enter exposant\n");
    scanf("%f",&exposant);
    for(i=0;i<exposant;i++){
        result = result * base;
    }
    printf("result %.2f",result);
    return 0;
}
