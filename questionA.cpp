#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int i, sum = 0;
    const int size = 8;
    int ini_arr[size];
    vector<int> v(size);
    int insertion_sort(vector<int> & v);

    ifstream inFile("file.in", ios::in);
    if(!inFile){
        cerr<<"Failed opening."<<"\n";
    }

    for(i=0;i<size;i++){
        inFile>>ini_arr[i];
    }
    for(i=0;i<size;i++){
        v.at(i) = ini_arr[i];
    }

    cout<<insertion_sort( v)<<"\n";

    return 0;
}

int insertion_sort(vector<int> & v){
    int i, next, insert, moveltem, sum = 0;
    const int size = 8;
    for(next=1;next<size;next++){
        insert = v.at(next);
        moveltem = next;
        while(moveltem>0 && v.at(moveltem-1)<insert){
            v.at(moveltem) = v.at(moveltem-1);
            --moveltem;
        }
        v.at(moveltem) = insert;
    }

    for(i=0;i<5;i++){
        sum += v.at(i);
    }
    return sum;
}

