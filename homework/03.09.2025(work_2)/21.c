#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    char input_char1, input_char2;
    scanf("%c%d %c%d", &input_char1, &y1, &input_char2, &y2);
    
    switch(input_char1){
    case 'a': x1 = 1; break;
    case 'b': x1 = 2; break;
    case 'c': x1 = 3; break;
    case 'd': x1 = 4; break;
    case 'e': x1 = 5; break;
    case 'f': x1 = 6; break;
    case 'g': x1 = 7; break;
    case 'h': x1 = 8; break;
    }
    
    switch(input_char2){
    case 'a': x2 = 1; break;
    case 'b': x2 = 2; break;
    case 'c': x2 = 3; break;
    case 'd': x2 = 4; break;
    case 'e': x2 = 5; break;
    case 'f': x2 = 6; break;
    case 'g': x2 = 7; break;
    case 'h': x2 = 8; break;
    }
    
    if ((fabs(x1 - x2) == 1 && fabs(y1 - y2) == 2) || (fabs(x1 - x2) == 2 && fabs(y1 - y2) == 1))
        puts("correct");
    else puts("incorrect");
    
    return 0;
}
