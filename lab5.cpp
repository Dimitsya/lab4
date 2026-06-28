#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Fio;
    int Age;
    string Group;
};

// Шаблонная функция для вывода двумерного массива
template <typename T>
void PrintToConsole(T** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


template <>
void PrintToConsole<Student>(Student** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        cout << "=== Row " << i + 1 << " ===" << endl;
        for (int j = 0; j < cols; j++) {
            // Проверка, что студент существует
            if (arr[i][j].Age != 0) {
                cout << "  Student " << j + 1 << ":" << endl;
                cout << "    FIO: " << arr[i][j].Fio << endl;
                cout << "    Age: " << arr[i][j].Age << endl;
                cout << "    Group: " << arr[i][j].Group << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    // Создаем динамический двумерный массив
    int rows = 3, cols = 2;
    Student** students = new Student*[rows];
    for (int i = 0; i < rows; i++) {
        students[i] = new Student[cols];
    }

    students[0][0] = {"Ivanov I.I.", 18, "2-MZ-4"};
    students[0][1] = {"Petrov P.P.", 19, "3-MZ-4"};
    students[1][0] = {"Sidorov S.S.", 18, "2-MZ-4"};
    students[1][1] = {"Kozlov K.K.", 20, "4-MZ-4"};
    students[2][0] = {"Smirnov S.S.", 19, "3-MZ-4"};
    students[2][1] = {};  // пустой 
    
    cout << "=== TWO-DIMENSIONAL ARRAY OF STUDENTS ===" << endl;
    PrintToConsole(students, rows, cols);
  
}