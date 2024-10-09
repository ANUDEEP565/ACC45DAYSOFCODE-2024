#include <stdio.h>

int main()
{
    int T; 
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N; 
        scanf("%d", &N);
        
        char gestures[N + 1]; 
        scanf("%s", gestures); 

        int isIndian = 0;
        int isNotIndian = 0;

        
        for (int j = 0; j < N; j++)
        {
            if (gestures[j] == 'I')
            {
                isIndian = 1;
                break;
            } 
            else if (gestures[j] == 'Y') {
                isNotIndian = 1; 
            }
        }

        
        if (isIndian)
        {
            printf("INDIAN\n");
        } else if (isNotIndian)
        {
            printf("NOT INDIAN\n");
        } 
        else
        {
            printf("NOT SURE\n");
        }
    }

    return 0;
}
