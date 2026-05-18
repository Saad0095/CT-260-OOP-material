#include <iostream>
using namespace std;

class Student {
protected:
    int score;

public:
    Student(int s) : score(s) {}
    virtual void calculateGrade() = 0;
    virtual ~Student() {}
};

class ScienceStudent : public Student {
public:
    ScienceStudent(int s) : Student(s) {}

    void calculateGrade() {
        if (score > 70)
            cout << "Science Student: Pass" << endl;
        else
            cout << "Science Student: Fail" << endl;
    }
};

class ArtStudent : public Student {
public:
    ArtStudent(int s) : Student(s) {}

    void calculateGrade() {
        if (score > 50)
            cout << "Art Student: Pass" << endl;
        else
            cout << "Art Student: Fail" << endl;
    }
};

int main() {
    Student* s1 = new ScienceStudent(75);
    Student* s2 = new ArtStudent(45);
    s1->calculateGrade();
    s2->calculateGrade();
    delete s1;
    delete s2;
    return 0;
}