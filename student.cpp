#include<iostream>

#include<cstring>

using namespace std;

class student
{
    int subj;
    int marks;
    float avg;
    int roll;
    char name[20];
    public:
        student()
        {
            this->avg=0;
            this->marks=0;
            this->subj=0;
            strcpy(this->name,"Default");
        }
        void accepct(int ii)
        {
            int i=0;
          //  this->avg=0;
            cout<<ii<<")Enter the Name\n";
            cin>>this->name;
            cout<<"Enter the Roll Number\n";
            cin>>this->roll;
            cout<<"Enter how Many Subject\n";
            cin>>this->subj;
            for(i=0;i<this->subj;i++)
            {
                cout<<"Enter "<<i+1<<" Subject marks=";
                cin>>this->marks;
                this->avg=this->avg+this->marks;
            }
            this->avg=this->avg/(float)subj;
        }
        void display(int i)
        {
            cout<<"\n"<<i<<")Name="<<this->name<<"\n--Roll No="<<this->roll<<"\n--Average="<<this->avg;
        }
};

int main()
{
    int n1,i=0;
    cout<<"enter number of student=";
    cin>>n1;

    student *s1=new student[n1];
    for(i=0;i<n1;i++)
    {
        (s1+i)->accepct(i+1);
    }
    for(i=0;i<n1;i++)
    {
        (s1+i)->display(i+1);
    }
}