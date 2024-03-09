#include <iostream>
using namespace std;
int main(){
    int sonlar[10] = {1,2,3,4,5,6,7,8,9,10};
    int maximal = sonlar[0];
    for (int i=0; i<10; i++){
        if (sonlar[i] >maximal){
            maximal = sonlar[i];
        }
    }
    cout << "Maximal son - " << maximal;
}
