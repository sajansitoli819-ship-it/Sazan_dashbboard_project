#include<stdio.h>
int main(){
	float p,t,r,si;
	printf("enter p,t,r");
	scanf("%f%f%f",&p,&t,&r,si);
	si=(p*t*r)/100;
	printf("simple interest =%f\n",si);
	return 0;
}
