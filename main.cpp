#include <iostream>

using namespace std;


void GPACalculator ()
{
    int n=0;
    double Numerator=0;
    double Denominator=0;
    double GPA;

    cout<<"Pls Enter The Number of Courses.";
    cin>>n;
    cout<<"\n";

    double ArrCredits [n];
    double ArrGrade_ [n];


    for (int i = 0; i < n; ++i) {

        string Grade;
        double Grade_;
        int Credits=0;

        cout << "course Number "<<i+1<<" Credits.";
        cin>>Credits;
        cout << "course Number "<<i+1<<" Grade.";
        cin>>Grade;
        cout<<"\n";

        if (Grade=="A+"||Grade=="a+")
        {
            Grade_=4;
        }
        else if (Grade=="A"||Grade=="a")
        {
            Grade_=3.7;
        }
        else if (Grade=="B+"||Grade=="b+")
        {
            Grade_=3.3;
        }
        else if (Grade=="B"||Grade=="b")
        {
            Grade_=3;
        }
        else if (Grade=="C+"||Grade=="c+")
        {
            Grade_=2.7;
        }
        else if (Grade=="C"||Grade=="c")
        {
            Grade_=2.4;
        }
        else if (Grade=="D+"||Grade=="d+")
        {
            Grade_=2.2;
        }else if (Grade=="D"||Grade=="d")
        {
            Grade_=2;
        }else
        {
            Grade_=0;
        }

        ArrCredits [i] = Credits;
        ArrGrade_ [i] = Grade_;

        Numerator += (ArrCredits[i]*ArrGrade_ [i]);
        Denominator += Credits;


    }



    GPA = Numerator/Denominator;
    cout<< "Ur GPA is "<<GPA<<" "<<char(1);


}


int main() {


    GPACalculator();


}


