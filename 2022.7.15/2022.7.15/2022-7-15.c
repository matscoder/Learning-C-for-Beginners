//局部变量作用域：局部变量所在的局部范围】
#include <stdio.h >
//int main()
//{
//	printf("hehe\n");
//	{
//		int a = 10;
//		printf("a= %d\n", a);
//	}
//	return 0;
//}




//int g_val = 2021;//全局变量
////例如printf等执行性代码必须写在函数里面即{}里面，
////写外面像写在这一行是错误的
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}


//声明变量11111111111111111111111111111111111111111111111111111111
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


////局部变量生命周期
//int main()
//{
//	{int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//变量例子

//int main()
//{
//int num = 10;//num是变量
//num = 20;
//printf("num=%d\n", num);
//return 0;
//}

//const修饰的常变量
int main()
{
	const int num = 10;//num是变量
	num = 20;
	printf("num=%d\n", num);
	return 0;
}