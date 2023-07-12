#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

class Complex{
    public:
        int real , img ;
        Complex(int r = 0 , int i = 0){
            real = r ;
            img = i ;
        }
        Complex operator + (Complex const &obj){
            Complex res ;
            res.real = real + obj.real ;
            res.img = img + obj.img ;
            return res ;
        }
        Complex operator - (Complex const &obj){
            Complex res ;
            res.real = real - obj.real ;
            res.img = img - obj.img ;
            return res ;
        }
        friend ifstream & operator >> (ifstream &in , Complex &c){
            char ch ;
            in >> c.real >> ch >> c.img >> ch;
            return in ;
        }
        friend ofstream & operator << (ofstream &out , Complex &c){
            out << c.real << "+" << c.img << "i " ;
            return out ;
        }

        void print(){
            cout << real << "+" << img <<"i ";
        }
};

int main(){
    ifstream in("in.txt") ;
    ofstream out("out.txt") ;

    Complex c1 , c2 , c3 ;
    char op ;
    while(in >> c1){
        in >> op ;
        in >> c2 ;
        if(op == '+'){
            c3 = c1 + c2 ;
        }
        else if(op == '-'){
            c3 = c1 - c2 ;
        }
        out << c1;
        out << op ;
        out << c2 ;
        out << "=" ;
        out << c3 ;
        out << endl ;
    }

}