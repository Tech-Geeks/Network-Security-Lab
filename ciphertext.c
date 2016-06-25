#include<stdio.h>
main(){
	char ptext[50],ctext[50],mess[50];
	int slen,i,key;
	printf("Enter the Plain Text: \n");
	scanf("%s",&ptext);
	printf("Enter Value to Encode: \n");
	scanf("%d",&key);
	slen = strlen(ptext);
	printf("The Encoded Message Is: \n");
	for(i=0;i<slen;i++){
		//printf("%c",ptext[i]);
		//printf("%d",ptext[i]+3);
		ctext[i] = ((ptext[i]-97)+key%26)+65;
		printf("%c",ctext[i]);
	}
	printf("\nThe Dencoded Message Is: \n");
	for(i=0;i<slen;i++){

		mess[i] = (ctext[i]-65-key+26)%26+97;
		printf("%c",mess[i]);
	}
}
