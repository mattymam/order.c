#include <stdio.h>

int main(){



int ui1;
int ui2;
printf("please enter a number: ");
scanf("%d", &ui1);
printf("please enter a second number: ");
scanf("%d", &ui2);

int *p1 = &ui1;
int *p2 = &ui2;

if(*p1 <*p2){
printf("%d", ui1);
}else {printf("%d", ui2);}


return 0;

}
