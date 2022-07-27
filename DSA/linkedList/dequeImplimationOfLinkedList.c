#include <stdio.h>
#include <stdlib.h>

struct node{                        // struct of Node 
    int info;
    struct node * link;
};
struct node * Rare,*front,*p,*start,* Head,*temp;

void InsertionInTheFront(){
    p = (struct node*) malloc(sizeof(struct node));        // Address of the first node
    printf("Enter in The Info Part :- ");     // Adding info to that node
    scanf("%d",&p->info);                                  
    if(start==NULL){                                       // If The node is first
        start = p;                                           // Start = p
        Head  = p;                                          // Head = p 
        Head->link =NULL;
    }
    else{
        p->link = Head;
        Head =p;
    }

}

void InsertionInTheRare(){
    p = (struct node *) malloc(sizeof(struct node));
    printf("Enter the Info in the node");
    scanf("%d",&p->info);
    p->link=NULL;
    if(start == NULL){
        start = Head = front = Rare = p ;
    }
    else{
        Head->link = p;
        Rare =Head= p;
    }  

}

void DeletionFromTheRare(){
    struct node *previous;
    while(Head!=NULL){
        previous=Head;
        Head = Head->link;
        temp = Head;
    }
    previous->link = NULL;
    free(temp);

}
void DeletionFromTheFront(){
    Head = start;
    temp = Head;
    Head = Head->link;
    start = Head;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
    free(temp);
}

void Display(){
    printf("List after insertion is : \n");
    printf("[Start | %p] ----> ",start);
    while(Head!=NULL)
    {
        printf("[%d | %p] ----> ",Head->info,Head->link);
        Head=Head->link;
    }
    printf("[End]");
    
    
}




int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.Insertion From Front\n");
    printf("2.Insertion From Rare\n");
    printf("3.Deletion From Front\n");
    printf("4.Deletion From Rare\n");
    printf("5.Display\n");
    printf("6.Exit\n");

    printf("Enter the Answer:-");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
        InsertionInTheFront();
        break;
    case 2:
        InsertionInTheRare();
        break;
    case 3:
        DeletionFromTheFront();
        break;
    case 4:
        DeletionFromTheRare();
        break;
    case 5:
        Display();
        break;
    case 6:
        n=0;
        break;
    default:
        n=0;
        break;
    }
  }
}
