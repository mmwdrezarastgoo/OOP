#include <iostream>   
 
 
using namespace std;   
 
 
template<typename T>   
class parent { 
protected: 
    virtual T Add(T a, T b) {  
        return a + b; 
    } 
}; 
 
class child : public parent<int> {  
public: 
    int Add(int a, int b) override {  
         
        int c = parent<int>::Add(5, 10); 
 
        return c + 20; 
    } 
}; 
 
int main() { 
    child obj; 
 
    cout << obj.Add(1, 2) << endl; 
}