#include<stdio.h>
int main(){
    int M,N,i,j,k,l,equal=0;
    scanf("%d %d",&M,&N);
    int arr[M][N],arr1[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]==arr1[i][j]){
                equal=1;
                break;
            }
        }
    }
    if(equal==1) printf("Equal");
    else printf("Not Equal");
}
