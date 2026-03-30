#include<stdio.h>
#include<stdbool.h>

int main() {
	//关于注释，用ctrl+/可以作为快捷键

	//关于printf
	printf("change world!\n");

	//关于字符char的用法
	signed char a;
	a = 'a';
	printf("%c\n", a);

	int b;
	b = 10;
	printf("%d\n", b);

	float c;
	c = 3.14;
	printf("%f\n", c);

	long double d;
	d = 3.1415926;
	printf("%Lf\n", d);

	bool e = 1;
	if (e) {
		printf("It is true!\n");
	}
	else {
		printf("It is false!\n");
	}
	return 0;
	//这是作为系统式学习的草稿程序
}