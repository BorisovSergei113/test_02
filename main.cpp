#include <iostream>
#include <sstream>
using namespace std;

int main() {
    unsigned int length =0;
    
    string str;
    getline(cin,str);
    istringstream stream1(str);
    if(!(stream1>>length)){
        cout<<"An error has occuried while reading input data."<<endl;
        exit(0);
    }
    
    int *mas=new int [length];
    
    string mas_str;
    getline(cin,mas_str);
    istringstream stream (mas_str);
    for(int i=0;i<length;i++){
        if(!(stream>>mas[i])){
            cout<<"An error has occuried while reading input data."<<endl;
            exit(0);
        }
    }

    for (int i  = 0; i < length / 2; i++)
        swap(mas[i], mas[length - i - 1]);
    
    for(int i=0;i<length;i++){
        cout<<mas[i]<<" ";
    }
    
    cout<<endl;
    delete [] mas;
    return 0;
}
