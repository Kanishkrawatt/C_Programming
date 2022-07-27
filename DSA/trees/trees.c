#include <stdio.h>
#include <stdlib.h>

struct treeNode{
    int info;
    struct treeNode * leftTreeNode;
    struct treeNode * rightTreeNode;
};
int depth=0;
int * height;
struct treeNode * root,*pl,*pr,*mover;
void display(struct treeNode * tree,int depth){
    int i;
	if(tree) {
        display(tree->rightTreeNode,depth+1);
        
		for(i =0;i<depth;i++){
            printf("\t");
        }
        printf("%d",tree->info);
        
        printf("\n\n");
        display(tree->leftTreeNode,depth+1);
	}
}
void insert(struct treeNode * left,struct treeNode * add , struct treeNode * right){
    int a;
    int ans;
    add->leftTreeNode = left;
    add->rightTreeNode = right;
    printf("Enter The Data :- ");
    scanf("%d",&add->info);
    printf("Want To Insert any left or Right node In this node:- (1.Yes)(2.No)\n");
    printf("Enter Here:- ");
    scanf("%d",&a);
    while (a==1){
        printf("Tree");
        printf("\n\n\n");
        display(root,depth);
        printf("\n");
        printf("\n \tNODE =  %d\n",add->info);
        printf("1.Enter In the Left side \n");
        printf("2.Enter In the Right side \n");
        printf("3.Exit\n");
        printf("Enter Here :- ");
        scanf("%d",&ans);

        switch (ans)
        {
        case 1:
            pl = (struct treeNode *) malloc(sizeof(struct treeNode ));
            add->leftTreeNode = pl;
            insert(NULL,pl,NULL);
            break;
        
        case 2:
            pr = (struct treeNode *) malloc(sizeof(struct treeNode ));
            add->rightTreeNode = pr;
            insert(NULL,pr,NULL);
            break;
        case 3:
            a=2;
            break;
        
        default:
            a=2;
            break;
        }


    }
    
}



int main(){
    root = (struct treeNode *) malloc(sizeof(struct treeNode));
    insert(NULL,root,NULL);
    printf("\n\n");
    display(root,1);

}