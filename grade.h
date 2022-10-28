#ifndef GRADE_H
#define GRADE_H
#include <iostream>
#include <vector>

//Grade class to store and calculate your grade for CSC 212

class Grade{

    private:
    //Stores the scores on assignments, labs, project and the final exam, as well as the total
    
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
        
        //collects the grades from user input
        void collectgrades();

        //Calculates the total grade from the user inputed grades in collectgrades();
        void calculatefinal();

};
#endif