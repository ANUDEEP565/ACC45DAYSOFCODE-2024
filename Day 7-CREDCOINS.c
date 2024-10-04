#include <stdio.h>

int main()
{
    int T; 
    scanf("%d", &T);
    
    while (T--) 
    {
        int X, Y; 
        scanf("%d %d", &X, &Y);
        
       
        int total_coins = X * Y;
        
        
        int bags = total_coins / 100; 
        printf("%d\n", bags);
    }
    
    return 0;
}


