
//#define����ı�ʶ������
#include <stdio.h>
//int main()
//{
//#define MAX 10000
//	int n = MAX;
//	printf("MAX=%d\n", MAX);
//}


//ö�ٳ���

//enum Sex
//{// ö�����ͱ�����δ������ȡֵ
//	
//	
//	MALE=3,//����ֵ
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
	/*��ӡ�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//���ַ�������
	/*int len = strlen("abc");
	printf("%d\n",len);*/


	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
		return 0; 
}