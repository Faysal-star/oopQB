#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
typedef long long ll;

class DoubleArray{
    public:
        double *arr ;
        int size ;
        double avg ;
        DoubleArray(int s , double ar[]){
            size = s ;
            arr = new double[size] ;
            for(int i = 0 ; i < size ; i++){
                arr[i] = ar[i] ;
            }
        }

        DoubleArray(const DoubleArray &d){
            size = d.size ;
            avg = d.avg ;
            arr = new double[size] ;
            for(int i = 0 ; i < size ; i++){
                arr[i] = d.arr[i] ;
            }
        }

        void average(){
            double sum = 0 ;
            for(int i = 0 ; i < size ; i++){
                sum += arr[i] ;
            }
            avg = sum/size ;
        }


        ~DoubleArray(){
            delete [] arr ;
        }
        void print(){
            for(int i = 0 ; i < size ; i++){
                cout << arr[i] << " " ;
            }
            cout << endl ;
        }
};

int main(){
    double d[5] = {1.1 , 2.2 , 3.3 , 4.4 , 5.5} ;
    DoubleArray a(5 , d) ;
    a.print() ;
    a.average() ;
    cout << a.avg << endl ;
    DoubleArray b = a ;
    b.print() ;
    cout << b.avg << endl ;
}