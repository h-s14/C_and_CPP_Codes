#include<iostream>
using namespace std;
class complex
    {
        float real,img;
        public:
        void get_data()
        {
            cout<<"Enter The Real Part :"<<endl;
            cin>>real;
            cout<<"Enter The Img Part :"<<endl;
            cin>>img;
        }
        complex sum(complex c1)
        {
            complex sum;
            sum.real =  c1.real + real ;
            sum.img = c1.img + img;
            cout<<sum.real<<"+i"<<sum.img<<endl;
            return sum;
        }
    };
int main()
{
    complex c1,c2;
    c1.get_data();
    c2.get_data();
    c1.sum(c2);
    return 0;
}