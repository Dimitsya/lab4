#include <iostream>
#include <cmath>
#include <fstream>
#include "labs.h"

void lab1(double a, double b, double c) {
    double p, S;
    
    // Вычисление полупериметра
    p = (a + b + c) / 2;
    
    // Вычисление площади по формуле Герона
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    
    // Запись в файл
    std::ofstream outFile("lab4.txt", std::ios::app);
    outFile << "Лабораторная работа 1" << std::endl;
    outFile << "Входные данные:" << std::endl;
    outFile << "Сторона a = " << a << std::endl;
    outFile << "Сторона b = " << b << std::endl;
    outFile << "Сторона c = " << c << std::endl;
    outFile << "Результат:" << std::endl;
    outFile << "Площадь треугольника = " << S << std::endl;
    outFile << std::endl;
    outFile.close();
}