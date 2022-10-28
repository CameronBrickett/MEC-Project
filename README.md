# MEC-Project
CSC 212 Fall
Review Project

Group Members: Jay Gomes, Cameron Brickett, Ishan Chadha

This project will take grades earned for the class and callculate a current final grade.
The user will be promted to enter all available grades. The algorithm will calculate the grade
based on the courses wight and return a final grade.

Contributions -
Cameron Brickett -
callculateFinal() function
test case 1


Jay Gomes - 

Ishan Chadha - 


input: integer grades available:

            Assignments/Homework - possibbly            5    worth 100    500  50%
            Labs - possibly                             10    worth 5     50   5%
            Final Exam                                                    100  10%
            Term project                                                  350   35%   = 100%
            MEC project part 1                                            15   1.5%
            MEC project part 2                                            15   1.5    = 103%
                                                                                == 1030 
            input 0 if not available yet



output:  the output will be a letter grade and a number grade

            A	A-	B+	B	B-	C+	C	C-	D+	D	F
            94	90	87	83	80	77	73	70	67	60	0


                            plan

print "grade calculator"
prompt for all available Assignments and  += total and ++count of assignments;
prompt for all available Labs and  += total and ++count of labs;
prompt for all available final exam and += total ;
prompt for all available Term project and  += total

total/all available points * 100 = Final grade


                            pseudocode

    /////////////  main.cpp  \\\\\\\\\\\\\\\
    
    #include <iostream>
    #include "grade.h"

    int main(){
        collectgrades();
    }
    

    /////////////  grade.h  \\\\\\\\\\\\\\\

    #ifndef GRADE_H
    #define GRADE_H

    class Grade(){
    
    private:
        double total;
        vector for Assignments
        vector for labs 
        double exam grade 
        double project grade 
        


    public:
    
        // constructor

        Grade();

        // methods

        void collectgrades();

        void callculateFinal();


        };



    /////////////  grade.cpp  \\\\\\\\\\\\\\\


void collectgrades(){

    prompt for all available Assignments 
    while cin 
        if condition met
            break
            else 
            add grade to assignments vector
            
    sum of vector / size of vector *
            
    prompt for all available Labs
    while cin 
        if condition met
            break
            else 
            add grade to assignments labs
            
    promp for exam 
    cin exam grade
    promp for project
    cin project grade
    
    
    
}

void callculateFinal(){
    for loop until end of assignment vector
        sum += add all elements
        mSum -> add max of all elements (what the total would be if you got 100 on every assignment entered)
    endFor
    
    for loop until end of lab vector
        sum += add all elements
        mSum -> add max of all elements (what the total would be if you got 100 on every assignment entered)
    endFor
        
    sum -> sum of all grades (assignments, labs, project, final exam )
    mSum -> sum of total possible points
    
    Total = (sum/mSum) *100
    
    cout << "Your grade is " << Total << "%" << endl;
}






   
*/
int main(){
    int total = 0;
    std::string G; 
    std::vector<int> A;

    std::cout<<"Enter Available Assighnments"<<std::endl; 
    while(std::cin>>G){
       if (G == "|"){break; }
       else {
            int x  = std::stoi(G);
            A.push_back(x); 
       }
    }
    for(int i =0; i < A.size(); i++ ){
      std::cout<<A[i]<<std::endl; 
}
    }
    
    
    
    
    
    
    TEST DATA SETS:
    
    SET 1:
    10 labs
    5 assignments 
    1 final 
    1 project
    
    labs:
    100
    100
    100
    100
    100
    100
    100
    100
    100
    100
    Assingments:
    80
    68
    90
    100
    100
    Final:
    78
    final Project:
    89
    
    
    
    SET 2:
    Labs:
    100 
    100
    100
    100
    100
    100
    
    Assignments:
    57
    87
    70
    100
    Final:
    63
    Project: 
    88
    
    SET 3:
    
    Labs:
    100 
    100
    100
    0
    0
    0
    
    Assignments:
    50
    80
    0
    100
    Final:
    63
    Project: 
    0
    
*/
