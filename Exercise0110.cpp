#include<iostream>

/*
2016��5��5��14:10:31
��ϰ1.11����д������ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ���������
*/

int main()
{	
	std::cout << "Enter two number" << std::endl;
	
	int v1 = 0, v2 = 0, v3 = 0;
	std::cin >> v1 >> v2;

	if (v1 < v2)
	{
		v1 = v3;
		v1 = v2;
		v2 = v3;
	}

	while (v1 >= v2)
	{
		std::cout << v2 << std::endl;
		++v2;
	}

	return 0;
}