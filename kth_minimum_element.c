#include<stdio.h>
int main(){
    int M,N,k;
    scanf("%d %d",&M,&N);
    int matrix[M][N];
    int arr[M*N];
    int index=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&matrix[i][j]);
            arr[index++]=matrix[i][j];
        }
    }
    scanf("%d",&k);
    for(int i=0;i<index-1;i++){
        for(int j=i+1;j<index;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[k-1]);
    
    return 0;
}
