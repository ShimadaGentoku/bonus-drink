#include "drink.h"
#include <stdio.h>

unsigned int drink(

    int i,
    int n,
    int sum)
{
    sum = 0;

    printf("n = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

    sum++;

    if(i%3==0){

    n++;
	
    }}
    
    printf("%d\n", sum);

    return 0;
}
