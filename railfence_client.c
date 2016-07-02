#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<string.h>
int sid,co,ac,rec,l,k=3;
char b[100],msg[100];
void main()
{
struct sockaddr_in soc;
soc.sin_family=AF_INET;
soc.sin_port=htons(5005);
soc.sin_addr.s_addr=inet_addr("127.0.0.1");
sid=socket(AF_INET,SOCK_STREAM,0);
if(sid>=0)
	printf("\nSocket created");
else
	printf("\nSocket not created");
co=connect(sid,(struct sockaddr*)&soc,sizeof(soc));
if(co>=0)
	printf("\nconnected");
else
	printf("\nNot connected");

printf("\nEnter the message to send:");
scanf("%s",b);
encrypt(b);
}

encrypt(char emessage[100]){
char odd[50],even[50];
int x=0,y=0,i;
for(i=1;i<=strlen(emessage);i++){
if(i%2 == 0){
even[x++] = emessage[i-1]; 
}
if(i == strlen(emessage)){
even[x] = '\0';
}
else if(i%2 != 0){
odd[y++] = emessage[i-1];
}
}
printf("Odd Value: %s \n",odd);
printf("Even Value: %s \n",even);
strcat(odd,even);
send(sid,odd,100,0);
}
