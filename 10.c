#include <stdio.h>
#include <math.h>

unsigned int rightrot(unsigned int x,unsigned int n)
{
    int i ;
    for(i=0;i<n;i++)
        {
            if((x%2) == 0)
            {
                x=x/2;
            }
            else
            {
                x=x/2;
                x=x+pow(2,31);
            }
        }
        return x;
}
int main()
{
    unsigned int b,h,f;
    printf("vvesti chislo\n");
    scanf("%u",&b);
    printf("vvesti razryad\n");
    scanf("%u",&h);
    printf("resultat %u\n",rightrot(b,h));
    return 0;
}
