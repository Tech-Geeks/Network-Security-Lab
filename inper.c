#include<stdio.h>
main(){
int i,j,x=1,y=0,z=0,flag=1,flag2=1,y1=0,z1=0;
int val[8][8],odd[50],even[50],res[8][8];
printf("The Inputs are: \n");
for(i=0;i<8;i++){
for(j=0;j<8;j++){
val[i][j] = x;
x++;
printf("%d \t",val[i][j]);
}
printf("\n");
}
//for(i=0;i<8;i++){
//for(j=0;j<8;j++){
//if(val[i][j]%2 == 0){
//even[y] = val[i][j];
//printf("Even:%d\n",even[y]);
//y++;
//}
//else{
//odd[z] = val[i][j];
//printf("Odd:%d\n",odd[z]);
//z++;
//}
//}
//}
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(flag%2 == 0){
even[y] = val[i][j];
//printf("Even:%d\n",even[y]);
y++;
}
else{
odd[z] = val[i][j];
//printf("Odd:%d\n",odd[z]);
z++;
}
flag++;
}
flag=1;
}
//printf("Even Values are: \n");
//for(i=0;i<y;i++){
//printf("%d",even[i]);
//}
for(i=0;i<8;i++){
for(j=0;j<8;j++){
if(flag2 == 1 || flag2 == 2 || flag2 == 3 || flag2 == 4){
res[j][i] = even[y1];
y1++;
}
else{
res[j][i] = odd[z1];
z1++;
}
flag2++;
}
flag2 = 1;
}
printf("\nThe result is:\n");
for(i=0;i<8;i++){
for(j=0;j<8;j++){
printf("%d \t",res[i][j]);
}
printf("\n");
}
}
