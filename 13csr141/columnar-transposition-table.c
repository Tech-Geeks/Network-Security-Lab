#include<stdio.h>
#include<string.h>
void main()
{
	int k[10],i,j,l,f,t=0,z,z1,z2,z3;
	char p[100],pt[100][100],a[50],b[50],c[50],d[50];
	printf("Enter the text\n");
	scanf("%s",p);
	printf("Enter the key\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&k[i]);
	}
	l=strlen(p);
	if(l%4!=0)
	{
		f=l%4;
		f=4-f;
	}
	for(i=0;i<f;i++)
	{
		strcat(p,"x");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			
			pt[i][j]=p[t];
			t++;
		}
	}
	pt[i][j]='\0';
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c\t",pt[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		if(k[i]==1)
		{
			z=i;
		}
		else if(k[i]==2)		
		{
			z1=i;
		}
		else if(k[i]==3)
		{
			z2=i;
		}
		else
			z3=i;
	}
	
}
	
