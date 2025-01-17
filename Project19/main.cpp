#include <iostream>

using namespace std;


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("������� �� ����!");
    }
    return a / b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    char operation;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� �������� (+, -, *, /): ";
    cin >> operation;

    cout << "������� ������ �����: ";
    cin >> num2;

    try {
        switch (operation) {
        case '+':
            cout << "���������: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "���������: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "���������: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "���������: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "������������ ��������!" << endl;
        }
    }
    catch (const invalid_argument& e) {
        cout << "������: " << e.what() << endl;
    }

    return 0;
}