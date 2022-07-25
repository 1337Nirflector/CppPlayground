#include <iostream>
using namespace std;

class TicketOffice {

    int calc() {
        int ages[5];

        for (int i = 0; i < 5; ++i) {
            cin >> ages[i];
        }
        float m;
        float p;
        m = ages[0];
        for (int x = 1; x < 5; ++x) {
            if ( m > ages[x]) {
                m = ages[x];
            }
        }
        p = 50 - (50*m/100);
        cout << p << endl;


        return 0;
    }
};