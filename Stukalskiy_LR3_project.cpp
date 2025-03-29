#include <iostream>
using namespace std;

int a, b, c;

void EnterNumbers()
{
    cout << "Введите длину стороны A: ";
    cin >> a;
    cout << "Введите длину стороны B: ";
    cin >> b;
    cout << "Введите длину стороны C: ";
    cin >> c;
}

void SuchTreug()
{
 if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник с такими сторонами существует." << endl;
    } else {
        cout << "Треугольник с такими сторонами НЕ существует." << endl;
    }
}

void PTreug()
{

}

int main() {
    int choice;
    
    do {
        cout << "\nМеню:" << endl;
        cout << "1. Ввести длины сторон" << endl;
        cout << "2. Проверить существование треугольника" << endl;
        cout << "3. Вычислить периметр" << endl;
        cout << "4. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                EnterNumbers();
                break;
            case 2:
                SuchTreug();
                break;
            case 3:
                PTreug();
                break;
            case 4:
                cout << "Спасибо за использование программы!" << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
