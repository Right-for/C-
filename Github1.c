#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//读取三个整数，并按从小到大的顺序排列
int main(){
int a, b, c, i;
printf("请输入三个整数：");
scanf("%d %d %d", &a, &b, &c);
if (a < b) {
	i = a, a = b, b = i;
}
if (a < c) {
	i = a, a = c, c = i;
}
if (b < c) {
	i = b, b = c, c = i;
}
printf("%d %d %d\n", a, b, c);
return 0;
}