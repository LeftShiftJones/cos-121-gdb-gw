#include <iostream>

using namespace std;

int main() {
    int n = 0;

    while(cin) {

        cin>>n;

        if(n % 2 == 0) {

            cout << "Number is even, subtracting 1 to make odd." << endl;
            n -= 1;

        }

        for(int i=1; i<=n; i+=2) {

            int num_spaces = (n-i)/2;

            for(int j=0; j<num_spaces; j++) {

                cout << " ";

            }

            for(int j=0; j<i; j++) {

                cout << "*";

            }

            cout << endl;
        }

        for(int i=(n-2); i>=1; i-=2) {

            int num_spaces = (n-i)/2;

            for(int j=0; j<num_spaces; j++) {

                cout << " ";

            }

            for(int j=0; j<i; j++) {

                cout << "*";

            }

            cout << endl;
        }
    }

    return 0;
}
