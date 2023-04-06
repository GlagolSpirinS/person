#include <iostream>
#include <string>
using namespace std;

class People {
public:
    static int count;
    People() {
        count++;
    }
    virtual void displayInfo() = 0;
    static void displayCount() {
        cout << "Количество людей: " << count << endl;
    }
};

int People::count = 0;

struct Person : People {
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void displayInfo() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
    }
};

int main() {
    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "Russian_Russian.1251");
    Person p1("Zahar", 25);
    Person p2("Vova", 30);
    Person p3("Vadim", 22);
    People::displayCount();
    p1.displayInfo();
    p2.displayInfo();
    p3.displayInfo();
    return 0;
}