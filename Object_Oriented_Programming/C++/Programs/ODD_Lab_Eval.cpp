#include<iostream>
using namespace std;
class Purchase
{
   string username;
   int no_items_purchased;
   int purchased_amount;
   static int count;
   static int hulu;

   public:
   void setData()
   {
      cout<<"Customer "<<count+1<<": ";
      cin>>username;
      cout<<"No. of items purchased: ";
      cin>>no_items_purchased;
      cout<<"Purchased amount: ";
      cin>>purchased_amount;
      count ++;
   }
   void display();
   int sum_items()
   {
      return no_items_purchased;
   }
   int sum_amount()
   {
      return purchased_amount;
   }
};
 void Purchase::display(void)
    {
      cout<<"Customer "<<hulu+1<<":"<<username<< endl
      <<"No. of items purchased: "<<no_items_purchased<<endl
      <<"Purchased amount: "<<purchased_amount<<endl;
      hulu++;
    }
int Purchase::count;
int Purchase::hulu;
int main()
{
   int n;
   static int total_items;
   static int total_amount;
   cout<<"Enter the number of Customers"<<endl;
   cin>>n;
   Purchase customer[n];
   for(int i = 0 ; i < n ; i++)
   {
      customer[i].setData();
   }
   for(int j = 0 ; j < n ; j ++)
   {
      customer[j].display();
   }
   for(int k = 0 ; k < n ; k++)
   {
      total_amount += customer[k].sum_amount();
   }
   for(int l = 0 ; l < n ; l++)
   {
      total_items += customer[l].sum_items();
   }
   cout<<"Total amount received : "<<total_amount<<endl;
   cout<<"Total number of items purchased : "<<total_items<<endl;
   return 0;
}