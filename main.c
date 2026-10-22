#include <stdio.h>
int main(){

    int is_connection=0;
    int is_count=0;

    while(is_connection!=1 && is_count<3){
        printf("Is connection fail: yes:1 &  no:0\n");
        scanf("%d",& is_connection);
        
        if(is_connection==0 ){
            printf("Failed.Keep tryig\n");
        }
        else{
            printf("Done.complete");
        }
        is_count=is_count+1;
        
        
    }
    if(is_count==3 && is_connection!=1){
            printf("All attemps fail");
        }

    
    return 0;
}