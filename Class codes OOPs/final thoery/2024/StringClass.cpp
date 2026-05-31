#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char* str;
    int length;

public:

    String(const char* msg="")
    {
        length = strlen(msg);

        str = new char[length+1];

        strcpy(str,msg);
    }

    String(const String& other)
    {
        length = other.length;

        str = new char[length+1];

        strcpy(str,other.str);
    }

    ~String()
    {
        delete[] str;
    }

    char getCharAt(int index)
    {
        if(index<0 || index>=length)
            throw out_of_range("Index out of range");

        return str[index];
    }

    String operator+(const String& other)
    {
        String result;
        result.length = length + other.length + 1;
        result.str = new char[length + other.length + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    bool operator==(const String& other)
    {
        return strcmp(str,other.str)==0;
    }

    void display()
    {
        cout<<str<<endl;
    }
};

int main()
{
    try
    {
        String s1("Object ");
        String s2("Oriented");

        String s3 = s1 + s2;

        s3.display();

        cout<<s3.getCharAt(2)<<endl;

        if(s1==s2)
            cout<<"Equal"<<endl;
        else
            cout<<"Not Equal"<<endl;
    }
    catch(exception& e)
    {
        cout<<e.what()<<endl;
    }

    return 0;
}