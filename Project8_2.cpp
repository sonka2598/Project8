#include <iostream>
#include <Windows.h>

namespace sum {
    int calc(int a, int b)
    {
        return a + b;
    }
}

namespace diff {
    int calc(int a, int b)
    {
        return a - b;
    }
}
namespace multi {
    int calc(int a, int b)
    {
        return a * b;
    }
}
namespace divi {
    double calc(int a, int b)
    {
        return (double)a / (double)b;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x = 0, y = 0;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "Сложение: " << sum::calc(x, y);
    std::cout << "\nВычитание: " << diff::calc(x, y);
    std::cout << "\nУмножение: " << multi::calc(x, y);
    std::cout << "\nДеление: " << divi::calc(x, y);
    return 0;
}