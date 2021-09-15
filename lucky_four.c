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
    //labe3l:
        remain += n % 10;
        n /= 10;
        // while (n==0){
        //     if (remain == 0)
        //     {
        //         occ++;
        //         remain=0;
        //         goto labe3l;
        //     }
        // }
        while (n >= 4)
        {
            if (remain == 4)
            {
                occ++;
                remain=0;
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