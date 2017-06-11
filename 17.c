#include <stdio.h>

float func(int n)
{
    int i=0;
    float a[100],l,h;
    printf("vvedite elementi massiva\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    i=0;
    l=a[0];
    h=a[0];
    while(i<n){
        if(l>a[i])
        {
            l=a[i];
        }
        if(h<a[i])
        {
            h=a[i];
        }
        i++;
    }
    return h-l;
}
int main()
{
    int N;
    printf("vvedite kolichestvo elementov massiva\n");
    scanf("%d",&N);
    printf("resultat: %.2f",func(N));
    return 0;
}
