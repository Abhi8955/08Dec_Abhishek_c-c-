#include<iostream>
using namespace std;

class Cricketer
   {
   protected:
      string name;
   public:
      void input_data() {
         cout << "Enter name: ";
         cin >> name;
    }
};

class Batsman : public Cricketer 
{
   private:
      int total_runs;
      float average_runs;
      int best_performance;
   public:
      void input_data() 
    {
         Cricketer::input_data();
         cout << "Enter total runs: ";
         cin >> total_runs;
         cout << "Enter best performance: ";
         cin >> best_performance;
         average_runs = (float)total_runs / 10;
    }
      void display_data() 
    {
         cout << "Name: " << name << endl
         cout << "Total runs: " << total_runs << endl;
         cout << "Average runs: " << average_runs << endl;
         cout << "Best performance: " << best_performance << endl;
     }
};

int main() 
{
   Batsman b;
   b.input_data();
   b.display_data();
   return 0;
}
