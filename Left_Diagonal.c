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
    for(int i=N-1;i>=0;i--){
        int x=0,y=i;
        while(x<M && y<N){
            printf("%d ",arr[x][y]);
            x++;
            y++;
        }
        printf("\n");
    }
    for(int j=1;j<M;j++){
        int x=j,y=0;
        while(x<M && y<N){
            printf("%d ",arr[x][y]);
            x++;
            y++;
        }
        printf("\n");
    }
}
