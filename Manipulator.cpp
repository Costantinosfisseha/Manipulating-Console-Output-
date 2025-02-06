#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int id1 = 1, id2 = 2, id3 = 3;
    string name1 = "Alice", name2 = "Bob", name3 = "Charlie";
    double balance1 = 1000.00, balance2 = 530.25, balance3 = 2040.50;

    // display title and centered 
    cout << setw(23) << "Daily Report" << endl;
    cout << string(33, '-') << endl;

    cout << left << setw(10) << "ID" << setw(15) << "Name" << setw(10) << "Balance" << endl;
    cout << string(33, '-') << endl;

    cout << setw(10) << right << setw(5) << id1 
         << left << setw(15) << name1 << "$" << setw(8) << fixed << setprecision(2) << balance1 << endl;
    
    cout << setw(10) << right << setw(5) << id2 
         << left << setw(15) << name2 << "$" << setw(8) << fixed << setprecision(2) << balance2 << endl;
    
    cout << setw(10) << right << setw(5) << id3 
         << left << setw(15) << name3 << "$" << setw(8) << fixed << setprecision(2) << balance3 << endl;
    
    return 0;
}
