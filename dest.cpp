#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
class test{
    public:
        test(){
            cout << "c\n" ;
        }
        ~test(){
            cout << "o\n" ;
        }
        void print(){
            cout << "p\n" ;
        }
};
int main(){
    test t = test() ;
    t.print() ;
    // test() ;
    // t.~test() ;
}