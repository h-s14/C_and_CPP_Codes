#include<iostream>
using namespace std;
class complex
{
    public:
    float real,img;

    void setComplex(float,float)
    {
        cin>>real>>img;
    }
    void displayComplex()
    {
        cout<<real<<" i "<<img<<endl;
    }
    complex sum(complex c1)
    {
        complex res;
        res.real = c1.real + real;
        res.img = c1.img + img;
        cout<<res.real<<" i "<<res.img<<endl;
        return res;
    }
};
int main()
{
    complex c[2];
    float a,b;
    int i , j ;
    for(i = 0 ; i < 2 ; i++)
    {
        c[i].setComplex(a,b);
    }
    for(j = 0 ; j < 2 ; j++)
    {
        c[j].displayComplex();
    }
    c[0].sum(c[1]);
    return 0;
}