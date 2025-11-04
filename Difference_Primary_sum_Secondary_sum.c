#include<stdio.h>
int main(){
    int M,N;
    long long Difference;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    long long Psum=0,Ssum=0;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
            
            if(i==j) Psum+=arr[i][j];
            if(i+j==N-1) Ssum+=arr[i][j];
        }
    }
    Difference=Psum-Ssum;
    printf("%lld",abs(Difference));
}
