#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cnt_dvsr(int);
void arr_divisors(int*, int, int);
void prnt_arr(int*, int);

int cnt_dvsr(int num){
    int cnt = 2;
    
    for (int dvsr=2; pow(dvsr, 2) < num; dvsr++){
        if (num % dvsr == 0)
            cnt += 2;
    }
    if (sqrt(num) == (int)sqrt(num))
        cnt++;
    return cnt;
}

void arr_divisors(int* arrd, int num, int cnt_div){
    int i = 0;
    
    for (int dvsr = 1; pow(dvsr, 2) <= num; dvsr++){
        if (num % dvsr == 0){
            *(arrd + i++) = dvsr;
            *(arrd + i++) = num / dvsr;
        }
    }
    if (sqrt(num) == (int)sqrt(num))
        *(arrd + cnt_div - 1) = (int) sqrt(num);
    return;
}

void prnt_arr(int* arr, int cnt_el){
    for (int i = 0; i < cnt_el; i++)
        printf("%d ", *(arr+i));
    return;
}

int main(){
    int num, cnt_div;
    int* arr;
    
    scanf("%d", &num);
    cnt_div = cnt_dvsr(num);
    
    arr = (int*)malloc(cnt_div*sizeof(int));
    if (arr == NULL) {
        printf("Error\n");
        exit(1);
    }
    arr_divisors(arr, num, cnt_div);
    
    prnt_arr(arr, cnt_div);
    free(arr);
    
    return 0;
}
