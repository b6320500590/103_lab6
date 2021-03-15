#include<stdio.h>

int main()
{
    int n, i, max=0, min=0;

    scanf("%d", &n);

    int a[n] ,b[n], t[n];

    for(i=0; i<n; i++)
    {
        printf("\n");
        scanf("%d %d", &a[i], &b[i]);
    }

    for(i=0; i<n ;i++)
    {
        t[a[i]]++;
        t[b[i]]++;
    }

    for(i=0; i<n; i++)
    {
        if(t[i]>t[i+1])
            max=i;

        if(t[i]<t[i+1])
            min=i;

        printf("\n");
    }

    printf("%d %d", max, min);

    return 0;
}
