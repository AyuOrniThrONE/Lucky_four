#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n, remain = 0, occ = 0;
        scanf("%d", &n);
    label:
    label1:
        remain += n % 10;
        n /= 10;
        while (n >= 4)
        {
            if (remain == 4)
            {
                occ++;
            }
            else
            {
                goto label1;
            }
        }
        goto label;

        printf("%d\n", occ);
    }
    return 0;
}