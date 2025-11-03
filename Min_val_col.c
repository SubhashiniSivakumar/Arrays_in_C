#include<stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int min,i,j;
   for(int j=0;j<N;j++){
       int min=arr[0][j];
       for(int i=1;i<M;i++){
           if(arr[i][j]<min){
               min=arr[i][j];
           }
       }
       printf("%d ",min);
   }
    return 0;
}
