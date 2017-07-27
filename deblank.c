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
char sen[50];
int n;
int i;
int c = 0;
printf("please enter:");
scanline(sen, 50);
n = strlen(sen);
char sen2[n];
for(i =0; i <n; i++){
if (sen[i] != ' '){

sen2[c] = sen[i];
c++;
}
}
n = 0;
n = strlen(sen2); 
i = 0;
for(i = 0; i <n; i ++){
printf("%c",sen2[i]);
}

}
