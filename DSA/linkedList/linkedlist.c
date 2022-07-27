#include <stdio.h>
#include <stdlib.h>

struct node{                        // struct of Node 
    int info;
    struct node * link;
};
struct node *Head,*p,*start;
 
void insertionAtTheEnd(int n){                  // Insertion 
    int i;
    start =NULL;
    for(i=0;i<n;i++){                       
        p = (struct node*) malloc(sizeof(struct node)); //creating a node or giving size to the node 
        printf("Enter in The Info Part (%d node):- ",i+1);   //adding info in the node
        scanf("%d",&p->info);
        p->link = NULL;                                 // adding the link of the node to null
        if(start==NULL){                                // if the start node is null (meaning the insertion in the first node)
            start=p;                                    // set the start to p , head
            Head =p;
        }
        else{                                           // else
            Head->link = p;                             // add address of next node in the link of the previous node
            Head = Head->link;                          // head = head ->link (go to the next node)
        }
    }
    Head = start;
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
    int n;
    printf("Enter the Number of Nodes :- ");
    scanf("%d",&n);
    insertionAtTheEnd(n);
    Display();
}
