#include<stdio.h>
#include<conio.h>

void muda1 (int n){
n=20;
}

void muda2 (int*n){
	*n=30;
}
 int main (){
 	int n;
 	printf("Digite n: ");
	 scanf ("%d", &n);
 	muda2(&n);
 	muda1(n);
 	printf("%d", n);
 	getch();
 	return n;
 }
