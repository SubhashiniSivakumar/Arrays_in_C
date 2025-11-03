#include<stdio.h>
#include<limits.h>
int main(){
    int M,N,i,j;
    scanf("%d %d",&M,&N);
    int arr[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    long long int minUpper=LLONG_MAX;
    long long int maxLower=LLONG_MIN;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){

        if(i<=j){
            if(arr[i][j]<minUpper){
                minUpper=arr[i][j];
            }
        }
        if(i>=j){
            if(arr[i][j]>maxLower){
                maxLower=arr[i][j];
            }
        }
        }
    }
    long long int val=minUpper*maxLower;
    printf("%lld",val);
    return 0;
}
