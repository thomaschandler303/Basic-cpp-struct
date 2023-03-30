#include <iostream>
#include <string>

using namespace std;

enum Program {CSCI, DBMS, INFM, SDEV};
enum ClassYear {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

struct NAME {
	string firstName;
	string middleInitial;
	string lastName;

};

struct STUDENT {

	NAME name;
	string ID;
	string email;
	int SSN;
	Program program;
	float GPA;
	ClassYear year;

};

bool validateNum(int& value)
{
    if (value >= 1 && (value % 1 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }


}


bool validateString(const std::string& s)
{
    for (const char c : s) {
        if (!isalpha(c) && !isspace(c))
            return false;
    }

    return true;
}

int main() {

	string first, middle, last;
	string ID, email;
	int gpa, SSN, x, y;
	Program program;
	ClassYear year;

	cout << "Enter first name: " << endl;
    cin >> first;
    while (!validateString(first))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter first name: " << endl;
        cin >> first;
    }


    cout << "Enter middle initial: " << endl;
    cin >> middle;
    while (!validateString(middle))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter middle initial: " << endl;
        cin >> middle;
    }

    cout << "Enter last name: " << endl;
    cin >> last;
    while (!validateString(last))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter last name: " << endl;
        cin >> last;
    }

    cout << "Enter ID: " << endl;
    cin >> ID;
    while (!validateString(ID))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter ID: " << endl;
        cin >> ID;
    }

    cout << "Enter email: " << endl;
    cin >> email;
    while (!validateString(email))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter email: " << endl;
        cin >> email;
    }

    cout << "Enter SSN: " << endl;
    cin >> SSN;
    while (!validateNum(SSN))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter SSN: " << endl;
        cin >> SSN;
    }

    cout << "Enter GPA: " << endl;
    cin >> gpa;
    while (!validateNum(gpa))
    {
        cout << "Invalid input. Please try again" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Enter GPA: " << endl;
        cin >> gpa;
    }

    cout << "Enter corresponding number to indicate program: (1)CSCI (2)DBMS (3)INFM (4)SDEV " << endl;
    cin >> x;

    cout << "Enter corresponding number to indicate class year: (1)Freshman (2)Sophomore (3)Junior (4)Senior " << endl;
    cin >> y;

    STUDENT student1;
    student1.name.firstName = first;
    student1.name.middleInitial = middle;
    student1.name.lastName = last;
    student1.ID = ID;
    student1.email = email;
    student1.SSN = SSN;
    student1.program = program;
    student1.GPA = gpa;
    student1.year = year;


}