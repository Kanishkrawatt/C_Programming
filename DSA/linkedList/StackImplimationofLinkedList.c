#include <stdio.h>
#include <stdlib.h>

struct node{                        // struct of Node 
    int info;
    struct node * link;
};
struct node *Head,*p,*start,*temp;
 
void insertionAtTheBeginning(int n){                  // Insertion 
    int i;
    start =NULL;
    for(i=0;i<n;i++){                       
        p = (struct node*) malloc(sizeof(struct node));        // Address of the first node
        printf("Enter in The Info Part (%d node):- ",i+1);     // Adding info to that node
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
    start = Head;
    

}
void push(){
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
    start = Head;

}
void pop(){
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
    Head = start;
    
    
}

int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter the Answer:-");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        Display();
        break;
    case 4:
        n=0;
        break;
    default:
        n=0;
        break;
    }
    }
}