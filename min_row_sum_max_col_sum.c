#include<stdio.h>
int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    
    long long arr[50][50];
    long long row,col;
    
    long long min_row=1e18;
    long long max_col=-1e18;
    
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%lld",&arr[i][j]);
        }
    }
    
    for(int i=0;i<M;i++){
        row=0;
        for(int j=0;j<N;j++){
            row=row+arr[i][j];
        }
        if(row<min_row){
                min_row=row;
            }
        
    }
     for(int j=0;j<N;j++){
        col=0;
        for(int i=0;i<M;i++){
            col=col+arr[i][j];
        }
        if(col>max_col){
                max_col=col;
            }
        
    }
    printf("%lld %lld",min_row,max_col);
    
}
