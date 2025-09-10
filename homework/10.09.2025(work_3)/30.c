#include <stdio.h>

int main(){
    for (int S = 0; S <= 999999; S++){
        if ((S % 100000) / 10000 == S % 10 && (S % 10000) / 1000 == (S % 100) / 10)
            S++;
        else
            continue;
        if ((S % 100000) / 10000 == S % 10 && (S % 10000) / 1000 == (S % 100) / 10)
            S++;
        else
            continue;
        if (((S % 100000) / 10) % 11 == 0 & ((S % 10000) / 100) % 11 == 0)
            S++;
        else
            continue;
        if (((S % 100000) / 10) % 11 == 0 & ((S % 10000) / 100) % 11 == 0 & S % 11 == 0)
            printf("%d ", S-3);
    }

  return 0;
}
