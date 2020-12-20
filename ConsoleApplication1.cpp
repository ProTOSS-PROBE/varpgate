// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int abc(int, char, int);
int abc(string);

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << abc("501-233");
    
}

int abc(int x, char z, int y) {
    if (z == '+') {
        return x + y;
    }
    else if (z == '-') {
        return x - y;
    }
    else if (z == '*') {
        return x * y;
    }
    else if (z == '/') {
        return x / y;
    }
}
int abc(string xzy) {
    int i;
    char z;
    string x, y;
    if (xzy.find("+") != -1) {
        i = xzy.find("+");
        x = xzy.substr(0, i);
        y = xzy.substr(i + 1, xzy.length());
        return abc (stoi(x), '+', stoi(y));
    }
    else if (xzy.find("-") != -1) {
        i = xzy.find("-");
        x = xzy.substr(0, i);
        y = xzy.substr(i + 1, xzy.length());
        return abc (stoi(x), '-', stoi(y));
    }
    else if (xzy.find("*") != -1) {
        i = xzy.find("*");
        x = xzy.substr(0, i);
        y = xzy.substr(i + 1, xzy.length());
        return abc (stoi(x), '*', stoi(y));
    }
    else if (xzy.find("/") != -1) {
        i = xzy.find("/");
        x = xzy.substr(0, i);
        y = xzy.substr(i + 1, xzy.length());
        return abc (stoi(x), '/', stoi(y));
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
