#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    int age;
    string institute;

public:
    Teacher() : name(""), age(0), institute("") {}

    Teacher(string n, int a, string i) : name(n), age(a), institute(i) {}

    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setInstitute(string i) {
        institute = i;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getInstitute() {
        return institute;
    }
};

class HumanitiesTeacher : public Teacher {
private:
    string department;
    string courseName;
    string designation;

public:
    HumanitiesTeacher() : Teacher(), department("Humanities"), courseName(""), designation("") {}

    HumanitiesTeacher(string n, int a, string i, string c, string d)
        : Teacher(n, a, i), department("Humanities"), courseName(c), designation(d) {}

    void setCourseName(string c) {
        courseName = c;
    }
    void setDesignation(string d) {
        designation = d;
    }
    void display() {
        cout << "\n-Humanities Teacher\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string department;
    string courseName;
    string designation;

public:
    ScienceTeacher() : Teacher(), department("Science"), courseName(""), designation("") {}

    ScienceTeacher(string n, int a, string i, string c, string d)
        : Teacher(n, a, i), department("Science"), courseName(c), designation(d) {}

    void setCourseName(string c) {
        courseName = c;
    }

    void setDesignation(string d) {
        designation = d;
    }

    void display() {
        cout << "\nScience Teacher\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

class MathsTeacher : public Teacher {
private:
    string department;
    string courseName;
    string designation;

public:
    MathsTeacher() : Teacher(), department("Maths"), courseName(""), designation("") {}

    MathsTeacher(string n, int a, string i, string c, string d)
        : Teacher(n, a, i), department("Maths"), courseName(c), designation(d) {}

    void setCourseName(string c) {
        courseName = c;
    }

    void setDesignation(string d) {
        designation = d;
    }

    void display() {
        cout << "\nMaths Teacher\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << courseName << endl;
        cout << "Designation: " << designation << endl;
    }
};

int main() {
    HumanitiesTeacher ht;
    ScienceTeacher st;
    MathsTeacher mt;

    string name, institute, course, designation;
    int age;

    cout << "Enter Humanities Teacher Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Institute: ";
    cin >> institute;
    cout << "Course Name: ";
    cin >> course;
    cout << "Designation: ";
    cin >> designation;

    ht.setName(name);
    ht.setAge(age);
    ht.setInstitute(institute);
    ht.setCourseName(course);
    ht.setDesignation(designation);

    cout << "\nEnter Science Teacher Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Institute: ";
    cin >> institute;
    cout << "Course Name: ";
    cin >> course;
    cout << "Designation: ";
    cin >> designation;
    st.setName(name);
    st.setAge(age);
    st.setInstitute(institute);
    st.setCourseName(course);
    st.setDesignation(designation);

    cout << "\nEnter Maths Teacher Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Institute: ";
    cin >> institute;
    cout << "Course Name: ";
    cin >> course;
    cout << "Designation: ";
    cin >> designation;
    mt.setName(name);
    mt.setAge(age);
    mt.setInstitute(institute);
    mt.setCourseName(course);
    mt.setDesignation(designation);

    ht.display();
    st.display();
    mt.display();
    return 0;
}