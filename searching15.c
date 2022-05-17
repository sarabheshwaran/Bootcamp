
#include <stdio.h>

int main() {
    
    int a[100],x;
    
    for(int i=0; i<100;i++){
        a[i] = i + 1;
    }
    
    
    for (int i=1;i<100;i++){
        
        if(a[i]!=0){
            x = a[i];
            for(int j = 0;j<100;j++){
                
                if((a[j] % x)==0){
                    a[j] = 0;
                }
                
            }
        }
        
    }
    
    for(int i=0; i<100;i++){
        
            printf("%d ", a[i]);
    }
    
    return 0;
}
