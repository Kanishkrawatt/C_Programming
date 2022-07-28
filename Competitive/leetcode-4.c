

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int a1=0,a2=0,a3=0;
    int size =nums1Size+nums2Size;
    int arr[size];
    while (a1!=nums1Size && a2!=nums2Size){
        if(nums1[a1]<=nums2[a2]){
            arr[a3++]=nums1[a1++];
        }
        else{
            arr[a3++] = nums2[a2++];
        } 
    }
    if(a1==nums1Size){
        while(a2!=nums2Size){
            arr[a3++] = nums2[a2++];
        }
    }
    else if(a2==nums2Size){
        while(a1!=nums1Size){
            arr[a3++] = nums1[a1++];
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    if(size%2==0){
        return (float) (arr[size/2-1]+arr[size/2])/2;
         
    }
    else{
        return arr[size/2];
    }
}