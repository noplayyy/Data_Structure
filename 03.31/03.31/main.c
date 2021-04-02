//
//  main.c
//  03.31
//
//  Created by 노연주 on 2021/03/31.
//

#include<stdio.h>
#include<stdlib.h>
#define MAX_LIST_SIZE 100

typedef int element;
typedef struct {
    element array[MAX_LIST_SIZE];
    int size;
}ArrayList;

void init(ArrayList* list) {
    list->size = 0;
}

int is_full(ArrayList* list) {
    return list->size == MAX_LIST_SIZE;
}
void insert(ArrayList* list, int pos, element item) {
    if (!is_full(list) && (pos >= 0) && (pos <= MAX_LIST_SIZE)) {
        for(int i =(list->size-1); i>=pos; i--){
            list->array[i+1] = list->array[i];
        }
        list->array[pos]=item;
        list->size++;
    }
}

void insert_last(ArrayList* list, element item) {
    if (list->size >= MAX_LIST_SIZE) {
        printf("overflow\n");
    }
    list->array[list->size++] = item;
}

//void delete(ArrayList* list, int pos) {
//    element item;
//    if (                               )
//        printf("position error\n");
//
//    //이 부분 작성하기
//
//    printf("%d번째 값 %d를 삭제함\n", pos, item);
//}

void print_list(ArrayList* list) {
    int i;
    for (i = 0; i < list->size; i++)
        printf("%d -> ", list->array[i]);
    printf("\n");
}

int main() {
    ArrayList list;
    init(&list); print_list(&list);
    insert(&list, 0, 10); print_list(&list);
    insert(&list, 1, 20); print_list(&list);
    insert(&list, 1, 30); print_list(&list);
    insert_last(&list, 40); print_list(&list);
    //delete(&list, 0);
    //delete(&list, 2);
    print_list(&list);
    return 0;
}
