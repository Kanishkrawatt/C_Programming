#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node * link;
};
struct node * Rare,*front,*p,*start=NULL,* Head,*temp;


void enqueue(){
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
void dequeue(){
    temp = Head;
    Head = Head->link;
    start = Head;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
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
    Head = start;
    
    
}

int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter the Answer :- ");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
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
