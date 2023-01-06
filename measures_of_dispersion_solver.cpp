#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "How many data? ";
    int num_of_data;
    cin >> num_of_data;
    float data[num_of_data];
    float frequency[num_of_data];
    float mean;
    float data_times_frequency;
    float sum_of_frequency;
    for(int i = 0; i < num_of_data; i++){
        cout << "\nData: ";
        cin >> data[i];
        cout << "frequency: ";
        cin >> frequency[i];

        data_times_frequency += data[i] * frequency[i];
        sum_of_frequency += frequency[i];
    }
    mean = data_times_frequency / sum_of_frequency;
    mean = floor(mean * 100 + 0.5) / 100;

    float data_minus_mean;
    float data_minus_mean_squared;
    float data_minus_mean_squared_times_frequency;
    for(int k = 0; k < num_of_data; k++){
        data_minus_mean = data[k] - mean;
        data_minus_mean = floor(data_minus_mean * 100 + 0.5) / 100;
        data_minus_mean_squared = pow(data_minus_mean, 2);
        data_minus_mean_squared_times_frequency = data_minus_mean_squared * frequency[k];
        
        cout << data[k] << "   -   " << frequency[k] 
            << "   -   " << data_minus_mean << "   -   " 
            << data_minus_mean_squared << "   -   " << data_minus_mean_squared_times_frequency << endl; 

    }
    return 0;
}