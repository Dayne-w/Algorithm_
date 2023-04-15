#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int korean;
    int english;
    int math;
};

bool cmp(Student s1, Student s2){
    if(s1.korean == s2.korean){
        if(s1.english == s2.english){
            if(s1.math == s2.math){
                return s1.name < s2.name;
            }else{
                return s1.math > s2.math;
            }
        } else{
            return s1.english < s2.english;
        }
    }else{
        return s1.korean > s2.korean;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<Student> v;
    for(int i = 0; i < n; i++){
        Student student; 
        cin >> student.name >> student.korean >> student.english >> student.math;
        v.push_back(student);
    }
    sort(v.begin(), v.end(), cmp);
    for(Student student : v){
        cout << student.name << '\n';
    }
}