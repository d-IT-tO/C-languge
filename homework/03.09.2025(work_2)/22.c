#include <stdio.h>

int main(){
    int sequence_number, figure, x;
    scanf("%d", &sequence_number);
    if (sequence_number <= 10)
        figure = sequence_number - 1 ;
    else if (sequence_number <= 190){
        x = (int) (sequence_number - 1) / 2;
        figure = 5 + x;
        if (sequence_number % 2 == 0)
        figure = figure % 10;
        else
        figure = (int) figure / 10;
    }
    else{
        x = (int) (sequence_number + 1) / 3;
        figure = 36 + x;
        if (sequence_number % 3 == 0)
        figure = (int) (figure % 100) / 10;
        else if (sequence_number % 3 == 1)
        figure = figure % 10;
        else
        figure = (int) figure / 100;
    }
    printf("\n%d", figure);
    
    return 0;
}
