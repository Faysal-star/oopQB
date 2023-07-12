#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
};

class B:public virtual A
{
};

class C:public virtual A
{
public:
    int c;
};

class D:public virtual A
{
};

class E:public B
{

};


class F: public B,public virtual C
{
public:
};


class G : public virtual C,public D
{
public:
    int g;
};


class H : public E,public F
{
public:
    int h;
};


class I : public F,public G
{
public:
    int i;
};


class J : public H,public I
{
public:
    int j;
};



int main()
{
    J x;
    I y;
    x.a=9;
    y.c=0;

    cout << x.a << endl;
    cout << y.c << endl;

    return 0;
}