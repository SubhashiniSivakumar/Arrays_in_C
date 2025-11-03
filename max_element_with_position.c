#include<stdio.h>
int main(){
    int M,N,max=0,max_col=0,max_row=0;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
                max_col=i;
                max_row=j;
            }
        }
    }
    printf("%d %d %d",max,max_col,max_row);
}
