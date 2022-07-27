#include <stdio.h>
#include <stdlib.h>

struct node{                        // struct of Node 
    int info;
    struct node * link;
};
struct node *Head,*p,*start=NULL,*tail,*temp,*previous=NULL;
 
void insertionAtTheEnd(){  
    p = (struct node*) malloc(sizeof(struct node));  
    printf("Enter in The Info Part (node):- ");   
    scanf("%d",&p->info);
    p->link = NULL;                                 
    if(start==NULL){                                
        start=Head =tail=p;
    }
    else{                                           
        tail->link = p;                             
        tail = tail->link;                          
    }
}


void insertionAtTheBeginning(){                                        
    p = (struct node*) malloc(sizeof(struct node));        
    printf("Enter in The Info Part (node):- ");     
    scanf("%d",&p->info);                                  
    if(start==NULL){                                                                                 
        tail=Head = p;                                          
        Head->link =NULL;
    }
    else{
        p->link = Head;
        Head =p;
    }
    start = Head;
}
void deletionFromTheBeginning(){
    temp = Head;
    Head = Head->link;
    start = Head;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
    free(temp);
}
void DeletionFromTheEnd(){
    
    while(Head->link!=NULL){
        previous = Head;
        Head = Head->link;
        temp = Head;
    }
    previous->link = NULL;
    Head = start;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
    free(temp);

}
void Display(){
    printf("List after insertion is : \n");
    printf("[Start | %p] ----> ",start);
    while(Head->link!=NULL)
    {
        printf("[%d | %p] ----> ",Head->info,Head->link);
        Head=Head->link;
    }
    printf("[%d | %p] \n",Head->info,Head->link);
    Head = start;
    
}

int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.Insertion At The Beginning\n");
    printf("2.Insertion At The End\n");
    printf("3.Deletion From The Beginning\n");
    printf("4.Deletion From End\n");
    printf("5.Display\n");
    printf("6.Exit\n");

    printf("Enter the Answer:-");
    scanf("%d",&answer);
    switch (answer)
    {
    case 1:
        insertionAtTheBeginning();
        break;
    case 2:
        insertionAtTheEnd();
        break;
    case 3:
        deletionFromTheBeginning();
        break;
    case 4:
        DeletionFromTheEnd();
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
