#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    char txt1[n][999], txt2[999];

    for(i=0; i<n; i++)
        scanf("%s", txt1[i]);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(strcmp(txt1[j], txt1[j+1])==1)
            {
                strcpy(txt2, txt1[j]);
                strcpy(txt1[j], txt1[j+1]);
                strcpy(txt1[j+1], txt2);
            }
        }
    }

    for(i=0; i<n; i++)
        printf("%s\n", txt1[i]);


    return 0;
}
