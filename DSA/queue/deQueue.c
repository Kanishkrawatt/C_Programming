#include <stdio.h>

int main()
{
    int size, i;
    printf("Enter the size of deque");
    scanf("%d", &size);
    int deque[size];
    int rare = -1;
    int front = -1;
    int stop = 0;
    while (stop == 0)
    {
        printf("1.Insertion at Front of deque \n");
        printf("2.Insertion at Rare of deque \n");
        printf("3.Deletion from The start of deque \n");
        printf("4.Deletion from The End of deque \n");
        printf("5.Print the deque \n");
        printf("6.Exit \n");

        int ans;
        printf("Enter here :- ");
        scanf("%d", &ans);
        int num;
        switch (ans)
        {
        case 1:

            if ((front == 0 && rare == size - 1) || (front == rare+ 1))
            {
                printf("Overflow");
            }
            else{ 
                printf("Enter the Number To insert :- ");
                scanf("%d",&num);
                if ((front == -1) && (rare == -1))
                {
                    front = rare = 0;
                    deque[front] = num;
                }
                else if (front == 0)
                {
                    front = size - 1;
                    deque[front] = num;
                }
                else
                {
                    deque[--front] = num;
                }
            }
            printf("Inserted at front = %d rare = %d \n",front,rare); 
            
            printf("\n");
            break;
        case 2:
            if((front ==0 && rare == size-1)||(rare+1== front)){
                printf("OverFlow");
            }
            else{
                printf("Enter the Number To insert :- ");
                scanf("%d",&num);
                if(front==-1 && rare ==-1){
                    front = rare = 0;
                    deque[rare] = num;
                }
                else if(rare==size-1){
                    rare = 0;
                    deque[rare] = num;
                }
                else{
                    deque[++rare]=num;
                }

            }
            printf("Inserted at front = %d rare = %d \n",front,rare); 
            
            printf("\n");
            break;

        case 3:
            if(rare == -1 && front == -1){
                printf("UnderFlow");
            }
            else{
                if(front ==rare){
                    printf("Deleted Element :- %d",deque[front]);
                    rare  = front = -1;
                    
                }
                else if(front == size-1){
                    printf("Deleted Element :- %d",deque[front]);
                    front = 0;
                }
                else{
                    printf("Deleted Element :- %d",deque[front++]);
                }
            }
            printf("\n");
            break; 
        case 4:
            if(rare == -1 && front == -1){
                printf("UnderFlow");
            }
            else{
                if(front ==rare){
                    printf("Deleted Element :- %d",deque[rare]);
                    rare  = front = -1;
                    
                }
                else if(rare == 0){
                    printf("Deleted Element :- %d",deque[rare]);
                    rare = size-1;
                }
                else{
                    printf("Deleted Element :- %d",deque[rare--]);
                }
            }
            printf("\n");
            break;
        case 5:
            i = front;
            while(i!=rare)    
            {    
                printf("%d ",deque[i]);    
                i=(i+1)%size;    
            }    
            printf("%d",deque[rare]);    

            printf("\n");
            break;
        default:
            stop = 1;
            break;
        }
    }
}