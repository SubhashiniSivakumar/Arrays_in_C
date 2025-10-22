#include<stdio.h>
#include<math.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int temp=0;
    for(int i=0;i<row;i++){
        if(i%2==1){
            for(int j=0;j<col/2;j++){
                temp=arr[i][j];
                arr[i][j]=arr[i][col-j-1];
                arr[i][col-j-1]=temp;
            }
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
