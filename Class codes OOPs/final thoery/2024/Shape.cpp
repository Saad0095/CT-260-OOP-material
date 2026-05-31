#include<iostream>
using namespace std;

class Shape
{
protected:
    static int counter;
    int id;

public:
    Shape()
    {
        id = ++counter;
    }

    virtual void draw()
    {
        cout<<"Drawing a shape"<<endl;
    }
};

int Shape::counter = 0;

class ColoredShape : virtual public Shape
{
protected:
    string color;

public:
    ColoredShape(string c)
    {
        color = c;
    }

    void draw()
    {
        cout<<"Drawing a colored shape"<<endl;
    }
};

class TexturedShape : virtual public Shape
{
protected:
    string texture;

public:
    TexturedShape(string t)
    {
        texture = t;
    }

    void draw()
    {
        cout<<"Drawing a textured shape"<<endl;
    }
};

class ColoredTexturedShape :
        public ColoredShape,
        public TexturedShape
{
public:
    ColoredTexturedShape(string c,string t)
    : Shape(),
      ColoredShape(c),
      TexturedShape(t)
    {
    }

    void draw()
    {
        cout<<"Drawing a colored and textured shape"<<endl;
    }
};

int main()
{
    Shape s;
    ColoredShape cs("Red");
    TexturedShape ts("Wood");
    ColoredTexturedShape cts("Blue","Stone");

    s.draw();
    cs.draw();
    ts.draw();
    cts.draw();

    return 0;
}