#include <iostream>
using namespace std;

int main(){
    cout << "How many data? ";
    int num_of_data;
    cin >> num_of_data;
    float data[num_of_data];
    float frequency[num_of_data];
    for(int i = 0; i < num_of_data; i++){
        cout << "\nData: ";
        cin >> data[i];
        cout << "frequency: ";
        cin >> frequency[i];

    }
    return 0;
}