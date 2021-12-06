#include "iostream"

using namespace std;
bool find_num(int sought, int number){
    
    bool resp;
    
    if (number < 10){
        resp = number == sought;
    } else if (number >= 10 && number < 100){
        
        int d1{0}, d2{0};
        d1 = number / 10;
        d2 = number % 10;
        
        resp = d1 == sought || d2 == sought;
        
    } else if (number >= 100 && number < 1000){
        int d1{0}, d2{0}, d3{0};
        d1 = number / 100;
        d2 = number % 100;
        d3 = d2 % 10;
        
        resp = d1 == sought || d2 == sought || d3 == sought;
        
    } else if (number >= 1000 && number < 10000){
        int d1{0}, d2{0}, d3{0}, d4{0};
        
        d1 = number / 1000;
        d2 = number % 1000;
        d3 = d2 % 100;
        d4 = d3 % 10;
        
        resp = d1 == sought || d2 == sought || d3 == sought || d3 == sought;
    }
    
    return resp;
}

int main(){
    
    int counter{0};
    
    for(int i = 1; i <=1000; i++ ){
        
        if (find_num(3, i)){
            ++counter;
        }
        
    }
    
    cout << "Чесло 3 содержит "s << counter << " чисел"s << endl;
    return 0;
}
