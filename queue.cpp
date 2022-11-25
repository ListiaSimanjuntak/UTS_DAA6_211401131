#include <iostream>
#include <queue>

using namespace std;

int main(){
queue<int> antrian;

    antrian.push(1);
    antrian.push(2);
    antrian.push(3);
    antrian.push(4);
    antrian.pop();

    cout << "Jumlah data : " << antrian.size();
    cout << endl;
    
    cout << "Data pertama : ";
    cout << antrian.front() << endl;

    cout << "Data terakhir : ";
    cout << antrian.back() << endl;

    return 0;
}