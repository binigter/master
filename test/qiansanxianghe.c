#include <stdio.h>

int main()
{
    int a,b,c,n;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    for (int i = 4; i <= n; i++)
    {
        int temp= a+b+c;
        a=b;
        b=c;
        c=temp;

    }
    printf("%d",c);
    
}