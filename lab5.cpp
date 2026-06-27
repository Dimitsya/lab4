#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Fio;
    int Age;
    string Group;
};

void PrintToConsole(Student students[][2], int rows) {
    for (int i = 0; i < rows; i++) {
        cout << "=== Student " << i + 1 << " ===" << endl;
        cout << "FIO: " << students[i][0].Fio << endl;
        cout << "Age: " << students[i][0].Age << endl;
        cout << "Group: " << students[i][0].Group << endl;
        
        if (students[i][1].Age != 0) {
            cout << "\n--- Second student in row ---" << endl;
            cout << "FIO: " << students[i][1].Fio << endl;
            cout << "Age: " << students[i][1].Age << endl;
            cout << "Group: " << students[i][1].Group << endl;
        }
        cout << endl;
    }
}

int main() {
    Student students[3][2] = {
        { {"Ivanov I.I.", 18, "2-MZ-4"}, {"Petrov P.P.", 19, "3-MZ-4"} },
        { {"Sidorov S.S.", 18, "2-MZ-4"}, {"Kozlov K.K.", 20, "4-MZ-4"} },
        { {"Smirnov S.S.", 19, "3-MZ-4"}, {} }
    };
    
    cout << "=== TWO-DIMENSIONAL ARRAY OF STUDENTS ===" << endl;
    PrintToConsole(students, 3);
    
    return 0;
}