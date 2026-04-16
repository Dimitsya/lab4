#include <iostream>
#include <cmath>
#include <fstream>
#include "labs.h"

void lab2(double amount, double years, double percent) {
    double percentPerMonth, monthPayments, fullAmount, overpayment;
    int months;
    
    // Расчет месячной процентной ставки
    percentPerMonth = percent / 100 / 12;
    
    // Количество месяцев
    months = years * 12;
    
    // Расчет ежемесячного платежа по формуле аннуитета
    double temp = pow(1 + percentPerMonth, months);
    monthPayments = amount * (percentPerMonth * temp) / (temp - 1);
    
    // Расчет итоговой суммы выплат
    fullAmount = monthPayments * months;
    
    // Расчет переплаты
    overpayment = fullAmount - amount;
    
    // Запись в файл
    std::ofstream outFile("lab4.txt", std::ios::app);
    outFile << "Лабораторная работа 2" << std::endl;
    outFile << "Входные данные:" << std::endl;
    outFile << "Сумма кредита = " << amount << " руб." << std::endl;
    outFile << "Количество лет = " << years << std::endl;
    outFile << "Процентная ставка = " << percent << " %" << std::endl;
    outFile << "Результат:" << std::endl;
    outFile << "Ежемесячные выплаты = " << monthPayments << " руб." << std::endl;
    outFile << "Итоговая сумма выплат = " << fullAmount << " руб." << std::endl;
    outFile << "Переплата по кредиту = " << overpayment << " руб." << std::endl;
    outFile << std::endl;
    outFile.close();
}
