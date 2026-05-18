#include<iostream>
using namespace std;

class Weapons {
    private:
    public:
        void weaponsDescritpion(){
            cout<< "There are many Weapons" << endl;
        }
};
    
class HotWeapons: public Weapons {
    private:
    public:
        void hotWeaponsDescritpion(){
            cout<< "Hot weapons uses gunpowder, or explode" << endl;
        }
};

class Bombs: public HotWeapons {
    private:
    public:
        void bombsDescritpion(){
            cout<< "Bombs  blow  up" << endl;
        }
};

class NuclearBombs: public Bombs {
    private:
    public:
        void nuclearBombsDescritpion(){
            cout<< "Nuclear bombs blow up, and use nuclear fission and fusion" << endl;
        }
};

int main(){
    Weapons w1;
    HotWeapons hw1;
    Bombs b1;
    NuclearBombs nb1;

    w1.weaponsDescritpion();
    hw1.hotWeaponsDescritpion();
    b1.bombsDescritpion();
    nb1.nuclearBombsDescritpion();
    return 0;
}