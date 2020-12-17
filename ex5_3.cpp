#include <iostream>
using namespace std;

int cheetah(int money){
    int n=money/10;
    int sum=n;
    int z=0;

    while(n>=3){
        z=n%3;
        n+=z;
        n=n/3;
        sum+=n;
    }
    return sum;
}

int main(){
	int x;
    cout << "money";
    cin >> x;
    cout << cheetah(x);

    return 0;
}