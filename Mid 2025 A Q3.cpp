class Counter {
private:
    static int count;

public:
    Counter() { count++; }
    ~Counter() { count--; }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter a, b;
    cout << Counter::getCount() << endl; // 2

    {
        Counter c;
        cout << Counter::getCount() << endl; // 3
    }

    cout << Counter::getCount() << endl; // 2
}