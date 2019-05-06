#include<iostream>

using namespace std;

int main() {

    int H,W;
    cin >> H >> W;
    
    int hh,ww;
    cin >> hh >> ww;

    cout << W*H - (W*hh + H*ww) + (ww*hh);
    
    return 0;

}