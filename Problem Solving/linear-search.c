//LINEAR SEARCH
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your N value: \n");
    scanf("%d", &n);
    int i;
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d number:", i + 1);
        scanf("%d", &a[i]);
    }
    int search;
    printf("Enter your search Number: \n");
    scanf("%d", &search);
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            printf("%d Found  in index %d \n", search, i);
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d Not Found\n", search);
    }
    return 0;
}
