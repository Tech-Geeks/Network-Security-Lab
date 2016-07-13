#include<stdio.h>
#include<string.h>
main()
{
char a[50];
int k = 0,n;
printf("enter the string");
scanf("%s",&a);
n = strlen(a);
printf("string length = %d\n",n);
perm(a,k,n);
}
void perm(char a[50],int k,int n)
{
int i;
if(k == n-1)
{
printf("%s\n",a);
}
else
{
for(i=k;i<n;i++)
{
char d[50];
char t;
t = a[i];
a[i] = a[k];
a[k] = t;
strcpy(d,a);
perm(d,k+1,n);
}
}
}
