#include <iostream>
#include "Base.h"
#include "Child.h"
#include "LastChild.h"

int main()
{
    LastChild<string, string, string, string, int, double> child{"Name: Pavlo", "Date of birth: 18.08.1999", "Height: ", "Weight: ", 175, 85.7};
    cout << child.getValue1() << endl;
    cout << child.getValue2() << endl;
    cout << child.getValue3() << child.getValue5() << endl;
    cout << child.getValue4() << child.getValue6() << endl;
    child.setValue1("Name: Misha");
    child.setValue2("Date of birth: 20.05.2000");
    child.setValue3("none: ");
    child.setValue4("none: ");
    cout << endl << "---------------------After changes:----------------- " << endl;
    cout << child.getValue1() << endl;
    cout << child.getValue2() << endl;
    cout << child.getValue3() << child.getValue5() << endl;
    cout << child.getValue4() << child.getValue6() << endl;
    cout << endl << "-----------------" << endl;

}
