#include<iostream>
using namespace std;
int main()
{
    int n, max=0;
    cout<<"Enter total number of elements: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x=0;
        cout<<"Enter number: ";
        cin>>x;
        if(x>max)
        {
            max=x;
        }
    }
    cout<<"Maximum number is: "<<max<<endl;
    return 0;
}