#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

class ini_list{
public:
    int a , b , c ;
    double d ;
    // ini_list(int a , int b , int c , double d):a(a) , b(b) , c(c) , d(d){}
    void print(){
        cout << a << " " << b << " " << c << " " << d << endl ;
    }
};

int main(){
    // ini_list i(1 , 2 , 3 , 4.5) ;
    ini_list i = {1 , 2 , 3 , 4.5} ;
    i.print() ;
    
}
 