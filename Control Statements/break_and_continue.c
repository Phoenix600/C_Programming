#include <stdio.h>

int main()
{
    int num;
    int t = 1;

    printf("Enter the number range from : 0 - ");
    scanf("%d", &num);
        for (int i = num; i >= 0; i--)
        {
            if(i == 0)
                break;
            if(i % 2 == 0)
                continue;
            printf("%d\n", i);
        }

    return 0;
}