#include<stdio.h>
void func_a() {
int a;
printf("Give an integer: ");
scanf("%d", &a);
if (a==0) {
printf("The number you entered equals zero\n");
}
else {
printf("The number you entered does not equals zero\n");
}
}
void func_b() {
float a,b;
printf("Give two floats: ");
scanf("%f %f", &a,&b);
if(a>b){
printf("%f is the largest\n" , a);
}
else {
printf("%f is the largest\n" , b);
}
}
int main (){
func_a();
func_b();
return 0;
}

