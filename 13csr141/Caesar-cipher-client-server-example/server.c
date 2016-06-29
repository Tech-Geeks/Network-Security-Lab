#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<stdio.h>
#include<string.h>
void main()
{
   char a[100],p[100];
  int k=3,j,i;
  int sid,lid,seid,rid,bid,aid,z;
  char buff[100],msg[100],input[100],c[100];
   struct sockaddr_in x;
   x.sin_family=AF_INET;
   x.sin_port=htons(5001);
   x.sin_addr.s_addr=inet_addr("127.0.0.1");
   sid=socket(AF_INET,SOCK_STREAM,0);
   if(sid==-1)
   printf(" socket error\n");
  bid=bind(sid,(struct sockaddr *) &x,sizeof(x));
  lid=listen(sid,2);
  if(lid==-1)
  printf("listen error\n");
  aid=accept(sid,NULL,NULL);
  rid=recv(aid,c,100,0);
  printf("message from client:%s\n",c);

   	for(i=0;c[i]!='\0';i++)
	{
		p[i]=((c[i]-65-k+26)%26)+97;		
	}
p[i]='\0'; 
   printf("\nthe plain text is: %s",p);



  }
  
