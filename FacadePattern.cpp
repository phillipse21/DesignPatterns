#include "FacadePattern.h"
#include "BuilderPattern.h"

#include <iostream>
#include <string>

int main()
{

    //Builder Pattern
    Create testStatus;

    status* lower = new lowerClass;
    status* middle = new middleClass;
    status* upper = new upperClass;

    testStatus.setStatus(lower);
    testStatus.initializeStatus();

    Person* Lperson = testStatus.getStatus();
    Lperson->print();

    cout << endl << endl;

    testStatus.setStatus(middle);
    testStatus.initializeStatus();

    Person* Mperson = testStatus.getStatus();
    Mperson->print();

    cout << endl << endl;

    testStatus.setStatus(upper);
    testStatus.initializeStatus();

    Person* Uperson = testStatus.getStatus();
    Uperson->print();

    cout << endl << endl;

    //FacadePattern
    OnOff computer;
    computer.turnOn();
    computer.turnOff();

    return 0;
}

