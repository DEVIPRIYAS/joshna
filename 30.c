#include <stdio.h>

int main()
{
    int j, m;
    printf("Print odd numbers till: ");
    scanf("%d", &m);

    printf("All odd numbers from 1 to %d are: \n", m);
    for(j=1; j<=m; j++)
    {
      if(j%2!=0)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
