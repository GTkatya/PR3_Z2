#include <iostream>
#include "MyClass.h"

using namespace std;

// Конструктор по умолчанию
Applicant::Applicant() : fullName(""), birthYear(0), education("") {
    // Может содержать инициализацию по умолчанию
}

// Конструктор класса Applicant
Applicant::Applicant(const string& name, int year, const string& edu) {
    fullName = name;
    birthYear = year;
    education = edu;
}

// Деструктор класса Applicant
Applicant::~Applicant() {
    // Здесь может быть код для очистки ресурсов, если необходимо
    cout << "Destructor called for applicant: " << fullName << endl;
}

// Определение метода printInfo
void Applicant::printInfo() {
    cout << "Name: " << fullName << endl;
    cout << "Birth year: " << birthYear << endl;
    cout << "Education: " << education << endl;
    cout << endl;
}

// Определение метода displayMessage
void Applicant::displayMessage(const string& message) {
    cout << message << endl;
}
