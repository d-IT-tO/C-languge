#include <stdio.h>


int main()
{
    int number_wives, number_bags, number_cats, number_kittens;
    
    scanf("%d%d%d%d", &number_wives, &number_bags, &number_cats, &number_kittens);
    int number_people = 2 + number_wives * (1 + number_bags * (number_cats * (1 + number_kittens)));
    printf("\n%d", number_people);
    
    return 0;
}
