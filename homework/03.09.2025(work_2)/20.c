#include <stdio.h>

int main(){
    int x, y;
    char input_char;
    scanf("%c%d", &input_char, &y);
    switch(input_char){
    case 'a':
    case 'c':
    case 'e':
    case 'g':
        x = 1;
        break;
    default:
        x = 2;
    }
    if (x % 2  == y % 2)
        puts("black");
    else puts("white");
    
    return 0;
}
