#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char arr[50];
    int i,sum;
    
    printf("請輸入字串:");
    scanf("%s",arr);
    for(i=0;i<50;i++){
        if(arr[i]=='\0')
            break;
        sum=i;
    }
    
    for(i=sum;i>=0;i--){
        printf("%c",arr[i]);
    }
    
    printf("\n");
    return 0;
}
