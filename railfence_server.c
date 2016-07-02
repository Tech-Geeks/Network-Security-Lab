#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
void main()
{
struct sockaddr_in soc;
soc.sin_family=AF_INET;
soc.sin_port=htons(5005);
//10.1.34.219
soc.sin_addr.s_addr=inet_addr("127.0.0.1");
int sid,bd,ls,ac,rec,l,k=3;
char b[100],d[100];
sid=socket(AF_INET,SOCK_STREAM,0);
if(sid>=0)
	printf("\nSocket created");
else
	printf("\nSocket not created");
bd=bind(sid,(struct sockaddr*)&soc,sizeof(soc));
if(bd>=0)
	printf("\nBinded");
else
	printf("\nNot binded");
ls=listen(sid,2);
if(ls>=0)
	printf("\nListened");
else
	printf("\nNot listened");
ac=accept(sid,NULL,NULL);
if(ac>=0)
	printf("\nAccepted \n");
else
	printf("\nNot accepted");

rec=recv(ac,b,100,0);
printf("Message Received From Client is: %s \n",b);
decrypt(b);
}

decrypt(char dmessage[100]){
int i,x=0,y=0,n,z=0;;
char odd[50],even[50],fmessage[100];
n = strlen(dmessage)/2;
for(i=0;i<strlen(dmessage);i++){
if(i<n){
odd[x++] = dmessage[i];
}
else{
even[y++] = dmessage[i];
}
}
for(i=0;i<strlen(dmessage);i++){
fmessage[z++] = odd[i];
fmessage[z++] = even[i]; 
}
printf("Odd Value: %s \n",odd);
printf("Even Value: %s \n",even);
printf("The Decrypted Message is: %s \n",fmessage);
}
