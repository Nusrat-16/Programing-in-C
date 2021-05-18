#include<stdio.h>
int main(int argc, char**argv) {
int a;
int i;
char l='y';
char n;
printf("Give a number: ");
scanf("%d" , &a);
{
for(i=1;i<=a;i++)
printf ("%d\n" , i);
}
printf("Run again (y/n)? " );
scanf(" %c" , &l );
do 
{
printf("Give a number: ");
scanf(" %d" , &a);
{
for(i=1;i<=a;i++)
printf("%d\n" , i);
}
printf("Run again (y/n)? " );
scanf(" %c" , &l );
}while(l == 'y');
printf("Exiting...\n");
return 0;

}
