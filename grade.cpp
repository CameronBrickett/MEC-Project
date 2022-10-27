#include "grade.h"
#include <iostream>
#include <vector>


Grade::Grade(){
   total = 0;
}

void Grade::collectgrades(){


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

    std::cout<<"Enter Available Lab grades:"<<std::endl;
    while(std::cin>>G){
       if (G == "|"){break; }
       else {
            int x  = std::stoi(G);
            lab.push_back(x);
       }
    }

    std::cout<<"Enter Exam grade, if there is no grade then enter N:"<<std::endl;
    std::cin>>G;
    if(G == "N"){examHundred =0; }
    else{
        examgrade = std::stoi(G);
        //std::cout<<"&&&&&"<<G;
        examHundred =100;
    }

    std::cout<<"Enter project grade, if there is no grade then enter N:"<<std::endl;
    std::cin>>G;
    if(G == "N"){projectHundred =0; }
    else{
        projectgrade = std::stoi(G);
        //std::cout<<projectgrade<<std::endl;
        //std::cout<<"&&&&&"<<G;
        projectHundred =350;
    }
}



void Grade::calculatefinal(){

    int sum =0;
    int mSum=0;


     for(int i=0;i<assignments.size();i++){
         sum = assignments[i]+sum;
        // std::cout<<"****"<<assignments[0];
         //std::cout<<sum<<" 1- "<<mSum<<std::endl;
         //std::cout<<assignments[i]<<std::endl ;
    }
    mSum = assignments.size()*100;



    for(int i=1;i<=lab.size();i++){
        lab[i]= 5;
         sum += lab[i];


    }
 mSum = lab.size()*5+mSum;
 //std::cout<<projectgrade<<std::endl;


    projectgrade = (projectgrade/100)*350;
   // std::cout<<projectgrade<<std::endl;
    //hold = hold*350;
    //projectgrade = hold;
    sum +=projectgrade;

  //  std::cout<<projectgrade<<" - - "<<examgrade<<std::endl;
    //std::cout<<sum<<" 3- "<<mSum<<std::endl;

    sum +=examgrade;
   // std::cout<<sum<<" 4- "<<mSum<<std::endl;



    mSum += examHundred;
   // std::cout<<sum<<" 6- "<<mSum<<std::endl;
    mSum+= projectHundred;
   // std::cout<<sum<<" 7- "<<mSum<<std::endl;

    float Total = (float)sum/mSum;
    Total= Total *100;

    //total = (float)total*100;
    //std::cout<<"$$$"<<sum<<std::endl;
    //std::cout<<"%%%"<<mSum<<std::endl;


    std::cout<<"Your Grade is "<<Total<<"%"<<std::endl;






}


// there is no problem with exam or project hundred