#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
class lsb_less{
    public:
    bool operator()(int a, int b){
        return (a%10) < (b%10) ;
    }
};
int main(){
    set<int , lsb_less> s = {21,23,26,28,30} ;

    set<int , lsb_less>::iterator it1 , it2 ;
    for(auto x : s) cout << x << " " ;
    cout << endl ;
    it1 = find(s.begin() , s.end() , 36) ;
    cout << *it1 << endl ;
    it2 = s.find(36) ;
    cout << *it2 << endl ;

    cout << distance(s.begin() , it1) << endl ;
    cout << distance(s.begin() , it2) << endl ;
    cout << *s.end() << endl ;
}