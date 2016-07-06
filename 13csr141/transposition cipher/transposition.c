						//Railfence program

#include<stdio.h>
#include<string.h>
main()
{
char a[50],e[50],o[50],d[50];
int i,j=0,k=0,l,k1=0;
char s,even,odd;
printf("enter the plain text");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{

			if(i%2==0)
			{
				e[j]=a[i]-32;
                                
				j++;
			}
			else
			{
				o[k]=a[i]-32;
				k++;
			}
			
}
e[j]='\0';
o[k]='\0';

strcat(e,o);
printf("the cipher text is:%s",e);


l=strlen(e);
printf("the string length is:%d\n",l);
even=l/2;
odd=(l/2)+1;
printf("odd:%d\n",odd);
printf("even:%d\n",even);
for(i=0;i<odd;i++)
{
d[k1++] = e[i];

d[k1++] = e[++even];
}
d[k1++] = e[i];
d[k1]='\0';
printf("the plain text:%s",d);

}









