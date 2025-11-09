#include<stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    int matrix[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int col=0;col<N;col++){
        int i=0,j=col;
        while(i<M && j>=0){
            printf("%d ",matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    for(int row=1;row<M;row++){
        int i=row,j=N-1;
        while(i<M && j>=0){
            printf("%d ",matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
}
