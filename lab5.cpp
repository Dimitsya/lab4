#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Fio;
    int Age;
    string Group;
};

template <typename T>
void PrintToConsole(T value) {
    cout << value << endl;
}

void PrintToConsole(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void PrintToConsole(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void PrintToConsole(Student student) {
    cout << "FIO: " << student.Fio << endl;
    cout << "Age: " << student.Age << endl;
    cout << "Group: " << student.Group << endl;
}

template <typename T>
void PrintToConsole(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    cout << "=== INT ===" << endl;
    PrintToConsole(1);
    
    cout << "\n=== DOUBLE ===" << endl;
    PrintToConsole(3.14);
    
    cout << "\n=== CHAR ===" << endl;
    PrintToConsole('A');
    
    cout << "\n=== STRING ===" << endl;
    PrintToConsole(string("Hello, World!"));
    
    int arr[5] = { 10, 20, 30, 40, 50 };
    cout << "\n=== ARRAY 1D ===" << endl;
    PrintToConsole(arr, 5);
    
    int arr2D[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "\n=== ARRAY 2D ===" << endl;
    PrintToConsole(arr2D, 3);
    
    Student student = { "Laptev Andrei Anatolievich", 22, "2-MZ-4" };
    cout << "\n=== STUDENT ===" << endl;
    PrintToConsole(student);
    
    return 0;
}