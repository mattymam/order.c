#include <stdio.h>
#include <string.h>
char *
scanline(char *dest, /* output - destination string */
         int dest_len) /* input - space available in dest */
{
  int i, ch;

  /* Gets next line one character at a time. */
  i = 0;
  for (ch = getchar();
       ch != '\n' && ch != EOF && i < dest_len - 1;
       ch = getchar())
    dest[i++] = ch;
  dest[i] = '\0';

  /* Discards any characters that remain on input line */
  while (ch != '\n' && ch != EOF)
    ch = getchar();

  return dest;
}
int main(){
int n;
int j;
int b = 0;
int c;
char word[20];

printf("please enter a word less than 20 characters:");
scanline(word, 20);
n = strlen(word);
for(j == 0; j<n; j ++){
	c = n -2;
	if (j == c){
		if (word[j] == 'o'){
			b ++;}	}
		c = n -1;
			if (j == c){
			if (word[j] == 'h'){
					b++;}
				}
		}





if(b ==2){
printf("1");

}else { printf("0");}

}
