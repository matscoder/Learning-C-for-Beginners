#include <stdio.h>
//int main()
//{
//	//转义字符
//		//printf("%c\n", '\'');    //\' 用于表示字符常量'
//		//printf("%s\n", "\"");    \“ 用于表示一个字符串内部的双引号
//	printf("%s\n", "c:\test\test.c");
//	printf("%s\n","c:\\test\\test.c");
//	return 0;
//}    



//int main()
//{
//	printf("%c\n", '\130');  //转义字符\ddd
//
//	printf("%c\n", '\x30');//转义字符\xdd
//	return 0;
//}   


int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
		printf("%d\n", sizeof(long ));
		printf("%d\n", sizeof(long long));
		printf("%d\n", sizeof(char));
}