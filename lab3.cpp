#include <iostream>
#include <fstream>
#include <string>
#include "labs.h"

void lab3(int start, int end) {
    int evenCount = 0, oddCount = 0;
    std::string evenNumbers = "";
    std::string oddNumbers = "";
    
    // Корректировка диапазона, если start > end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    // Проход по всем числам от start до end
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            evenCount++;
            if (evenNumbers != "") {
                evenNumbers += ", ";
            }
            evenNumbers += std::to_string(i);
        } else {
            oddCount++;
            if (oddNumbers != "") {
                oddNumbers += ", ";
            }
            oddNumbers += std::to_string(i);
        }
    }
    
    // Запись в файл
    std::ofstream outFile("lab4.txt", std::ios::app);
    outFile << "Лабораторная работа 3" << std::endl;
    outFile << "Входные данные:" << std::endl;
    outFile << "Диапазон от " << start << " до " << end << std::endl;
    outFile << "Результат:" << std::endl;
    outFile << "Количество четных чисел = " << evenCount << std::endl;
    outFile << "Четные числа = " << evenNumbers << std::endl;
    outFile << "Количество нечетных чисел = " << oddCount << std::endl;
    outFile << "Нечетные числа = " << oddNumbers << std::endl;
    outFile << std::endl;
    outFile.close();
}
