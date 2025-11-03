#include<stdio.h>
int main(){
    int M,N,maxcount=-1,sum=0,row;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<M;i++){
        int count=0;
        for(int j=0;j<N;j++){
            if(arr[i][j]==1) {
                count++;
                
            }
        }
        if(count>maxcount){ 
            maxcount=count;
            row=i;
        }
    }
    printf("%d",row);
}
