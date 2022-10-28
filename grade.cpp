#include "grade.h"
#include <iostream>
#include <vector>


//Default constructer, sets total to 0
Grade::Grade(){
   total = 0;
}


//Collects grades from user input
void Grade::collectgrades(){


    //Starts a while loop, that will cin assignment grades until user inputs "|", and pushes them into an assigment vector. Input must be a percent
    std::string G;
   // std::string G;
    std::cout<<"Enter Available assignments grades:"<<std::endl;
    while(std::cin>>G){
       if (G == "|"){break; }
       else {
            int x  = std::stoi(G);
            assignments.push_back(x);
       }
    }


    //Another while loop that does the same thing except for lab grades. Input must be a percent
    std::cout<<"Enter Available Lab grades:"<<std::endl;
    while(std::cin>>G){
       if (G == "|"){break; }
       else {
            int x  = std::stoi(G);
            lab.push_back(x);
       }
    }

    //Asks the user to input an exam grade, and if the input is "N", skips this step (in case the exam hasn't happened yet). Input must be a percent
    std::cout<<"Enter Exam grade, if there is no grade then enter N:"<<std::endl;
    std::cin>>G;
    if(G == "N"){examHundred =0; examgrade = 0;
    }
    else{
        examgrade = std::stoi(G);

        examHundred =100;
    }

    //Asks the user for a project grade, skips the step if input is "N". Input must be a percent
    std::cout<<"Enter project grade, if there is no grade then enter N:"<<std::endl;
    std::cin>>G;
    if(G == "N"){projectHundred =0; projectgrade = 0; }
    else{
        projectgrade = std::stoi(G);

        projectHundred =350;
    }
}



void Grade::calculatefinal(){

    //Initialize sum and msum, which will store the total points earned and total points possible respectively
    int sum =0;
    int mSum=0;


    //Loops through assignment vector, adds the points to sum, and total possible points to msum after the loop ends
     for(int i=0;i<assignments.size();i++){
         sum = assignments[i]+sum;

    }
    mSum = assignments.size()*100;


    //Loops through labs vector, converts the percent to its point weight, and adds it to the sum, then adds total possible points to mSum.
    for(int i=1;i<=lab.size();i++){
        lab[i]= 5;
         sum += lab[i];


    }
 mSum = lab.size()*5+mSum;


    //Converts the project grade percent to its weight in points, adds it to the sum and total possible points to mSum
    projectgrade = (projectgrade/100)*350;

    sum +=projectgrade;


    sum +=examgrade;
std::cout<<sum<<" _ " <<mSum<<std::endl;
    mSum += examHundred;

    mSum+= projectHundred;



    //Calculates a final percentage grade using sum and mSum, couts the grade.
    float Total = (float)sum/mSum;
    Total= Total *100;




    std::cout<<"Your Grade is "<<Total<<"%"<<std::endl;






}


// there is no problem with exam or project hundred