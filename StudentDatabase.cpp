#include <iostream>
using namespace std;

// Assignmnt for Student database
// This program accepts the Student data and stires it into an array of Student objects
// It uses a static methiod count to keep of the count of students

class student
{
private:
    string name;
    int roll_no;
    int class_name;
    char division;
    string date_of_birth;
    string adhar_no;
    string blood_group;
    string address;
    string telephone_no;
    static int Count;

public:
    static int getCount()
    {
        return Count;
    }

    void getdata();
    void putdata()
    {
        cout << "roll_no is " << roll_no << " ";
        cout << "class_name is " << class_name << " ";
        cout << "name is " << name << " ";
        cout << "dob is " << date_of_birth << " ";
        cout << "address is " << address << " ";
        cout << "blood grp is " << blood_group << " ";
        cout << "adhar no " << adhar_no << " ";
        cout << "telephone no is " << telephone_no << " ";
        cout << "division is " << division << "\n";
        cout << "----------------------------" << "\n";
    }
};
void student::getdata()
{
    cout << "enter roll no " << "\n";
    cin >> roll_no;

    cout << "enter name " << "\n";
    cin >> name;

    cout << "enter class_name " << "\n";
    cin >> class_name;

    cout << "enter dob " << "\n";
    cin >> date_of_birth;

    cout << "enter address " << "\n";
    cin >> address;

    cout << "enter blood_group " << "\n";
    cin >> blood_group;

    cout << "enter adhar no " << "\n";
    cin >> adhar_no;

    cout << "enter telephone no " << "\n";
    cin >> telephone_no;

    cout << "enter division " << "\n";
    cin >> division;
    Count++;
}

int student::Count;

main()
{
    student list[4];

    cout << " enter data for 4 students" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter data for Student No " << i << endl;
        list[i].getdata();
    }

    for (int i = 0; i < 4; i++)
        list[i].putdata();

    cout << " Count = " << student::getCount();
}
