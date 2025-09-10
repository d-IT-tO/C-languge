#include <stdio.h>

int main(){
  int SEND, MORE, MONE;

  for (SEND=1000; SEND < 10000; SEND++){
    for (MORE=1000; MORE < 10000; MORE++){
      MONEY = SEND + MORE;
        if ((SEND % 1000) / 100 == MORE % 10 == (MONEY % 100) / 10 && (SEND % 100) / 10 == (MONEY % 1000) / 100 && MORE / 100 == MONEY / 1000)
          printf("%d %d %d", SEND, MORE, MONEY);
    }
  }
}
