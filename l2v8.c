//#include <stdafx.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//#include <conio.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
short int asm_culc(char y,char z,short int x){
	return -2;
}
int main(){
	char y,z;
	short int x,v,asm_res;
	int d=0;
	scanf("%d",&d);
	if (d==1){
		y=3;
		z=2;
		x=-1;
	}
	if(d==2){
		x=-755;
		y=91;
		z=127;
	}
	asm_res=asm_culc(y,z,x);
	v=(5*y-(z+2)*x)/(z-1)+1;
	printf("%hX\n",v);
	printf("asmres: %d\n",asm_res);
	return 0;
}
