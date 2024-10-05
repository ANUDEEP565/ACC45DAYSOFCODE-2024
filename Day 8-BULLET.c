#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);  

    while (T--) 
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);  

        
        int travel_time = Y / X;

     
        int delay = Z - travel_time;
        int final_delay = delay > 0 ? delay : 0;

       
        printf("%d\n", final_delay);
    }

    return 0;
}

