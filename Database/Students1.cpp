//Basically, my programm thinks that there are maximum 100 students in the class
#include <iostream>

using namespace std;

int main() {
    int choice, count = 0, index;
    bool find;
    long long id, temp;
    long long arr[100]{ 0 };
    do {
        cout << "1.Add student\n2.Insert student\n3.Delete student\n4.Search student\n5.Sort students by ID\n6.Display all students\n7.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            if (count >= 100) {
                cout << "You are over limit!\n";
                break;
            }
            cout << "Enter ID for new student: ";
            cin >> arr[count];
            count++;
            break;
        case 2:
            if (count == 0) {
                cout << "There are no students in the data.\n";
                break;
            }
            if (count >= 100) {
                cout << "You are over limit!\n";
                break;
            }
            cout << "Enter index of a student you want to change: ";
            cin >> index;
            if (index < 0 || index > count) {
                cout << "Invalid index!\n";
                break;
            }
            cout << "Enter ID: ";
            cin >> id;
            for (int i = count; i > index; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index] = id;
            count++;
            cout << "Student inserted.\n";
            break;
        case 3:
            if (count == 0) {
                cout << "There are no students in the data.\n";
                break;
            }
            cout << "Enter index to delete: ";
            cin >> index;
            if (index < 0 || index >= count) {
                cout << "Invalid index!\n";
                break;
            }
            for (int i = index; i < count - 1; i++) {
                arr[i] = arr[i + 1];
            }
            count--;
            cout << "Student deleted.\n";
            break;
        case 4:
            find = false;
            if (count == 0) {
                cout << "There are no students in the data.\n";
                break;
            }
            cout << "Enter ID of a student: ";
            cin >> id;
            for (int i = 0; i < count; i++) {
                if (id == arr[i]) {
                    cout << "Index of a student is: " << i << endl;
                    find = true;
                    break;
                }
            }
            if (find) break;
            else cout << "Student with ID " << id << " was not found.\n";
            break;
        case 5:
            if (count == 0) {
                cout << "There are no students in the data.\n";
                break;
            }
            for (int i = 0; i < count - 1; i++) {
                for (int j = 0; j < count - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        long long temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Students sorted by ID in ascending order.\n";
            break;
        case 6:
            if (count == 0) {
                cout << "There are no students in the data.\n";
                break;
            }
            cout << "==========\n";
            for (int i = 0; i < count; i++) {
                cout << i << ". " << arr[i] << endl;
            }
            cout << "==========\n";
            break;
        default:
            if (choice != 7) cout << "Wrong choice, try again!\n";
            else {
                cout << "Programm is finished.\n";
                break;
            }
        }
    } while (choice != 7);
}