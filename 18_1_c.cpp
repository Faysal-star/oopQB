#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;


// class DM{
//     public:
//         int m , cm ;
//         DM(int m , int cm){
//             this->m = m ;
//             this->cm = cm ;
//         }
//         void print(){
//             cout << m << " " << cm << endl ;
//         }
//         DM operator+(DM d){
//             int m = this->m + d.m ;
//             int cm = this->cm + d.cm ;
//             if(cm >= 100){
//                 m += cm / 100 ;
//                 cm %= 100 ;
//             }
//             return DM(m , cm) ;
//         }
// };

// class DB{
//     public:
//         int ft , in ;
//         DB(int ft , int in){
//             this->ft = ft ;
//             this->in = in ;
//         }
//         void print(){
//             cout << ft << " " << in << endl ;
//         }
//         operator DM(){
//             int m = ft * 0.3048 ;
//             int cm = in * 2.54 ;
//             if(cm >= 100){
//                 m += cm / 100 ;
//                 cm %= 100 ;
//             }
//             return DM(m , cm) ;
//         }
// };

class DB ;
class DM{
    public:
        int m ;
        float cm ;
        DM(int m , float cm){
            this->m = m ;
            this->cm = cm ;
        }
        void print(){
            cout << m << " " << cm << endl ;
        }
        friend DM operator+(DM d , DB b) ;
};
class DB{
    public:
        int ft;
        float in ;
        DB(int ft , float in){
            this->ft = ft ;
            this->in = in ;
        }
        void print(){
            cout << ft << " " << in << endl ;
        }
        friend DM operator+(DM d , DB b){
            int m = d.m ;
            float cm = d.cm + (b.ft*12+b.in)/0.39;
            if(cm >= 100){
                m += cm / 100 ;
                cm = cm - int(cm/100)*100 ;
            }
            return DM(m , cm) ;
        }
};

int main(){
    DM d(1 , 90) ;
    DB b(5 , 10) ;
    DM d1 = d + b ;
    d1.print() ;
    
}