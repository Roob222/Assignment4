//
// Created by reube on 2022-03-28.
//

#ifndef ASSIGNMENT4_PROFESSOR_H
#define ASSIGNMENT4_PROFESSOR_H
#include <string>

using namespace std;
class Professor {
private:
    string lName;
    string fName;
    int phoneNum;
    string institute;
    double income;
public:
    string getLName(){
        return this->lName;
    }
    void setLName(string lName){
        this->lName = lName;
    }
    string getFName(){
        return this->fName;
    }
    void setFName(string fName){
        this->fName = fName;
    }
    int getPhoneNum(){
        return this->phoneNum;
    }
    void setPhoneNum(int phoneNum){
        this->phoneNum = phoneNum;
    }
    string getInstitute(){
        return this->institute;
    }
    void setInstitute(string institute){
        this->institute = institute;
    }
    double getIncome(){
        return this->income;
    }
    void setIncome(double income){
        this->income = income;
    }
};


#endif //ASSIGNMENT4_PROFESSOR_H
