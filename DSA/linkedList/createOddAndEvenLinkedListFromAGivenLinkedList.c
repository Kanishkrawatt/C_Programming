#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};
struct node *Head1,*start1=NULL,*newPointer,*start2=NULL,*start3 = NULL,*Head2,*Head3,*p;

void Insertion(int n){
    for(int i=0;i<n;i++){
        newPointer = (struct node *) malloc(sizeof(struct node));
        printf("Enter In the info part of the %d list",i+1);
        scanf("%d",&newPointer->info);
        newPointer->link = NULL;
        if(start1 == NULL){
            start1= Head1= newPointer;
        }
        else{
            Head1->link= newPointer;
            Head1 = Head1->link;
        }
    }
    Head1 = start1;
}
void SeperatingOddAndEvenLinkedList(){
    while(Head1 != NULL){   
        p = (struct node *) malloc(sizeof(struct node ));
        p->info = Head1->info;
        p->link = NULL;
        if(Head1->info % 2== 0){
            if(start2 == NULL){
                start2 = Head2 = p;
            }
            else{
                Head2->link = p;
                Head2 = Head2->link;
            }

        }
        
        else if(Head1->info %2 != 0){
            if(start3 == NULL){
                start3 = Head3 = p;
            }
            else{
                Head3->link = p;
                Head3 = Head3->link;
            }
        }
        Head1 = Head1->link;
    }
    Head2 = start2;
    Head3 = start3;
}
void Display(struct node *Head, struct node * start){
    printf("[Start | %p]---->",start);
    while(Head->link!=NULL)
    {
        printf("[%d | %p]---->",Head->info,Head->link);
        Head=Head->link;
    }
    printf("[%d | %p]\n\n",Head->info,Head->link);
    
}

int main(){
    int n ;
    printf("Enter The Number of Nodes :-  ");
    scanf("%d",&n);
    Insertion(n);
    printf("Main Linked list \n");
    Display(Head1,start1);
    SeperatingOddAndEvenLinkedList();
    printf("Even Linked List \n");
    Display(Head2,start2);
    printf("Odd Linked List \n");
    Display(Head3,start3);

}