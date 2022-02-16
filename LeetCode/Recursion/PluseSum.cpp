//PlusSum
#include <iostream>
#include <vector>
using namespace std;
class twosum{
public:
    int nonrecursion(vector <int>& v){
        int sum = 0;
        for(int i=0; i<v.size(); i++)
            sum+=v[i];
        return sum;
    }
    int recursion(vector <int>& v){
        int sum=0;
        if(v.empty())
            return 0;
        else{
            sum=v[v.size()-1];
            v.pop_back();
            return sum+=recursion(v);
        }
            
    }
};

int main(){
    twosum Sum;
    vector<int> V;
    int size=5;
    cout<<"Input size value:";
    cin >> size;

    //assign value
    for(int i=1;i<size+1;i++)
        V.push_back(i); 
    //non recursion
    cout<<Sum.nonrecursion(V)<<endl;
    //recursion
    cout<<Sum.recursion(V);
    return 0;
}