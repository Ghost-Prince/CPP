#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=3; i<=n; i++)
    {
        int div;
        for(div=2; div<i; div++)
        {
            if(i%div==0)
            {
                break;
            }
            if(div==i-1)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}