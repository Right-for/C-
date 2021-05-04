#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
// 递归的方式求第n个斐波那契数
int arr(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else return arr(n - 2) + arr(n - 1);
}
int main() {
	int a = 0;
	printf("请输入要查询数列的第几个数：\n");
	scanf("%d", &a);
	int ret = arr(a);
	printf("%d", ret);
	return 0;
}
// 非递归求第n个斐波那契数
int main() {
	int a = 1, b = 1, n = 0, sum = 0;
	printf("请输入要查询第几个数：\n");
	scanf("%d", &n);
	if (n == 1 || n == 2) {
		printf("1\n");
	}
	else if (n > 2) {
		for (int i = 2; i < n; i++) {
			sum = a + b;
			a = b;
			b = sum;
		}
		printf("%d\n", sum);
	}
	else {
		printf("您的输入有误！\n");
	}
	return 0;
}
