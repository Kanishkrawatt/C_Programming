#include <stdio.h>
#include <stdlib.h>

struct node{                        // struct of Node 
    int info;
    struct node * link;
};
struct node * Rare,*front,*p,*start=NULL,* Head,*temp;

void InsertionInTheBeginning(){
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
void InsertionAfterAGivenNode(int item){
    p = (struct node *) malloc(sizeof(struct node));
    printf("Enter in The Info Part: -");
    while(Head!=0){
        if(Head->info=item){
            temp = Head->link;
            Head->link=p;
            p->link = temp;
            free(temp);
            break;
        }
        
    }
}

void InsertionInTheEnd(){
    p = (struct node *) malloc(sizeof(struct node));
    printf("Enter the Info in the node");
    scanf("%d",&p->info);
    p->link=NULL;
    if(start == NULL){
        start = p ;
        Head = p;
    }
    else{
        Head->link = p;
        Rare =Head= p;
    }  

}

void DeletionFromTheEnd(){
    struct node *previous;
    while(Head!=NULL){
        previous=Head;
        Head = Head->link;
        temp = Head;
    }
    previous->link = NULL;
    free(temp);

}
void DeletionFromTheBeginning(){
    Head = start;
    temp = Head;
    Head = Head->link;
    start = Head;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
    free(temp);
}
void DeletionAfterAGivenNode(int item){
    struct node *previous;
    while(Head->info=item){
        previous=Head;
        Head = Head->link;
        temp = Head;
    }

    previous->link = Head->link;
    free(temp);
}
void Display(){
    Head = start;
    printf("List after insertion is : \n");
    printf("[Start | %p] ----> ",start);
    while(Head!=NULL)
    {
        printf("[%d | %p] ----> ",Head->info,Head->link);
        Head=Head->link;
    }
    printf("[End]");
    
    
}
void Sorting(){
    int i,j,a;                                             
    struct node * temp1;      // 1,5,4,6
    struct node * temp2;   
    for(temp1=start;temp1!=NULL;temp1 = temp1->link){   
        for(temp2=temp1;temp2!=NULL;temp2= temp2->link){ //0,3
            if(temp2->info < temp1->info){
                a = temp1->info;
                temp1->info = temp2->info;
                temp2->info =a;
            }
        }
        
    }
    free(temp1);
    free(temp2);
    printf(".Sorted. \n");
    
}
void reverse(){
    int a;
    struct node *temp1;
    struct node *temp2;
    for(temp1=start;temp1!=NULL;temp1=temp1->link){
        for(temp2 = temp1->link;temp2 !=NULL;temp2=temp2->link){
            a = temp1->info;
            temp1->info = temp2->info;
            temp2->info = a;
        }
    }
    
}
void Searching(int item){
    int a = 0;
    while (Head!=NULL)
    {
        if(Head->info = item){
            printf("Element Found ");
            a = 1;
            break;
        }
        else{
            Head = Head->link;
        }
    }
    if(a==1){
        printf("Element Not found");    
        }
    
}




int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.InsertionFromStart\n");
    printf("2.InsertionFromEnd\n");
    printf("3.DeletionFromStart\n");
    printf("4.DeletionFromEnd\n");
    printf("5.Sorting\n");
    printf("6.Display\n");
    printf("7.Exit\n");

    printf("Enter the Answer:-");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
        InsertionInTheBeginning();
        break;
    case 2:
        InsertionInTheEnd();
        break;
    case 3:
        DeletionFromTheBeginning();
        break;
    case 4:
        DeletionFromTheEnd();
        break;
    case 5:
        Sorting();
        break;
    case 6:
        Display();
        break;
    case 7:
        reverse();
        break;
    case 8:
        n=0;
        break;
    default:
        n=0;
        break;
    }
  }
}
