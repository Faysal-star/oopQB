#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

template <typename T>
void print(vector<T> V){
    for_each(V.begin() , V.end() , [](T i){ cout << i << " " ; }) ;
}

int main(){
    // auto sq = [](int i){ return i*i ; } ;
    // cout << sq(5) << endl ;
    // cout << sq(6) << endl ;
    // vector<float> v = {1,12.5,3,4,5} ;
    // print(v) ;
    // for_each(v.begin() , v.end() , [](int i){ cout << i << " " ; }) ;
    // cout << endl ;
    // vector<int>:: iterator it = find_if(v.begin() , v.end() , [](int i){ return i%2==0 ; }) ;
    // cout << it-v.begin() << endl ;

    // set<int> s = {1,2,3,3,4,5,6,7,8,9} ;
    // set<int>::iterator it1 = find_if(s.begin() , s.end() , [](int i){ return i%5==0 ; }) ;
    // cout << distance(s.begin() , it1) << endl ;
    vector<int> myVector = {1, 2, 3, 2, 4, 5, 2};
    print(myVector) ;
    cout << endl ;
    auto newEnd = remove(myVector.begin(), myVector.end(), 2);
    // myVector.erase(newEnd, myVector.end());
    print(myVector) ;

}