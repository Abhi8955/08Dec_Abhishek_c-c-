#include<iostream>
using namespace std;

class Person 
{
   protected:
      string name;
      int age;
   public:
      void read_data() 
    {
         cout << "Enter name: ";
         cin >> name;
         cout << "Enter age: ";
         cin >> age;
    }
      void display_data() 
    {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
   private:
      float percentage;
   public:
      void read_data() 
     {
         Person::read_data();
         cout << "Enter percentage: ";
         cin >> percentage;
      }
      void display_data() 
      {
         Person::display_data();
         cout << "Percentage: " << percentage << endl;
      }
};

class Teacher : public Person 
{
   private:
      int salary;
   public:
      void read_data() 
     {
         Person::read_data();
         cout << "Enter salary: ";
         cin >> salary;
      }
      void display_data() 
     {
         Person::display_data();
         cout << "Salary: " << salary << endl;
      }
};

class TeachingAssistant : public Student, public Teacher {
   private:
      string course;
   public:
      void read_data() 
     {
         Student::read_data();
         Teacher::read_data();
         cout << "Enter course: ";
         cin >> course;
      }
      void display_data()
      {
         Student::display_data();
         Teacher::display_data();
         cout << "Course: " << course << endl;
      }
};

int main() 
{
   TeachingAssistant ta;
   ta.read_data();
   ta.display_data();
   return 0;
}
