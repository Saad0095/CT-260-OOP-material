class Fraction {
private:
    int num, den;

public:
    Fraction() {
        num = 1;
        den = 1;
    }

    void setNum(int n) { num = n; }
    void setDen(int d) { den = d; }

    int getNum() { return num; }
    int getDen() { return den; }

    int operator<(Fraction f2) {
        int lhs = num * f2.den;
        int rhs = f2.num * den;

        if (lhs < rhs) return -1;
        else if (lhs == rhs) return 0;
        else return 1;
    }
};