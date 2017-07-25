#include <stdio.h>
int m1[3][3];
int m2[3][3];

int main(){

int i;
int c;
int b;
for(i = 0; i<3; i++){
b++;
 	for (c = 0; c<3; c++){
m1[i][c] = b;
}
}

int x;
int y;
int z;
for(x = 0; x<3; x++){
z++;
 	for (y = 0; y<3; y++){
m2[x][y] = z;
}
}
int c1;
int c2;
int c3;
for(c1 = 0; c1<3; c3++){
c3++;
 	for (c2= 0; c2<3; c2++){
m1[c1][c2] - m2[c1][c2];
}
}



}
