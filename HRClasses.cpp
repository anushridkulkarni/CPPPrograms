#include <iostream>
using namespace std;

/*

You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student.
Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard

Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,).
You can refer to stringstream for this.

*/

class Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
    int count;

public:
    string to_string();
    int get_age();
    void set_age(int a)
    {
        age = a;
    }

    string get_first_name();
    void set_first_name(string f)
    {
        first_name = f;
    }

    string get_last_name();
    void set_last_name(string l)
    {
        last_name = l;
    }

    int get_standard();
    void set_standard(int s)
    {
        standard = s;
    }
};

int Student::get_age()
{
    return age;
}
string Student::get_first_name()
{
    return first_name;
}
string Student::get_last_name()
{
    return last_name;
}
int Student::get_standard()
{
    return standard;
}
string Student::to_string()
{
    return first_name + "," + last_name + "," + std::to_string(age) + "," +std::to_string(standard);
}

main()
{
    Student x;
    string str="anushri";
    x.set_age(10);
    x.set_first_name("anushri");
    x.set_last_name("kulkarni");
    x.set_standard(10);

    cout<<"age is: "+ x.get_age();

   
   // cout<< x.to_string() << endl;

x.get_first_name();
x.get_age();
x.get_last_name();
x.get_standard();

cout<<"age is: "+ x.get_age();
}