
#include<stdio.h>
int main()
{
	int i,k,cache,t=6;
	char a,b,c;
	scanf("%d",&i);
	getchar();
	while(i--)
	{
		scanf("%c%c%c",&a,&b,&c);
		getchar();
		k=a;
			if(b<a)
			{
				cache=b;b=a;a=cache;
			}
			if(c<a)
			{
				cache=c;c=a;a=cache;
			}
			if(c<b)
			{
				cache=c;c=b;b=cache;
			}
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
}
