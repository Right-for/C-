#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��ȡ����������������С�����˳������
int main(){
int a, b, c, i;
printf("����������������");
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