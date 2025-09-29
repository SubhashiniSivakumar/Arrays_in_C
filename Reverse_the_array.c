#include<stdio.h>
int main()
{
    int N, start, end, index, temp;
    scanf("%d",&N);
    int arr[N],arr1[N],sum=0;
    for(index=0;index<N;index++)
    {
        scanf("%d",&arr[index]);
    }
    //Write your code here
    start=0;
    end=N-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
    start++;
    end--;
    }
    
    
   //Your code ends here
   for(index=0;index<N;index++)
    printf("%d ",arr[index]);
    return 0;
}
