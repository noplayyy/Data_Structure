//
//  main.c
//  03.26
//
//  Created by 노연주 on 2021/03/26.
//

//#include <stdio.h>
//#define SIZE 6
//
//void get_integers(int list[]){
//    printf("6개의 정수를 입력하시오.");
//    for(int i=0; i<SIZE; ++i){
//        scanf("%d", &list[i]);
//    }
//}
//
//int cal_sum(int list[]){
//    int sum = 0;
//    for(int i=0; i<SIZE; ++i){
//        sum += *(list+i);
//    }
//    return sum;
//}
//
//int main(void) {
//    int list[SIZE];
//    get_integers(list);
//    printf("힘=%d \n",cal_sum(list));
//    return 0;
//}

//#include <stdio.h>
//
//void swap(int *a, int *b)
//{
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//
//int main(void)
//{
//    int n = 3, m = 5;
//
//    printf(" 값을 교환하기 전 값 n : %d , m : %d\n",n,m);
//    swap(&n, &m);
//    printf(" 값을 교환한 후 값 n : %d , m : %d", n, m);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//연결리스트를 구현할 구조체
typedef struct NODE{
    int data; //데이터 저장 변수
    struct NODE* next; //노드 주소를 저장할 포인터
}node;


int main(void) {
    node* head = (node*)malloc(sizeof(node)); //헤드(시작)노드 생성
    head->next=NULL; // 헤드 노드 다음 주소 값은 null
    node* node1 = (node*)malloc(sizeof(node)); // 첫번째 노드 생성
    node1->next = head->next; // 노드 다음 주소에 헤드 노드가 가리키던 다음 주소 (null)로 저장
    node1->data = 10; // 첫번째 노드값은 10
    head->next = node1; // 헤드 노드 다음이 노드1

    node* node2 = (node*)malloc(sizeof(node));
    node2->next = node1->next;
    node2->data = 20;
    node1->next = node2;

    node* curr = head->next; //순회용 노드 생성
    while(curr != NULL){ // 포인터가 null이 아닐 때
        printf("%d\n", curr->data); // 현재 노드 출력
        curr = curr->next; // 포인터에 다음 노드의 주소 저장
    }

    free(head); //노드 메모리 해제
    free(node1);
    free(node2);
    return 0;
}
