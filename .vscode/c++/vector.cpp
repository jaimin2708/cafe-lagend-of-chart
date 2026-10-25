#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<v1.size()<<endl;

    int i=0;
    int x;
    cout<<"Enter the five number"<<endl;
    for(i;i<5;i++)
    {
       cin>>x;
       v1.push_back(x);
    }
    // v1.push_back(4.3);
         cout<<"After the giving value the size:"<<v1.size()<<endl;
     for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator itr = v1.begin();
    itr = itr + 3;
    v1.insert(itr,2,9);
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.erase(v1.begin()+2,v1.begin()+4);
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";;
    }
    cout<<endl;
    v1.clear();
    cout<<v1.size()<<endl;
    return 0;
}
