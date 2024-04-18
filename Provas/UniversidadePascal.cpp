#include <iostream>

using namespace std;

int main() {
    while (true){
        int n, d;
        cin >> n >> d;

        if(n == 0 && d == 0){
            break;
        }

        bool participou_alguem_todos = false;

        for(int j = 0; j < n; j++) {
            bool participou_todos = true;
            for(int i = 0; i < d; i++) {
                int presenca;
                cin >> presenca;
                if(presenca == 0) {
                    participou_todos = false;
                }
            }
            if(participou_todos) {
                participou_alguem_todos = true;
            }
        }

        if(participou_alguem_todos) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }    
    return 0;
}