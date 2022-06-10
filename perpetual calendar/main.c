#include <stdio.h>
#include <stdlib.h>

int leap_year(int x){
    if(x%4!=0)
        return 0;
    else if (x%100==0 && x%400!=0)
        return 0;
    else 
        return 1;
}

int main(){
    
    int i,j,w;
    int year,month;
    int days[12]={31,28,31,30,31,30,31,31,30,31,31,31};
    
    printf("請輸入1900後的西元年分:");
    scanf("%d",&year);
    
    if(year>=1900){
        printf("請輸入當年月份:");
        scanf("%d",&month);
        w=0;
        
        for(i=0;i<(year-1900);i++){
            if(leap_year(i+1900))
                w=(w+366)%7;
            
            else
                w=(w+365)%7;
        }
        
        if(leap_year(year))
            days[1]=29;
        
        else
            days[1]=28;
            
        for(i=0;i<month-1;i++)
            w=w+days[i];
        w=w%7;
        
        printf("\n\n");
        printf("\t%d年%d月\n\n",year,month);
        printf(" 一 二 三 四 五 六 日\n");
        
        for(j=1;j<=w;j++)
            printf("   ");
        
        for(i=1;i<=days[month-1];i++){
            printf("%3d",i);
            if(i%7==(7-w)%7)
                printf("\n");
        }
        
        printf("\n");
        
    }
    
    else
        printf("請輸入1900後的西元年分\n");
    
    return 0;
}
