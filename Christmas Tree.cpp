// Christmas Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    ///////Task 1
    int qnt, l, k = 1;
    cin >> qnt;
    cin >> l;
    for (int i = 0; i < qnt; i++) {
        for (int j = 0; j < l; j++) {
            cout << "*";
        }
        cout << endl;
        for (int n = 0; n < k; n++) {
            cout << " ";
        }
        k++;
    }

    
    
    
    
    ////////Task 2
    int steps, counter = 0;
    cin >> steps;
    for (int i = 0; i < steps; i++) {
        for (int j = 0; j < counter; j++) {
            cout << " ";
        }
        cout << "***" << endl;
        for (int j = 0; j < counter; j++) {
            cout << " ";
        }
        cout << "  *" << endl;
        for (int j = 0; j < counter; j++) {
            cout << " ";
        }
        cout << "  *" << endl;
        counter += 2;
    }
    
    
    
    
    //////Task 3
    int n, h, quantity, c = 2, d = 0;
    int a = 1;
    int b = 0;
    cin >> h;
    cin >> quantity;
    for (int i = 0; i < quantity; i++) {
        n = h + quantity - c;
        a += d;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < n - b; j++) {
                cout << " ";
            }
            for (int k = 0; k < a; k++) {
                cout << "*";
            }
            a += 2;
            b += 1;
            cout << endl;
        }
        c += 1;
        a = 1;
        b = 0;
        d += 2;
    }
    for (int j = 0; j < 3; j++) {
        n = h + quantity - 4;
        for (int k = 0; k < n; k++) {
            cout << " ";
        }
        for (int i = 0; i < 5; i++) {
            cout << "*";
        }
        cout << endl;
    }
}