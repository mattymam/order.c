#include <stdio.h>
#include <math.h>

int main(){

int i;
int n;
int b;
int x;
int z;
double s =0;
int a;

printf("please enter the length of the array:");
scanf("%d", &n);

int ar1[n];
int ar2[n];
for(b = 0; b<n; b++){
printf("please enter a number:");
scanf("%d", &x);
ar1[b] = x;
}
for (i = 0; i<n; i++){
printf("please enter a number:");
scanf("%d", &z);
ar2[i] = z;
}
for(a = 0; a<n; a++){
s = s + (ar1[a] -ar2[a]) * (ar1[a] -ar2[a]);
}
s = sqrt(s);
printf("%lf", s);
return 0;

}
