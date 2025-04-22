
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    public:
    int scores[5];
    void input(){
        for(int i=0; i<5; i++){
            cin >> scores[i];
        }
    }

    int calculateTotalScore(){
        int total = 0;
        for(int i=0; i<5; i++){
            total += scores[i];
        }
        return total;
    }
};

int main(){

    int n; //numero de estudantes
    cin >> n;
    Student* s = new Student[n]; 

    for(int i=0; i<n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0;
    for(int i=1; i<n; i++){
        if(s[i].calculateTotalScore() > kristen_score){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}