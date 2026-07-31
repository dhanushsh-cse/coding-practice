#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

int main(){
    struct node*head = NULL, *temp, *newnode;
    int i, data, n;
    printf("Enter the number of node: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the Data for node %d: ", i);
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        
        if(head == 0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted at begining: ");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = head;
        head = newnode;

        printf("Linked List:\n");
        temp = head;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp -> next;
    }     
    printf("NULL");
}