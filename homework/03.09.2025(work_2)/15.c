#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    int meaning = number % 10;
    if (meaning == 0 || meaning >= 5 || (number % 100 >= 11 && number % 100 <= 19))
        puts("\nпопугаев");
    else if (meaning == 1)
        puts("\nпопугай");
    else puts("\nпопугая");
    
    return 0;
}
