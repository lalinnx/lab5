#include<iostream>
using namespace std;

int main(){

    int Even=0;
    int odd=0;
    int n=1;

    while (n != 0){
        cout << "Enter an integer: ";
        cin >> n;
        if(n != 0)
			if(n%2 == 0)
            	Even++;
        	else odd++;
	}
    cout << "#Even numbers = " << Even <<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
