#include<stdio.h>
int main()
{
	int i,j,count = 0; //����countΪ���ֵ���������
	for (i = 100; i <= 200; i++)//iΪ������<=��ΪС�ڵ��ڣ�++�����������������ֵ���� 1
	{
		for (j = 2; j < i; j++)//j������,<=    ???
		if (i % j == 0)   //%��ȡģ������������������
		{
			break; //������ǰѭ��
		}
		if (i == j)    //��iΪ����ʱ��i=j
		{
			printf("%d\t", i);
			count++;

		}
	}
	printf("\n");
	printf("%d", count);

	return 0;

}