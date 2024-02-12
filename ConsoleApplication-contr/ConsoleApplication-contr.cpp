// ConsoleApplication-contr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>


int main()
{
    //system("chcp 1251");
    std::cout << "\ninput coordinats for rectangle:";
    double a1=0;
    double b1=0;
    double a2=0;
    double b2=0;
    double a3=0;
    double b3=0;
    double a4 = 0;
    double b4 = 0;
    double a5 = 0;
    double b5 = 0;

    std::cout << "\ncoord.'a1'=";
    std::cin >>a1;
    std::cout << "coord.'b1'=";
    std::cin >> b1;
    std::cout << "coord.'a2'=";
    std::cin >> a2;
    std::cout << "coord.'b2'=";
    std::cin >> b2;
    std::cout << "coord.'a3'=";
    std::cin >> a3;
    std::cout << "coord.'b3'=";
    std::cin >> b3;
    std::cout << "coord.'a4'=";
    std::cin >> a4;
    std::cout << "coord.'b4'=";
    std::cin >> b4;
    std::cout << "coord.'a5'=";
    std::cin >> a5;
    std::cout << "coord.'b5'=";
    std::cin >> b5;

    std::cout << "\narea=";


    std::cout.precision(2);

    double S = (a1*b2+a2*b3+a3*b1-a2*b1-a3*b2-a1*b3) / 2;

    std::cout << S << "\n";
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
