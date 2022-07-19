#include "myHeader.h"


int myfunc(int i,char input[4]){
    if(i==1){
        int result = 0;
        int tmp;
        if(strlen(input)==1){
        for(int a=0;a<strlen(input);a++){
            
             if(input[a]>='A'&&input[a]<='F'){
                tmp=input[a]-'A'+10;
             }
             else if(input[a]>='a'&&input[a]<='f'){
                tmp=input[a]-'a'+10;
             }
             else if(input[a]>='0'&&input[a]<='9'){
                 tmp=input[a]-'0';
             }
             else{
                printf("格式錯誤\n");
                return -1;
             }
             result*=16;
             result+=tmp;
           
        }
         printf("%d\n",result);
         return result;
        }
        else {
            printf("長度錯誤\n");
            return -1;
        }
    }
    else if(i==2){
        int result = 0;
        int tmp;
        
        if(strlen(input)==4){
            for(int a=0;a<strlen(input);a++){
            
            if(input[a]=='0' || input[a]=='1'){
                tmp=input[a]-'0';
            }
            else{
               printf("格式錯誤\n");
               return -1; 
            }
          
            result*=2;
            result+=tmp;
           
            }
            printf("%d\n",result);
            return  result;
        }   
        else{
            printf("長度錯誤\n");
            return -1;
        }

    }
    else{
        printf("error\n");
        return -1;
    }
    

}