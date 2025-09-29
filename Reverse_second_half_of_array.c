#include<stdio.h>
int main()
{
    int N, start, end, index, temp;
    scanf("%d",&N);
    int arr[N];
    for(index=0;index<N;index++)
    {
        scanf("%d",&arr[index]);
    }
    //Write your code here
    
   start=N/2;
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
