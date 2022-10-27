#include <iostream>
#include "grade.h"
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>


#include "grade.h"



int main(){


    Grade grade;
    grade.collectgrades();
    grade.calculatefinal();
    //std::cout<<"Test"<<std::endl;


}








/*

int main(){
    std::vector<int> labGrades;
    std::vector<int> AssignmentGrades;
    int mid,score;
    std::cout<<"put a 1 if you are at midterms or a 2 if you are at finals: ";
    std::cin>>mid;
    std::cout<<"please input your lab grades : ";

    //gets lab grades
    if(mid==1){
        for(int i=0;i<7;i++){
            std::cin>>score;
            labGrades.push_back(score);
            std::cout<<" : ";

        }

    }
    else{
        for(int i=0;i<12;i++){
            std::cin>>score;
            labGrades.push_back(score);
             std::cout<<" : ";

        }
    }
    std::cout<<"Please input assignment grades";
    //gets assignment grades
    if(mid==1){
        for(int i=0;i<3;i++){
            std::cin>>score;
            AssignmentGrades.push_back(score);
             std::cout<<" : ";

        }

    }
    else{
        for(int i=0;i<5;i++){
            std::cin>>score;
            AssignmentGrades.push_back(score);
             std::cout<<" : ";

        }
    }
    double total,totalTwo;
    for(int i=0;i<3;i++){
     total = AssignmentGrades[i]+total;
    }


    for(int i=0;i<7;i++){
     totalTwo = labGrades[i]+totalTwo;
    }

    double fin;
    fin = total + totalTwo;
    std::cout<<" - "<<fin;
    //need to figure out how to pass this to ger to grade.cpp
    //should add a function to get the total grade points so we are just passing one number
    //grade.cpp should just only get the final grade for rn
       grade grade(fin);

}


*/