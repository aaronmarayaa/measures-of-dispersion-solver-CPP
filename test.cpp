#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "enter: ";
    int num;
    cin >> num;
    float data[num];
    float freq[num];
    float sum_freq;
    float mean;
    float data_times_freq;
    for(int i = 0; i < num; i++){
        cin >> data[i] >> freq[i];

        data_times_freq += data[i] * freq[i];
        sum_freq += freq[i];
    }
    mean = data_times_freq / sum_freq;
    mean = floor(mean * 100 + 0.5) / 100;
    for(int k = 0; k < num; k++){
        cout << data[k] - mean << endl;
    }
    return 0;
}