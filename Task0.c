#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");
	
	char c;
	int n;

	printf("������� �������������� ������: \n");
	scanf("%c", &c);
	
	
	printf("������� ���-�� �������������� ��������: \n");
	scanf("%d", &n);
	
	printf("%c", '+');
	for (int a = 1; a <= n; a++) putchar(c);
	printf("%c", '+');
	putchar('\n');
	printf("%c", '+');
	for (int a = 1; a <= n; a++) putchar(' ');
	printf("%c", '+');
	putchar('\n');
	printf("%c", '+');
	for (int a = 1; a <= n; a++) putchar(' ');
	printf("%c", '+');
	putchar('\n');
	printf("%c", '+');
	for (int a = 1; a <= n; a++) putchar(c);
	printf("%c", '+');
	


	return 0;

}