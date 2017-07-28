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
char word2[20];

printf("please enter a word less than 20 characters:");
scanline(word, 20);
n = strlen(word);
for(j = 0; j<n; j ++){
	c = n -1;
	if (j == c){
		if (word[j] == 'y'){
			word2[j] = 'i';
			
			word2[j +1] = 'e';

			word2[j + 2] = 's';
			word2[j +3] = '\0';		}
	else	if (word[j] == 'f'){
		word2[j] = 'v';
		word2[j+1] = 'e';
		word2 [j + 2] = 's';
		word2[j +3] = '\0';
		

} 	else	if (word[j] == 'h'){
		word2[j] = 'h';
		word2[j +1] = 'e';
		word2[j + 2] = 's';
		word2[j +3] = '\0';
				}	
	else	if (word[j] == 's'){
		word2[j] = 's';
		word2[j + 1] = 'e';
		word2[j + 2] = 's';	
		word2[j + 3] = '\0';
}else{
word2[j] = word[j];
word2[j +1] = 's';
word2[j +2] = '\0';}
}else{ word2[j] = word[j];}
		
			
				}
		

j = 0;
n = 0;
n = strlen(word2);

for(j = 0; j < n; j ++){
printf("%c", word2[j]);
}


}

