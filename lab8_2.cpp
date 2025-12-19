#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float score) {
    if (score > 90) return 'A';
    if (score > 75) return 'B';
    if (score > 60) return 'C';
    if (score > 45) return 'D';
    return 'F';
}

int main(){
    int N, i = 0;
    cout << "Enter the number of students: ";
    cin >> N;
    cin.ignore();

    string name[N];
    float score[N];

    while(i < N){
        cout << "Name of student " << i+1 << ": ";
        getline(cin, name[i]);
        
        cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
        cin.ignore();
        i++;
    }

    i = 0;
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    while(i < N){
        cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
        i++;
    }
    cout << "---------------------------------------------\n";

    return 0;
}