#include <stdio.h>
int main(){
char word[4];
word[1] = '*';
word[2] = '*';
word[3] = '*';
word[4] = '*';
char n;
int l = 0;
while(l < 6){
printf("%c, %c, %c, %c", word[1], word[2], word[3], word[4]);
scanf("%c", n);
if (n == 'w'){
word[1] = 'w';
} else if(n == 'o'){
word[2] = 'o';
} else if (n =='r'){
word[3] = 'r';
} else if (n =='d'){
word[4] = 'd';
} else {
l++;}
}
}
