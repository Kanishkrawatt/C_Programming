#include <stdio.h>
#include <stdlib.h>
struct node{                        // struct of Node 
    int info;
    struct node * link;
};

struct node *Head,*p,*start,*temp;
 
void push(){
    p = (struct node *) malloc(sizeof(struct node));
    printf("Enter the Info in the node:- ");
    scanf("%d",&p->info);
    p->link=NULL;
    if(start == NULL){
        start = Head = p ;
    }
    else{
        Head->link = p;
        Head= p;
    }

}
void pop(){
    temp = Head;
    Head = Head->link;
    start = Head;
    printf("\nDeleted Node = [%d | %p]\n",temp->info,temp->link);
    free(temp);
}
void Display(){
    Head= start;
    printf("List after insertion is : \n");
    printf("[Start | %p] ----> ",start);
    while(Head!=NULL)
    {
        printf("[%d | %p] ----> ",Head->info,Head->link);
        Head=Head->link;
    }
    printf("[End]\n");
    
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
    printf(".Sorted. \n");
    
}

int main(){
    int n=1,answer;
    while(n==1){
    printf("\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Sorting\n");
    printf("5.Exit\n");
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
        Sorting();
        break;
    case 5:
        n=0;
        break;
    default:
        n=0;
        break;
    }
    }
}
