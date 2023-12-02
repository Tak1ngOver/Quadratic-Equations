#include <iostream>
using namespace std;
int mode;
int lang;
float a;
float b;
float c;
float q;
float z;
void eng_1();
void eng_2();
void rus_1();
void rus_2();
void kaz_1();
void kaz_2();
int main()
{
    cout << "Choose your language:\n1 - English\n2 - Russian\n3 - Kazakh\nMore languages are coming soon!\n";
    cin >> lang;
    if (lang == 1) {
        cout << "Choose the mode:\n1 - composition of the reduced form of quadratic equation by its roots.\n2 - calculation of the roots of any quadratic equation.\n";
        cin >> mode;
        if (mode == 1) {
            eng_1();
        }
        else if (mode == 2) {
            eng_2();
        }
        else {
            cout << "You have entered an incorrect value. Please restart the prorgram.\n";
        }
    }
    else if (lang == 2) {
        cout << "Выберите режим:\n1 - составление приведённого квадратного уравнения по корням.\n2 - вычисление корней из любого квадратного уравнения.\n";
        cin >> mode;
        if (mode == 1) {
            rus_1();
        }
        else if (mode == 2) {
            rus_2();
        }
    }

    else if (lang == 3) {
        cout << "Режимі таңдаңыз:\n1 - түбірлер бойынша келтірілген шаршылық теңдеуді жасау.\n2 - қай шаршылық теңдеунің түбірдері шешу.\n";
        cin >> mode;
        if (mode == 1) {
            kaz_1();
        }
    }
    else if (mode == 2) {
        kaz_2();
    }

    else {
        cout << "Введено некорректно значение. Пожалуйста, перезапустите программу.\n";
    }


    cin >> mode;
    return 0;
}

void eng_1() {
    cout << "Enter the value of the first root:\n";
    cin >> a;
    cout << "Enter the value of the second root:\n";
    cin >> b;
    q = -(a + b);
    z = a * b;
    if (q >= 0) {
        cout << "The result:\nx^2+" << q << "x+" << z;
    }
    else {
        cout << "The result:\nx^2" << q << "x+" << z;
    }
}

    void eng_2() {
    cout << "Enter the value of a (the multiplier of x^2):\n";
    cin >> a;
    cout << "Enter the value of b (the multiplier of x):\n";
    cin >> b;
    cout << "Enter the value of c (the free term):\n";
    cin >> c;
    float disc = b * b - 4 * a * c; // Дискриминант.
    if (disc < 0) {
        cout << "No real solutions.\n";
    }
    else {
        q = (-b + sqrt(disc)) / 2 * a;
        z = (-b - sqrt(disc)) / 2 * a;
        cout << "The roots of the equation:\nx1 = " << q << endl << "x2 = " << z << endl;
    }
}

    void rus_1() {
        cout << "Введите значение первого корня:\n";
        cin >> a;
        cout << "Введите значение второго корня:\n";
        cin >> b;
        q = -(a + b);
        z = a * b;
        if (q >= 0) {
            cout << "Итоговое уравнение:\nx^2+" << q << "x+" << z;
        }
        else {
            cout << "Итоговое уравнение:\nx^2" << q << "x+" << z;
        }
    }
void rus_2() {
   cout << "Введите значение a (числа при x^2):\n";
   cin >> a;
    cout << "Введите значение b (числа при x):\n";
            cin >> b;
            cout << "Введите значение c (свободного члена):\n";
            cin >> c;
            float disc = b * b - 4 * a * c; // Дискриминант.
            if (disc < 0) {
                cout << "Вещественных решений нет.\n";
            }
            else {
                q = (-b + sqrt(disc)) / 2 * a;
                z = (-b - sqrt(disc)) / 2 * a;
                cout << "Корни уравнения:\nx1 = " << q << endl << "x2 = " << z << endl;
            }
        }
        void kaz_1() {
            cout << "Бірінші түбірі енгізіңіз:\n";
            cin >> a;
            cout << "Екінші түбірі енгізіңіз:\n";
            cin >> b;
            q = -(a + b);
            z = a * b;
            if (q >= 0) {
                cout << "Нәтиже:\nx^2+" << q << "x+" << z;
            }
            else {
                cout << "Нәтиже:\nx^2" << q << "x+" << z;
            }
        }
        void kaz_2() {
            cout << "А-дың (x^2 алдында санның) мәні енгізіңіз:\n";
            cin >> a;
            cout << "B-дың (x алдында санның) мәні енгізіңіз:\n";
            cin >> b;
            cout << "C-ның (бос мүшенің) мәну енгізіңіз:\n";
            cin >> c;
            float disc = b * b - 4 * a * c; // Дискриминант.
            if (disc < 0) {
                cout << "Нақты шешімдер жоқ.\n";
            }
            else {
                q = (-b + sqrt(disc)) / 2 * a;
                z = (-b - sqrt(disc)) / 2 * a;
                cout << "Теңдеунің түбірдері:\nx1 = " << q << endl << "x2 = " << z << endl;
            }
        }