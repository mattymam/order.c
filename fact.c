#include <stdio.h>
int main(){
int f;
int i;
int n;
int b = 0;
do{
printf("please enter a number between 0, and 9:");
scanf("%d", &n);
if(n>9){ printf("invalid number \n"); b = 1;
} else if (n<0){
printf("invalid number \n"); b = 1;}else
 { b = 0;}
	}while( b != 0);
f = n;
for(i = 0; i < n; i ++){
printf("%d", f);
if (f != 1){
printf(" x ");} 
else{
printf(" =  %d" ,n);}
f--;
n = n *f;
}
}
