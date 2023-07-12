#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

class Base1{
    public:
        void display(){
            cout << "Base1\n" ;
        }
};

class Base2 : public Base1{
    public:
        void display(){
            cout << "Base2\n" ;
        }
};

class Derived : public Base2{
    public:
        void displays(){
            cout << "Derived\n" ;
        }
};

int main(){
    Derived dd ;
    dd.display() ;
    return 0 ;
}