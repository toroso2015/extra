#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    char str[50]; /*宣告一元陣列*/
    
    printf("請輸入一個字串:");
    scanf("%s",&str);
    
    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90)
            str[i]+=32;
        else if (str[i]>=97 && str[i]<=122)
            str[i]-=32;
            i++;
    }
    
    printf("大小寫轉換後的新字串=%s",str);
    
    return 0;
}
