#include<stdio.h>
int main()
{
	int i,j,count = 0; //定义count为出现的素数个数
	for (i = 100; i <= 200; i++)//i为素数，<=意为小于等于，++是自增运算符，整数值增加 1
	{
		for (j = 2; j < i; j++)//j是因数,<=    ???
		if (i % j == 0)   //%是取模运算符，整除后的余数
		{
			break; //跳出当前循环
		}
		if (i == j)    //当i为素数时，i=j
		{
			printf("%d\t", i);
			count++;

		}
	}
	printf("\n");
	printf("%d", count);

	return 0;

}