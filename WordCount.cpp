#include <stdio.h>

int main( )
{  
	char s[20],*a;
	int i,j;
	a=s;
	gets(s);
	for(i=0;i<20;i++)
	{
		if(s[i]=='\0')
			break;
		if(s[i]==' ')
		{
			j++;
		}
    }
	printf("�ַ�����%d\n",i);
	printf("��������%d\n",j);
	return 0; 
}
