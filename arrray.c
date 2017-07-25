#include <stdio.h>
int main(){

int i;
int b;
int c;
int ar1[10];
int sum = 0;
for(i = 0; i<=9; i++){

printf("please enter a number");
scanf("%d", &ar1[i]);
sum = sum + ar1[i];
}
double av = sum/10;

printf("the average =: %lf \n", av);

for(b = 0; b<=9; b++){
if(ar1[b] < av)
c ++;

}
printf("%d \n", c);


}
