// I want my Personal data, Professional data, & Academic data to be separated in different classes and 4th class called biodata.
// If I create object of biodata class then using that object I can get all my professional, personal and academic data.
// Take data members in classes as follows:
// personal class - Name, Surname, address, mobile_no, dob.
// professional class - name_of_organization, job_profile, project.
// Academic - year_of_passing, cgpa, college_name, branch
// member functions
// All class includes default constructor(if data members are present), and one function to get data from user for its data member.
// Note :- define all data members as protected so that you can access this members in its derived class directly

#include <iostream>
#include <string>
using namespace std;

class Personal_data
{
protected:
    string Name, Surname, address;
    long long int mobile_no;
    char dob[20];

public:
    void PerData_accept()
    {
        cout << "\nEnter Name: ";
        cin >> Name;
        cout << "\nEnter Surname: ";
        cin >> Surname;
        cout << "\nEnter Address: ";
        cin >> address;
        cout << "\nEnter Mobile Number: ";
        cin >> mobile_no;
        cout << "\nEnter Date of Birth: ";
        cin >> dob;
    }
    void PerData_display()
    {
        cout << "\n\nName: " << Name;
        cout << "\nSurname: " << Surname;
        cout << "\nAddress: " << address;
        cout << "\nMobile_No.: " << mobile_no;
        cout << "\nDOB: " << dob;
    }
};
class Professional_data
{
protected:
    string name_of_organization, job_profile, project;

public:
    void ProData_accept()
    {
        cout << "\nEnter Name of Organization: ";
        cin >> name_of_organization;
        cout << "\nEnter Job Profile: ";
        cin >> job_profile;
        cout << "\nEnter Project: ";
        cin >> project;
    }
    void ProData_display()
    {
        cout << "\n\nName of Organization: " << name_of_organization;
        cout << "\nJob Profile: " << job_profile;
        cout << "\nProject: " << project;
    }
};
class Academic_data
{
protected:
    char year_of_passing[20];
    float cgpa;
    string college_name, branch;

public:
    void AcaData_accept()
    {
        cout << "\nEnter Year of Passing: ";
        cin >> year_of_passing;
        cout << "\nEnter CGPA: ";
        cin >> cgpa;
        cout << "\nEnter College Name: ";
        cin >> college_name;
        cout << "\nEnter Branch: ";
        cin >> branch;
    }
    void AcaData_display()
    {
        cout << "\n\nYear of Passing: " << year_of_passing;
        cout << "\nCGPA: " << cgpa;
        cout << "\nCollege Name: " << college_name;
        cout << "\nBranch: " << branch;
    }
};
class Biodata : public Personal_data, public Professional_data, public Academic_data
{
public:
    void display()
    {
        PerData_display();
        ProData_display();
        AcaData_display();
    }
};

int main()
{
    Biodata biodata;

    biodata.PerData_accept();
    biodata.ProData_accept();
    biodata.AcaData_accept();
    biodata.display();
    return 0;
}
