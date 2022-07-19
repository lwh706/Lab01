#include <stdio.h>
#include "myHeader.h"
 
 
int main(void) {
    int execute=-1;
    int anwser;
    while(execute==-1){
        int i;
        printf("Enter an integer: ");
        scanf("%d", &i);  
        if(i!=1&&i!=2){
            printf("格式錯誤，請重新輸入\n");
            continue;
        }
        char input[4] ;
        printf("Enter an integer: ");
        scanf("%s", input);  
        anwser=myfunc(i,input);
        
        execute=anwser;
        
    }

    
    return anwser;
}