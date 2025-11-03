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
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(i>=j){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
