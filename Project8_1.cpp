#include <iostream>
#include <Windows.h>

int count = 0;
void counting_function()
{
	count += 1;
	std::cout << "Количество вызовов функции counting_function(): " << count << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}
	return 0;
}
