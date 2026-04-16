#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "labs.h"

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    // Очищаем файл перед записью
    std::ofstream outFile("lab4.txt");
    outFile << "ОТЧЕТ ПО ЛАБОРАТОРНЫМ РАБОТАМ 1-3" << std::endl;
    outFile << "=====================================" << std::endl;
    outFile << std::endl;
    outFile.close();
    
    // Лабораторная работа 1
    double a, b, c;
    std::cout << "Лабораторная работа 1: Площадь треугольника" << std::endl;
    std::cout << "Введите сторону a: ";
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    std::cin >> b;
    std::cout << "Введите сторону c: ";
    std::cin >> c;
    lab1(a, b, c);
    std::cout << "Результат сохранен в файл." << std::endl << std::endl;
    
    // Лабораторная работа 2
    double amount, years, percent;
    std::cout << "Лабораторная работа 2: Расчет кредита" << std::endl;
    std::cout << "Введите сумму кредита (руб.): ";
    std::cin >> amount;
    std::cout << "Введите количество лет: ";
    std::cin >> years;
    std::cout << "Введите процентную ставку (%): ";
    std::cin >> percent;
    lab2(amount, years, percent);
    std::cout << "Результат сохранен в файл." << std::endl << std::endl;
    
    // Лабораторная работа 3
    int start, end;
    std::cout << "Лабораторная работа 3: Четные и нечетные числа" << std::endl;
    std::cout << "Введите начальное число (от): ";
    std::cin >> start;
    std::cout << "Введите конечное число (до): ";
    std::cin >> end;
    lab3(start, end);
    std::cout << "Результат сохранен в файл." << std::endl << std::endl;
    
    // Вывод содержимого файла в консоль
    std::cout << "=====================================" << std::endl;
    std::cout << "СОДЕРЖИМОЕ ФАЙЛА lab4.txt:" << std::endl;
    std::cout << "=====================================" << std::endl;
    
    std::ifstream inFile("lab4.txt");
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }
    inFile.close();
    
    std::cout << std::endl << "Программа завершена." << std::endl;
    
    return 0;
}
