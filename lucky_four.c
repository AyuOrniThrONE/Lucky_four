#include <stdio.h>
int main()
{
    int T,occ = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n, remain = 0; 
        scanf("%d", &n);
    label:
    label1:
    
    
        remain += n % 10;
        n /= 10;
        
        while (n > 0)
        {
            if (remain == 4)
            {
                occ++;
                remain=0;
                if(n/4==1){
                    occ++;
                }
                goto label;
            }
            
            else
            {
                remain=0;
                goto label1;
            }
        }
        printf("%d\n", occ);
    }
    return 0;
}
