#include<iostream>

/*
2016年5月5日14:10:31
练习1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数
*/

int main()
{
	std::cout << "Enter two number" << std::endl;

	int v1 = 0, v2 = 0, v3 = 0;
	std::cin >> v1 >> v2;

	if (v1 < v2)
	{
		v3 = v1;
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














