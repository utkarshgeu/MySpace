#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};typedef struct node Node;


void Insert_At_End(Node *head,int data){
     Node *temp = malloc(sizeof(Node));
     Node *ptr = head;

     if(ptr == NULL){
      head = temp;
     }else{
      while(ptr->next != NULL){
        ptr = ptr->next;
     }
     }
     
     temp->data = data;
     ptr->next = temp;
}

Node* Insert_At_Begining(Node *head,int data){
     Node *temp = malloc(sizeof(Node));
     Node *ptr = head;
     temp->data = data;
     
     temp->next = ptr;
     head = temp;
}

void display(Node *head){
  Node *ptr = head;
 
 while(ptr != NULL){
  printf("%d ",ptr->data);
  ptr = ptr->next;
}

}


void delete_at_end(Node *head){

  Node *ptr = head;
  Node *temp = ptr;
  while(ptr->next != NULL){
    temp=ptr;
    ptr = ptr->next;
  }
    temp->next = NULL;
  free(ptr);

}



int main(){

Node *head = NULL;

Node *newNode = malloc(sizeof(Node));

newNode->data = 10;
newNode->next = head;
head = newNode;

Node *newNode2 = malloc(sizeof(Node));

newNode2->data = 20;
head->next = newNode2;
// printf("%d",newNode->data);

// printf("%d \n",head->data);



Insert_At_End(head,30);
Insert_At_End(head,40);

head = Insert_At_Begining(head,1);

Node *temp = head;
delete_at_end(head);
display(head);


}