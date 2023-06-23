#include <iostream>
using namespace std;

class Gym {
  protected:
    int weeks;
  public:
    void SetBody(int a) {
      weeks=a;

    };

class UpperBody: public Gym {
  public:
    void workout ()
    { count << "The Body you are seeking for!" << weeks << endl; }
};

class Zyzz: public Gym {
  public:
    void workout()
    { cout << "For LowerBody" << weeks <<endl; }
};

int main() {
  UpperBody u; 
  Zyzz z;
  Gym *gym1 = &u; // Sorry I have made this complex but its just address
  Gym *gym2 = &z; // All to zyzz who put me into BodyBuilding 
  gym1->setweeks(6); // sunday = Rest bruh 
  gym2->setweeks(7); // if you do cardio and wants to die 
  u.workout();
  m.attack();
}

