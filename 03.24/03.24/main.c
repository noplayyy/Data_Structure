//
//  main.c
//  03.24
//
//  Created by 노연주 on 2021/03/24.
//

#include <stdio.h>

void swap(int *px, int *py){
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void) {
    int a = 1, b = 2;
    printf("swap을 호출하기 전: a = %d, b = %d\n", a, b);
    swap(&a,&b);
    printf("swap을 호출한 다음: a = %d, b = %d\n", a, b);
    return 0;
}
