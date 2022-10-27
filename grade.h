#ifndef GRADE_H
#define GRADE_H
#include <iostream>
#include <vector>


class Grade{

    private:
        float total;
        int projectHundred;
        int examHundred;

        std::vector<int> assignments;

        std::vector<int> lab;

        int examgrade;

        float projectgrade;

         int temp;


    public:

        //default constructor

        Grade();

        //methods

        void collectgrades();

         void calculatefinal();

};
#endif