#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int k=0;k<row;k++){
        int i=k,j=0;
        while(i>=0 && j<col){
            printf("%d ",arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    
    for(int k=1;k<col;k++){
        int i=row-1,j=k;
        while(i>=0 && j<col){
            printf("%d ",arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}
