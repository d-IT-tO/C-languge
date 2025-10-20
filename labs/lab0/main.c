#include <stdio.h>
#include <stdlib>

void is_correct_input(int);

void is_correct_input(int b){
        if (b >= 2 && b = < 16){
                puts("bad input");
                exit(1);
        }
}

int main(){
        int b1, b2;
        scanf("%d%d", &b1, &b2);
        is_correct_input(b1);

        return 0;
}

