#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string faculty;
    double gpa;
    string contact;
};

void addStudent(Student students[], int& studentCount) {
    cout << "Enter student's ID: ";
    cin >> students[studentCount].id;
    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin, students[studentCount].name);
    cout << "Enter student's faculty: ";
    cin >> students[studentCount].faculty;
    do {
        cout << "Enter student's GPA: ";
        cin >> students[studentCount].gpa;
        if (students[studentCount].gpa < 0 || students[studentCount].gpa > 4) {
            cout << "Your input is wrong. Try again.\n";
        }
        else break;
    } while (true);
    cout << "Enter student's contact: ";
    cin >> students[studentCount].contact;
    cout << "Student added succesfully.\n";
    studentCount++;
}

void displayStudents(const Student students[], int studentCount) {
    cout << "\n\n--- Student List ---\n";
    cout << "ID\tName\tFaculty\tGPA\tContact\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << students[i].id << '\t';
        cout << students[i].name << '\t';
        cout << students[i].faculty << '\t';
        cout << students[i].gpa << '\t';
        cout << students[i].contact << '\t';
        cout << "\n------------------------------------------\n";
    }
    cout << endl;
}

int findStudent(const Student students[], int studentCount, int id) {
    for (int i = 0; i < studentCount; i++) {
        if (id == students[i].id) {
            cout << "---------------------\n";
            cout << students[i].name << endl;
            return id;
        }
    }
    cout << "Student was not found.\n";
}

void updateStudent(Student students[], int studentCount) {
    int id, choice;
    cout << "\n--- Update Student ---\n";
    cout << "Enter student's ID to update: ";
    cin >> id;
    for (int i = 0; i < studentCount; i++) {
        if (id == students[i].id) {
            cout << "Current information:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Faculty: " << students[i].faculty << endl;
            cout << "GPA: " << students[i].gpa << endl;
            cout << "Contact: " << students[i].contact << endl;
            cout << endl;
            cout << "What do you want to update?\n";
            cout << "1. Name\n2. Faculty\n3. GPA\n4. Contact\n5. Finish updating\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice) {
            case 1:
                cout << "Enter new ID: ";
                cin >> students[i].name;
                break;
            case 2:
                cout << "Enter new faculty: ";
                cin >> students[i].faculty;
                break;
            case 3:
                cout << "Enter new GPA: ";
                cin >> students[i].gpa;
                break;
            case 4:
                cout << "Enter new contact: ";
                cin >> students[i].contact;
                break;
            case 5:
                break;
            default:
                cout << "Wrong option.";
                break;
            }
        }
    }
    cout << "Student was not found.\n";
}

int deleteStudent(Student students[], int& studentCount) {
    int id;
    cout << "--- Delete Student ---\n";
    cout << "Enter student ID to delete: ";
    cin >> id;
    for (int i = 0; i < studentCount; i++) {
        if (id == students[i].id) {
            studentCount--;
            cout << "Student deleted succesfully.\n";
            return id;
        }
    }
    cout << "Student was not found.\n";
    return id;
}

int main() {
    Student* students = new Student[50];
    int choice, studentCount = 0, id;
    do {
        cout << "=========================================\n\tSTUDENT DATABASE MENU\n=========================================\n";
        cout << "1. Add a new student.\n2. Display all students.\n3. Search for a student.\n4. Update student information.\n5. Delete a student record\n6. Exit\n";
        cout << "--------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            if (studentCount >= 50) cout << "Data base is full.\n";
            else addStudent(students, studentCount);
            break;
        case 2:
            if (studentCount == 0) cout << "No students in data base.\n";
            else displayStudents(students, studentCount);
            break;
        case 3:
            cout << "Enter student's ID: ";
            cin >> id;
            findStudent(students, studentCount, id);
            break;
        case 4:
            updateStudent(students, studentCount);
            break;
        case 5:
            if (studentCount <= 0) cout << "Data base is empty.\n";
            else deleteStudent(students, studentCount);
            break;
        default:
            if (choice != 6 && choice > 6 || choice < 1) {
                cout << "Wrong option. Try again\n";
            }
            break;
        }
    } while (choice != 6);
    cout << "Programm is finished successfully.\n";
}