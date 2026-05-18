#include <iostream>
#include <fstream>
using namespace std;

class Participant {
private:
    int id;
    char name[50];
    float score;

public:

    void Input() {

        ofstream fout("participant.dat", ios::app | ios::binary);

        cout << "Enter ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Name: ";
        cin.getline(name, 50);

        cout << "Enter Score: ";
        cin >> score;

        fout.write((char*)this, sizeof(*this));

        fout.close();
    }

    void display() {
        cout << "\nID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }

    static void Output() {

        ifstream fin("participant.dat", ios::binary);

        int searchID;

        cout << "Enter ID to search: ";
        cin >> searchID;

        Participant p;

        bool found = false;

        while (fin.read((char*)&p, sizeof(p))) {

            if (p.id == searchID) {
                p.display();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Record not found!" << endl;
        }

        fin.close();
    }

    static void Max() {

        ifstream fin("participant.dat", ios::binary);

        Participant p;
        Participant maxParticipant;

        bool first = true;

        while (fin.read((char*)&p, sizeof(p))) {

            if (first || p.score > maxParticipant.score) {
                maxParticipant = p;
                first = false;
            }
        }

        cout << "\nParticipant with Highest Score:\n";

        maxParticipant.display();

        fin.close();
    }
};

int main() {

    int choice;

    do {
        cout << "\n1. Add Participant";
        cout << "\n2. Search by ID";
        cout << "\n3. Highest Score";
        cout << "\n4. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        Participant p;

        switch (choice) {

        case 1:
            p.Input();
            break;

        case 2:
            Participant::Output();
            break;

        case 3:
            Participant::Max();
            break;

        case 4:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 4);

    return 0;
}