#include <stdio.h>
#include <math.h>

int normalv(){
int n;
printf("please enter the length of the vector:");
scanf("%d", &n);
int vector[n];
int i;
int b;
for(i = 0; i < n; i ++){
printf("please enter a number:");
scanf("%d", &b);
vector[i] = b;
}



int c;
int s = 0;
for(c = 0; c < n; c ++){
s = s + (vector[c] * vector[c]);

}
c = 0;
for(c = 0; c < n; c ++){
vector[c]= vector[c] / (sqrt(s));
prinf("%d", vector[c]);
}


return 0;
}


int main(){
normalv();
return 0;
}
