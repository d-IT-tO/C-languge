#include <stdio.h>

int main(){
    float previous_temperature, current_temperature;
    int count = 0;

    scanf("%f", &current_temperature);
    while (current_temperature != 0){
        previous_temperature = current_temperature;
        scanf("%f", &current_temperature);
        if (current_temperature < previous_temperature && current_temperature != 0)
            count += 1;
    }
    printf("%d", count);

    return 0;
}
