#include <stdio.h>
#include <stdlib.h>

int main(){
    const int n_old = 10, n_new = 9;
    int *s_old, *s_new;
    
    s_old = (int*)malloc(n_old*sizeof(int));
    for (int i = 0; i < n_old; i++)
        scanf("%d", s_old + i);
    
    s_new = (int*)malloc(n_new*sizeof(int));
    for (int i = 0; i < n_new; i++)
        *(s_new + i) = *(s_old + i + 1) + *(s_old + i);
    free(s_old);
    
    for (int i = 0; i < n_new; i++)
        printf("%d ", *(s_new+i));
    free(s_new);
    
    return 0;
}
