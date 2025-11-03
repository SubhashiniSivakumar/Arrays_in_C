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
    int max;
    for(int i=0;i<M;i++){
        max=arr[i][0];
        for(int j=0;j<N;j++){
            if(arr[i][j]>max){ 
                max=arr[i][j]; 
            }
        }
         printf("%d ",max);
    }
    return 0;
    
}
