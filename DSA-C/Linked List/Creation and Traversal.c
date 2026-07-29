#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

int main(){
    struct node*head = NULL, *newnode, *temp;
    int i, n, data;
    
    printf("Enter the number of Node: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the Data for Node %d: ", i);
        scanf("%d", &data);
        newnode -> data = data;
        newnode -> next = NULL;

        if(head == 0){
            head = newnode;
            temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
    }
    // Traversal
    temp = head;
    printf("Linked List: ");
    while(temp != NULL){
        printf("%d ->", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
    return 0;
}   