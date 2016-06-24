#include<stdio.h>

//Declare Variables Here
int Aval=65,tab_val[100][100],i,j,plen,klen,x=0,inc=0;
char ptext[50],key[50],pval,kval,res[50]; 

//Main Function
main(){
	printf("Enter the plain text: \n");
	scanf("%s",&ptext);
	printf("Enter the key: \n");
	scanf("%s",&key);
	plen = strlen(ptext);
	klen = strlen(key);
	vtable();
	encode_op();
}

//Create The Virtual Table
void vtable(){
	for(i=0;i<=25;i++){
		for(j=0;j<=25;j++){
			tab_val[i][j] = (Aval + j);
			if(tab_val[i][j]>90){
				tab_val[i][j] = tab_val[i][j] - 26;
			}
			printf("%c ",tab_val[i][j]);
		}
	Aval += 1;
	printf("\n");
	}
}

void encode_op(){
	//printf("%s",optext);
	if(klen < plen){
		for(i=0;i<=plen;i++){
			if(i > klen){
				//printf("In the if and loop %d\n",i);
				key[i-1] = key[x];
				x += 1;
			}
		}
	} 
//printf("Klen:%d\n",klen);
printf("%s",key);
	for(i=0;i<klen;i++){
		pval = ptext[i]-97;
		kval = key[i]-97;
		res[inc++] = tab_val[pval][kval]
	}
	printf("%s",res);
}
