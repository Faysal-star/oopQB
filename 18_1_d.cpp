#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

class cnst{
    public:
        int a ;
        cnst(int x){
            a = x ;
        }
        void print() const{
            cout << a+1 << endl ;
        }
        void print(){
            cout << a << endl ;
        }
};

int main(){
    cnst c(10) ;
    c.print() ;
    const cnst cc(20) ;
    cc.print() ;
}