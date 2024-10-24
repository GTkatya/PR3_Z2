#include "MyClass.h"

int main() {
    // Создаем четыре объекта класса Applicant
    Applicant applicant1("John Doe", 1990, "Bachelor's degree");
    Applicant applicant2("Jane Smith", 1985, "Master's degree");
    Applicant applicant3("Michael Johnson", 1995, "High school diploma");
    Applicant applicant4("Emily Brown", 1992, "PhD");

    // Выводим информацию о каждом кандидате
    applicant1.printInfo();
    applicant2.printInfo();
    applicant3.printInfo();
    applicant4.printInfo();

    // Используем новый метод для вывода сообщения
    applicant1.displayMessage("This is a message from applicant 1.");
    applicant2.displayMessage("This is a message from applicant 2.");

    return 0;
}
