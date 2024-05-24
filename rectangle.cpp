#include<iostream>
using namespace std;
class Rectangle
{
    double width, lenght;
    //calculate perimeter and area
    public:
    void Perimeter(){
        double p = (width + lenght)*2;
        cout<<"Perimeter: "<<p<<endl;
    }
    void Area(){
        double a = width*lenght;
        cout<<"Area: "<<a<<endl;
    }
    void input(){
        cout<<"Input width: "; cin>>width;
        cout<<"Input length: "; cin>>lenght;
    }
    Rectangle(double w, double l){
        width = w;
        lenght = l;
    }
    ~Rectangle(){
        //destroy member variables
        //mostly pointers
    }
};
int main(){
    Rectangle r={25, 20};
    //r.input();
    r.Perimeter();
    r.Area();
    int*ptr = new int(9);//allocate memory
    cout<<ptr<<endl;
    delete ptr;
    return 0;
}
