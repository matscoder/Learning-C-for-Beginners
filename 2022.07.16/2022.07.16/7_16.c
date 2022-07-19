
//#define定义的标识符常量
#include <stdio.h>
//int main()
//{
//#define MAX 10000
//	int n = MAX;
//	printf("MAX=%d\n", MAX);
//}


//枚举常量

//enum Sex
//{// 枚举类型变量的未来可能取值
//	
//	
//	MALE=3,//赋初值
//	FEMALE,
//	SECRET
// };



//int main ()
//{   
//	//MALE=x  error
//enum Sex s = MALE;
//printf("%d\n", MALE);
//printf("%d\n", FEMALE);
//printf("%d\n", SECRET);
//return 0;


//}

#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	//{ 'a','b','c', '\0' };
	/*打印字符串
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//求字符串长度
	/*int len = strlen("abc");
	printf("%d\n",len);*/


	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
		return 0; 
}