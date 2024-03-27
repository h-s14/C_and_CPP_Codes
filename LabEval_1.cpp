#include <iostream>
using namespace std;

int main() {
	    int n,k,iterator_1,iterator_2,iterator_3,var_1,var_2=0,var_3;
    cin>>n>>k;
    int Harry[n][n][n];
    for(iterator_1=0;iterator_1<n;iterator_1++)
    {
        for(iterator_2=0;iterator_2<n;iterator_2++)
        {
            for(iterator_3=0;iterator_3<n;iterator_3++)
            {
                cin>>Harry[iterator_1][iterator_2][iterator_3];
            }
        }
    }
    for(var_1=0;var_1<k;var_1++)
    {
        var_3=Harry[0][0][0];
        
        for(iterator_2=0;iterator_2<n;iterator_2++)
        {
        if(iterator_2%2==0)
        {
            
            for(iterator_1=0;iterator_1<n;iterator_1++)
            {
                var_2=Harry[iterator_1][iterator_2][iterator_1];
            Harry[iterator_1][iterator_2][iterator_1]=var_3;
            var_3=var_2;
            }
            
            
        }
        else
        {
            for(iterator_1=n-1;iterator_1>=0;iterator_1--)
            {
              var_2=Harry[iterator_1][iterator_2][iterator_1];  
            Harry[iterator_1][iterator_2][iterator_1]=var_3;
            var_3=var_2;
            }
        }
        }
        Harry[0][0][0]=var_3;
        
        
        
        
        var_3=Harry[n-1][0][0];
        
        for(iterator_2=0;iterator_2<n;iterator_2++)
        {
        if(iterator_2%2==1)
        {
            
            for(iterator_1=0;iterator_1<n;iterator_1++)
            {
                var_2=Harry[iterator_1][iterator_2][n-1-iterator_1];
            Harry[iterator_1][iterator_2][n-1-iterator_1]=var_3;
            var_3=var_2;
            }
            
            
        }
        else
        {
            for(iterator_1=n-1;iterator_1>=0;iterator_1--)
            {
                var_2=Harry[iterator_1][iterator_2][n-iterator_1-1];
            Harry[iterator_1][iterator_2][n-1-iterator_1]=var_3;
            var_3=var_2;
            }
        }
        }
        Harry[n-1][0][0]=var_3;
    }
    
    for(iterator_1=0;iterator_1<n;iterator_1++)
    {
        for(iterator_2=0;iterator_2<n;iterator_2++)
        {
            for(iterator_3=0;iterator_3<n;iterator_3++)
            {
                cout<<Harry[iterator_1][iterator_2][iterator_3]<< " ";
            }
        }
    }
	return 0;
}
