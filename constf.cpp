#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
class shape{
    public:
        double base , height ;
        shape(double b , double h){
            base = b ;
            height = h ;
        }
        virtual double print() const = 0 ;
        double area() const{
            return base * height ;
        }
};

class rectangle : public shape{
    public:
        rectangle(double b , double h) : shape(b , h){}
        double print() const{
            cout << "rectangle : " << area() << endl ;
        }
};

class triangle : public shape{
    public:
        triangle(double b , double h) : shape(b , h){}
        double area() const{
            return 0.5 * base * height ;
        }
        double print() const{
            cout << "triangle : " << area() << endl ;
        }
};

int main(){
    rectangle r(10 , 20) ;
    triangle t(10 , 20) ;
    r.print() ;
    t.print() ;
}