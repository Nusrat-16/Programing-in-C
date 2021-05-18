#include<stdio.h>
void func_a() {
int a,b ;
printf ("Give two integers: ");
scanf("%d %d ",&a,&b);
printf ("You entered %d and %d, their sum is: %d\n" ,a,b,a+b);
}
void func_b() {
float a,b;
printf ("Give two floats: ");
scanf("%f %f ",&a,&b);
printf ("You entered %f and %f, their product is: %f\n" ,a,b,a*b);
}
void func_c() {
char word[100];
printf ("Give a word: ");
scanf("%s ", word);
printf ("%s %s\n" ,word,word);
}
int main (int argc , char **argv){
func_a();
func_b();
func_c();
return 0;
}

