#include<stdio.h>


int main()
{
    int n, i, x, y;

    scanf("%d", &n);
    printf("\n");
    scanf("%d", &x);
    printf("\n");
    scanf("%d", &y);


    int a[n], b[n], t=0, f=0;

    for(i=0; i<n; i++)
    {
        a[n-1-i]=x%10;
        x/=10;
        b[n-1-i]=y%10;
        y/=10;

        if(a[n-1-i] == b[n-1-i])
            t++;
        else
            f++;
    }

    printf("%d %d", t, f);

    return 0;
}
