#include<stdio.h>
#include<string.h>
void main()
{
    char a[30];
    int i,j,l,len=0,as[10],m[20][20],m1[20][20],temp,temp1,x=0,y=0;
    printf("Enter the string:\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
       as[i]=a[i];len++;
       printf("%d\n",as[i]);
    }
    for(i=0;i<len;i++)
    {
       for(j=7;j>-1;j--)
       {
          if(j==7)  
          {
            temp=as[i]%2;
            m[i][j]=temp;
            temp1=as[i]/2;
          }
          else
          {
            temp=temp1%2;
            m[i][j]=temp; 
            temp1=temp1/2;
           
          }
       }
    }
    for(i=0;i<8;i++)
    {
       for(j=0;j<8;j++)
       {
           printf("%d\t",m[i][j]);
       }printf("\n");
    }
    for(i=0;i<8;i++)
    {
      if(i%2!=0)
      {
         for(j=7;j>-1;j--)
         {
            m1[x][y]=m[j][i];y++;
         }y=0;x++;
       }
    }    
   for(i=0;i<8;i++)
    {
      if(i%2==0)
      {
         for(j=7;j>-1;j--)
         {
            m1[x][y]=m[j][i];y++;
         }y=0;x++;
      }
    } 
    printf("the ciphertext is:\n");   
    for(i=0;i<8;i++)
    {
       for(j=0;j<8;j++)
       {
           printf("%d\t",m1[i][j]);
       }printf("\n");
    }
}
