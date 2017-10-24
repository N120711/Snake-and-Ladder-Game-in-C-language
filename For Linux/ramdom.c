#include<stdio.h>
int ramdom()
{
	static int r[10],t;
	int i;
	srand((signed)time(NULL));
	for(i=0;i<25;++i)
		r[i]=rand();
		i=0;
	while(1)
	{
		t=r[i]%9;
		if(t<=6&&t>0)
			{	return t; break; }
		else
			i++;
	}
		
}
