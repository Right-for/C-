#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
// �ݹ�ķ�ʽ���n��쳲�������
int arr(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else return arr(n - 2) + arr(n - 1);
}
int main() {
	int a = 0;
	printf("������Ҫ��ѯ���еĵڼ�������\n");
	scanf("%d", &a);
	int ret = arr(a);
	printf("%d", ret);
	return 0;
}
// �ǵݹ����n��쳲�������
int main() {
	int a = 1, b = 1, n = 0, sum = 0;
	printf("������Ҫ��ѯ�ڼ�������\n");
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
		printf("������������\n");
	}
	return 0;
}
