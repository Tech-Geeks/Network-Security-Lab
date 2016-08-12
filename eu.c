#include<stdio.h>
#include<math.h>
main(){
int x=5;
while(x != 0){
printf("Choose Function: \n 0.Exit Program \n 1.Eucledian Theorem \n 2.Fermat's Theorem \n 3.Euler's Theorem \n 4.Chinese Remainder Theorem \n");
scanf("%d",&x);
switch(x){
case 1:
euc();
break;
case 2:
fer();
break;
case 3:
eul();
break;
case 4:
chi();
break;
}
}
}

euc(){
int temp,a,b;
printf("Enter the Dividant: \n");
scanf("%d",&a);
printf("Enter the Divisor: \n");
scanf("%d",&b);
while(b != 0){
temp = b;
b = a%b;
a = temp;
printf("A:%d B:%d \n",a,b); 
}
printf("Answer:%d \n",a);
}

fer(){
/*Statement: a^p-1 mod p = 1 and a^p mod p = a*/
int a,p,n;
printf("Enter the Value of 'a': \n");
scanf("%d",&a);
printf("Enter the Value of 'p': \n");
scanf("%d",&p);
printf("Enter the Value of 'n': \n");
scanf("%d",&n);
if(n == (p-1)){
printf("The Answer is 1 \n");
}
else if(n == p){
printf("The Answer is %d \n",a);
}
else{
printf("Wrong Input");
}
}

eul(){
int temp,a,b,n,count=0;
printf("Enter the Dividant: \n");
scanf("%d",&a);
printf("Enter the Divisor: \n");
scanf("%d",&b);
printf("Enter the 'n': \n");
scanf("%d",&n);
while(b != 0){
temp = b;
b = a%b;
a = temp;
count++;
printf("A:%d B:%d \n",a,b); 
}
printf("Answer:%d \n",a);
if(a == 1){
printf("A and B are Coprime \n");
if(count == n){
printf("Correct Input");
}
else{
printf("Incorrect Input");
}
}
else{
printf("A and B are not Coprime \n");
}
}

chi(){
/*Enter Value a,b any values and p and q positive prime*/
int a,b,c,p,q,r,n1,n2,prod,ans,k1,k2,k3,count =0,p1,q1,r1;
printf("Enter the Value of 'a': \n");
scanf("%d",&a);
printf("Enter the Value of 'b': \n");
scanf("%d",&b);
printf("Enter the Value of 'c': \n");
scanf("%d",&c);
printf("Enter the Value of 'p': \n");
scanf("%d",&p);
printf("Enter the Value of 'q': \n");
scanf("%d",&q);
printf("Enter the Value of 'q': \n");
scanf("%d",&r);
prod = p*q*r;
p1 = prod/p;
q1 = prod/q;
r1 = prod/r;
while((count*p1)%p != 1){
count++;
}
printf("The Value of 'k1' is %d \n",count);
k1 = count;
count = 0;
while((count*q1)%q != 1){
count++;
}
printf("The Value of 'k2' is %d \n",count);
k2 = count;
count = 0;
while((count*r1)%r != 1){
count++;
}
printf("The Value of 'k3' is %d \n",count);
k3 = count;
count = 0;
ans =((a*k1*p1)+(b*k2*q1)+(c*k3*r1))%prod;
printf("The answer is %d \n",ans);
}
