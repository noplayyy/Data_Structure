//
//  main.c
//  04.02
//
//  Created by 노연주 on 2021/04/02.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}Node;

Node* head, * tail;

void init() {
    head = NULL;
    tail = NULL;
}
void insert(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    if(head==NULL) { // 빈 리스트일 때
        head = newNode;
        tail = newNode;
    } else { // 데이터가 존재할 때 뒤 쪽으로 추가
        tail -> next = newNode;
        tail = newNode;
    }
}
void print(){
    Node *cur = head;
    while(cur != NULL){
        printf("%d -> ", cur -> data);
        cur = cur -> next;
    }
    printf("NULL\n");
}
void delete(int data){
    Node* prev = NULL; //cur를 따라다니는 포인터
    Node* delNode = NULL;
    Node* cur = head;
    if(cur == NULL){
        printf("연결리스트에 데이터가 없음\n");
        return;
    }
    while(cur != NULL){
        if(data == head->data){ //처음 노드 지우기
            delNode = head;
            head = head -> next;
            cur = head;
            free(delNode);
        }
        else if(data==cur->data){
            delNode = cur;
            prev->next = cur->next;
            cur = cur -> next;
            free(delNode);
        }
        prev = cur;
        cur = cur -> next;
    }
}

void sortedInsert(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next=NULL;
    
    if(head == NULL){
        head = newNode;
    } else if(head->data>data){ //첫번째 위치로 삽입하기
        newNode->next = head;
        head = newNode;
    } else { //중간 삽입
        Node* cur = head;
        while (cur != NULL) {
            if(cur->)
        }
    }
}
int main() {
    init();
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    delete(3);
    delete(4);
    print();
    return 0;
}
