#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;   
    int grade;
};
int main() {
    Student student;
    cin >> student.age >> student.first_name >> student.last_name >> student.grade;
    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.grade << endl;
    return 0;
};
