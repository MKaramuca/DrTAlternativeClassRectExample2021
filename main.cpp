//teahcing students an  alternative method for class declaration in c++ I.E. to the scope resolution operator method per Gaddis (2019)

#include <iostream>
using namespace std;

//class declarations
class Rectangle
{
  private:
    double width;
    double length;
  public: //function definitions and other member functions
    //default constructor - gives initial values ot private member variables
    Rectangle()
    {
      //called when the class is declared "Rectangle r" in int main()
      cout << "\nDefault constructor called" << endl;
      width = 0.0;
      length = 0.0;
    }
    //paramterized constructor
    Rectangle(double w, double l)
    {
      //Rectangle rect(5.2, 2.7) in int main()
      width = w;
      length = l;
      cout << "\n Parameterized constructor was called " << endl;
    }
    void setWidth(double w){
      width = w;
    }
    void setLength(double l){
      length = l;
    }
    double getWidth() const {
      return width;
    }
    double getLength() const {
      return length;
    }
    double getArea () const {
      return width * length;
    }
  

};

int main() {
  std::cout << "Hello World!\n";

return 0;
}