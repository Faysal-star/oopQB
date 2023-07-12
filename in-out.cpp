#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
int main(){
    int total = 0; 
    string item ;
    int price ;
    ifstream in("in.txt") ;
    ofstream out("out.txt") ;
    while(in >> item >> price){
        total += price ;
    }
    out << "Total : " << total << endl ;
}