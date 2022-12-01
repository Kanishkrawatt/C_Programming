// Heap Sort 
# include <stdio.h>
int Adjust(int * array,int inode,int numOfElem){
    int j = 2*inode;
    int item = array[inode];
    while(j<=numOfElem){
        if((j<numOfElem) & (array[j]<array[j+1])){
            j = j+1;
        }
        else if(item>=array[j]){
            break;
        }
        else{
            array[j/2] = array[j];
            j = 2*j; 
        }
    }


}

int Heapify(int * array,int numOfElem){
    for(int i=numOfElem/2;i>0;i--){
        Adjust(array,i,numOfElem);
    }
}
int HeapSort(int * array,int numOfElem){
    Heapify(array,numOfElem);
    for(int i=numOfElem;i>2;i--){
        Adjust(array,1,i-1);
    }
}

int main(){
    int arr[10] = {2,4,6,8,1,3,5,7,9,1};
    HeapSort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d",arr[i]);
    }
}