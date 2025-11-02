#pragma once 
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;


class Date {
    private:
    int day, month, year;
    int day_in_month();
    public:
    Date();
    Date(int d, int m, int y);
    ~Date();

    int getD() const {return day;}
    int getM() const {return month;}
    int getY() const {return year;}
    
    //Qua tai toan tu < la member cua lop >
    bool operator < ( const Date& d);

    //Qua tai toan tu < la non-member >
    friend bool operator< ( const Date& d1 ,const Date& d2);
    friend bool operator== ( const Date& d1 ,const Date& d2);
    friend bool operator> ( const Date& d1 ,const Date& d2);


    //Qua tai toan tu xuat nhap
    friend ostream& operator<< (ostream& out, Date& d);
    friend istream& operator>> (istream& in, Date& d);

    void setDate(int newDate) const;

    void input();
    void display();

    bool checkDate();

};
