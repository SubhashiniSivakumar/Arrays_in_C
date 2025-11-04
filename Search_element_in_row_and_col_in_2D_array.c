#include<stdio.h>
int main(){
    int M,N,d;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&d);
    int element=d,row,col;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==element){
                row=i;
                col=j;
            }
        }
    }
    printf("%d %d",row,col);
    return 0;
}
