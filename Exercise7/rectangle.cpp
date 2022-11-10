#include <iostream>

using namespace std;

class Rectangle{
    private:
        float length;
        float width;
    public:

        void setlength(float l){
            length = l;
        }

        void setwidth(float w){
            width = w;
        }

        float perimeter(){
            return 2 * length + 2 * width;
        }

        float area(){
            return length * width;
        }

        void show(){
            cout << "length: " << length << endl;
            cout << "width: " << width << endl;
        } 

        int sameArea(Rectangle rect){
            if(this->area() == rect.area()){
                return 1;
            }else{
                return 0;
            }
        }
};

int main(){
    Rectangle rect1;
    Rectangle rect2;

    rect1.setlength(5);
    rect1.setwidth(2.5);

    rect2.setlength(5);
    rect2.setwidth(18.9);

    rect1.show();
    rect2.show();

    cout << "Rectangle1 area: " << rect1.area() << endl;
    cout << "Rectangle1 perimeter: " << rect1.perimeter() << endl;

    cout << "Rectangle2 area: " << rect1.area() << endl;
    cout << "Rectangle2 perimeter: " << rect1.perimeter() << endl;

    cout << "Are the areas equal? " << ((rect1.sameArea(rect2) == 1) ? "True" : "False") << endl;

    rect1.setlength(15);
    rect1.setwidth(6.3);

    rect1.show();
    rect2.show();

    cout << "Rectangle1 area: " << rect1.area() << endl;
    cout << "Rectangle1 perimeter: " << rect1.perimeter() << endl;

    cout << "Rectangle2 area: " << rect1.area() << endl;
    cout << "Rectangle2 perimeter: " << rect1.perimeter() << endl;

    cout << "Are the areas equal? " << ((rect1.sameArea(rect2) == 1) ? "True" : "False") << endl;

    return 0;
}

//OUTPUT
// length: 5
// width: 2.5
// length: 5
// width: 18.9
// Rectangle1 area: 12.5
// Rectangle1 perimeter: 15
// Rectangle2 area: 12.5
// Rectangle2 perimeter: 15
// Are the areas equal? False
// length: 15
// width: 6.3
// length: 5
// width: 18.9
// Rectangle1 area: 94.5
// Rectangle1 perimeter: 42.6
// Rectangle2 area: 94.5
// Rectangle2 perimeter: 42.6
// Are the areas equal? True