#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

float dollar = 1, sum = 12089.55, rub = 152.07;
//
float converterFromDollarToSum(float dollar) {
    cout << dollar << "$ = ";
    return dollar * sum;
}
float converterFromDollarToRub(float dollar) {
    cout << dollar << "$ = ";
    return dollar * rub;
}
//
float converterFromSumToDollar(float sum) {
    cout << sum << " Sum = ";
    return sum / 12089.55;
}
float converterFromSumToRub(float sum) {
    cout << sum << " Sum = ";
    return (sum / 12089.55) * rub;
}
//
float converterFromRubToDollar(float rub) {
    cout << rub << " Rub = ";
    return rub / 152.07;
}
float converterFromRubToSum(float rub) {
    cout << rub << " Rub = ";
    return (rub / 152.07) * sum;
}

int main() {
    cout << fixed << setprecision(2);
    int x, y;
    float z;
    do {
        cout << "1.Dollar\n2.Sum\n3.Rub\n4.Exit\n";
        cin >> x;
        if (x > 4 || x < 1) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Try again.\n";
            system("pause");
            system("cls");
            continue;
        }
        switch (x) {
        case 1:
            cout << "Do you want to convert dollar to\n1.Sum\n2.Rub\n";
            cin >> y;
            switch (y) {
            case 1:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromDollarToSum(z) << " Sum" << endl;
                break;
            case 2:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromDollarToRub(z) << " Rub" << endl;
                break;
            default:
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Try again.\n";
                system("pause");
                system("cls");
                continue;
            }
            break;
        case 2:
            cout << "Do you want to convert sum to\n1.Dollar\n2.Rub\n";
            cin >> y;
            switch (y) {
            case 1:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromSumToDollar(z) << '$' << endl;
                break;
            case 2:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromSumToRub(z) << "Rub" << endl;
                break;
            default:
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Try again.\n";
                system("pause");
                system("cls");
                continue;
            }
            break;
        case 3:
            cout << "Do you want to convert rub to\n1.Dollar\n2.Sum\n";
            cin >> y;
            switch (y) {
            case 1:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromRubToDollar(z) << '$' << endl;
                break;
            case 2:
                cout << "Quantity: ";
                cin >> z;
                cout << converterFromRubToSum(z) << "Sum" << endl;
                break;
            default:
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Try again.\n";
                system("pause");
                system("cls");
                continue;
            }
            break;
        }
        if (x != 4) {
            system("pause");
            system("cls");
        }
    } while (x != 4);
}