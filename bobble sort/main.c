#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,tmp;
    int NUM=8;
    int data[8]={58,23,47,31,69,78,93,17};
    printf("氣泡排序法:\n原始資料為:");
    for(i=0;i<NUM;i++){
        printf("%3d",data[i]);
    }
    printf("\n");
    
    for(i=NUM-1;i>=1;i--){ /*掃描次數*/
        for(j=0;j<i;j++){ /*比較、交換次數*/
            if(data[j]>data[j+1]){
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
        printf("第%d排序後的結果是:",NUM-i);
        for(j=0;j<NUM;j++){
            printf("%3d",data[j]);
        }
        printf("\n");
    }
    printf("最終結果為:");
    for(i=0;i<NUM;i++){
        printf("%3d",data[i]);
    }
    printf("\n");
    return 0;
    
}
