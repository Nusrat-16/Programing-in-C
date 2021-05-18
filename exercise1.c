#include<stdio.h>
void func_a () {
	printf("One half is 50% \n");
	return 0;
}
void func_b() {
	int a=10;
	int b=3;
	printf ("The difference between %d and %d is %d\n" ,a,b, a-b);
	return 0;
}
void func_c() {
	float a= 1;
	float b= 3;
	printf ("%f / %f is %f\n" , a,b, a/b);
	return 0;
}
int main () {
	func_a ();
	func_b ();
	func_c ();
	return 0;
}

