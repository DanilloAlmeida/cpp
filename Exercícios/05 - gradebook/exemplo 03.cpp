#include <iostream>
using std::cout;
using std::endl;

//definição da classe GradeBook
class GradeBook
{
    public:
        void displayMessage()
        {
            cout<<"Welcome to the Grade Book";
        }    
};

int main()
{
    GradeBook gradeBook01;
    gradeBook01.displayMessage();
    return 0;
}