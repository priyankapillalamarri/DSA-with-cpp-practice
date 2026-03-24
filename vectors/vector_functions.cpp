#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec;

    cout<<"size = "<<vec.size()<<endl;

    vec.push_back(37);
    vec.push_back(25);
    vec.push_back(62);
   
    cout<<"after push size = "<<vec.size()<<endl;
    
    vec.pop_back();
    cout<<"after pop size = "<<vec.size()<<endl;

    cout<<"first element: "<<vec.front()<<endl;
    cout<<"last element: "<<vec.back()<<endl;     
    cout<<"the element at index 1: "<<vec.at(1)<<endl;
   return 0;
}