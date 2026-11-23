#include <iostream>
using namespace std;
class shape{
    public:
    virtual function area()=0;
};
class circle:public shape{
    private:
    float radius;
    public:
    circle(float r)
    {
        radius=r;
    }
    float area()
{
    return 3.14*radius*radius;

}};
class rectangle:public shape{
    private:
    float length,breadth;
    public:
    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area(){
        return length* breadth;
    }

};
class triangle:public shape{
    private:
    float base,height;
    public:
    triangle(float b,float h)
    {
        base=b;
        height=h;
    }
    float area(){
        return 0.5*base*height;
    }
};

int main() {
   circle c(5);
   rectangle r(4,6);
   triangle t(10,8);
   shape*ptr;ptr
   ptr=&c;
   cout<<"area of circle:"<<ptr->area();
   ptr=&c;
   cout<<"area of rectangle:"<<ptr->area();
   ptr=&r;
   cout<<"area of triangle:"<<ptr->area();
   ptr=&t;
       return 0;
}