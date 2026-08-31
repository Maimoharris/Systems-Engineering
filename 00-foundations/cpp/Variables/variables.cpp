#include <iostream>

int main() {
    //Student Information
    std::string student_name;
    int age;
    unsigned long student_id;
    char gender;
    float gpa;
    bool currently_enrolled=false;

    //Collect Data
    std::cout<<"===============Student Personal Information Collection==============="<<std::endl;
    std::cout<<"Enter Your Name: ";
    std::cin>>student_name;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Enter your Student ID:";
    std::cin>>student_id;
    std::cout<<"Enter your GPA:";
    std::cin>>currently_enrolled;
    if(currently_enrolled='y'||currently_enrolled=='Y'){currently_enrolled=true;}else{currently_enrolled=false;}
    std::cout<<"Are you currently Enrolled:";
    std::cin>>gpa;
    std::cout<<"===============Done Collection Information==============="<<std::endl;


    //Marks Collection
    int maths,programming,physics,electronics,english;
    int maths_credit,programming_credit,physics_credit,electronics_credit,english_credit;
    std::cout<<"===============Student Marks Collection=================="<<std::endl;
    std::cout<<"\nMathematics: ";
    std::cin>>maths;
    std::cout<<"\nMathematics Credit: ";
    std::cin>>maths_credit;
    std::cout<<"\nProgramming: ";
    std::cin>>programming;
    std::cout<<"\nProgramming Credit: ";
    std::cin>>programming_credit;
    std::cout<<"\nPhysics: ";
    std::cin>>physics;
    std::cout<<"\nPhysics Credit: ";
    std::cin>>physics_credit;
    std::cout<<"\nElectronics: ";
    std::cin>>electronics;
    std::cout<<"\nElectronics Credit: ";
    std::cin>>electronics_credit;
    std::cout<<"\nEnglish: ";
    std::cin>>english;
    std::cout<<"\nEnglish Credit: ";
    std::cin>>english_credit;

    int total = maths +programming + physics + electronics + english;
    int average = (maths +programming + physics + electronics + english)/5;
    int credits = maths_credit + programming_credit + physics_credit + electronics_credit + english_credit;

    //Academin Status
    if (total > 90){
        std::cout<<"Excellent!"<<std::endl;
    }else if (total>80)
    {
        std::cout<<"Very Good"<<std::endl;
    }else if (total > 70)
    {
        std::cout<<"Good"<<std::endl;
    }else if (total>60)
    {
        std::cout<<"Passed"<<std::endl;
    }else{std::cout<<"Failed";}

    return 0;
}