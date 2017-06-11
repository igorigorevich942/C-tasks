#include <stdio.h>

char strncpy(char *a,char *b,int n)
{
    int i=0;
    while(b && (i<n)){
    *a=*b;
    *b++;
    *a++;
    i++;
   }
   *a='\0';
   return *(a-n);
}
char strncat(char *a,char *b,int n)
{
    int i=0;
    while(a[i]!='\0'){
    i++;
    }
        int k=0;
        while((k<n)&& b[k]!='\0'){
        a[i]=b[k];
        i++;
        k++;
    }
    a[i]='\0';
}
int strncmp(char *a,char *b,int n)
{
    int i=0;
    for(i=0;i<n;++i)
    {
        if(*a!=*b)
        return 0;
    }
    return 1;
}
int main()
{
  int x, n ;
	char a1[100], b[50],a2[100],a3[100];
	for (n = 0; n < 100; n++)
	{
		a1[n] = '\0';
	}
	for (n = 0; n < 100; n++)
	{
		a2[n] = '\0';
	}
	for (n = 0; n < 50; n++)
	{
		b[n] = '\0';
	}
	printf("vvedite vashu stroku: ");
	gets(a1);
	printf("vvedite kolichestvo simvolov n: ");
	scanf("%i", &x);
	strncpy(b, a1, x);
	printf("vasha stroka s kolichesvom simvolov n: %s\n", b);
	strncat(b, a1, x);
	printf("stroka s dobavleniem n simvolov k koncu stroki: %s\n", b);
	printf("vvedite vashu stroku: ");
	scanf("%s", &a2);
	printf("stroka i ishodnaya stroka ravni (esli 1, to ravni): %i\n", strncmp(a2, a1, x));
	return 0;

}
