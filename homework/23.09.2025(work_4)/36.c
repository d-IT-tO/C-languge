#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int res, len_arr = 2, len_wrd = 0;
    char **arr_wrds, *s;
    
    arr_wrd = (char**) malloc(arr_wrd*sizeof(char*));
    if (matrix[i] == NULL){
        puts("memory error");
        exit 1;
    }
    
    int i = 0;
    do{ 
        res = scanf("%s", s);
        if (res != 1){
            puts("Error");
            exit 1;
        }
        
        if (i > len_arr){
            len_arr *= 2;
            char **temp = realloc(arr_wrd, len_arr);
            if (temp != NULL)
                arr_wrd = temp;
            else {
                puts("realloc error");
                // free(ptr);
                exit 1;
            }
        }
        
        
        if (isalpha(s))
            arr[len_wrd] = s;
            len_wrd++;
        else if (i != 0)
            i++;
            len_wrd = 0
            continue;
        else
            continue;
        
    } while ((char)s != '\n');
    

    return 0;
}
