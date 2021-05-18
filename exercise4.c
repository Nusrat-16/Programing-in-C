#include<stdio.h>
void func_x() {
int a;
printf("Even numbers between 0 and 40:\n");
for(a=0;a<=40;a++){ 
if(a%2==0){
printf ("%d ",a);
}
}
printf ("\n");
}

void func_y() {
int i;
int j;
printf("Numbers 1 to 100:\n");
for(i=0;i<10;i++){
for (j=1;j<11;j++){
printf("%2d " , i*10+j);
}
printf("\n");
}
}
void func_z(){
int a;
printf("Give a number: ");
scanf("%d" , &a);
while(a!=0) {
printf("The square of %d is %d\n" , a , a*a);
printf("Give a number: ");
scanf("%d" , &a);
}
{
printf("You entered zero.");
}
}

int main () {
func_x();
func_y();
func_z();
return 0;
}
