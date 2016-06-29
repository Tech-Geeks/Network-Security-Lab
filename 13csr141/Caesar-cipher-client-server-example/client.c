#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<stdio.h>
#include<string.h>
void main()
{ 
    char a[100],c[100],p[100];
    int k,j,i;
  int sid,lid,seid,rid,cid,aid,z;
  char buff[100],msg[100],input[100],c[100];
   struct sockaddr_in x;
   x.sin_family=AF_INET;
   x.sin_port=htons(5001);
   x.sin_addr.s_addr=inet_addr("127.0.0.1");
   sid=socket(AF_INET,SOCK_STREAM,0);

   printf("enter the message\n");
   scanf("%s",msg);
   if(sid==-1)
   printf(" socket error\n");
    cid=connect(sid,(struct sockaddr *) &x,sizeof(x));
     seid=send(sid,msg,100,0);
     printf("message send:%s\n",msg);

  }
