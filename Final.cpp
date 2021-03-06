#include<iostream>
using namespace std;

class CoffeeMachineInterface {
public:
  CoffeeMachineInterface(){
    cout<< "Coffee machine interface"<<endl;
  }
  void chooseFirstSelection(){
    cout<<"Select 1 of new coffee machine"<<endl;
  }
  void chooseSecondSelection(){
     cout<<"Select 2 of new coffee machine"<<endl;
  }
};

class OldCoffeeMachine {
public:
  void selectA(){
    cout<<"A selected";
  }
  void selectB(){
    cout<<"B selected";
  }
};

class CoffeeTouchscreenAdapter : public CoffeeMachineInterface {
public:
    OldCoffeeMachine* OldMachine;
  void connect(OldCoffeeMachine* OldMachine){
    OldMachine = OldMachine;
    cout<<"Adapter"<<endl;
  }

    void selectFirst(){
      OldMachine->selectA();
    }
    void selectSecond(){
      OldMachine->selectB();
    }

};


int main(){
    OldCoffeeMachine* OldMachine = new OldCoffeeMachine();
    CoffeeTouchscreenAdapter* adaptor = new CoffeeTouchscreenAdapter();

    adaptor->connect(OldMachine);

    CoffeeMachineInterface* touchMachine = new CoffeeMachineInterface();

      touchMachine->chooseFirstSelection();
      touchMachine->chooseSecondSelection();
      return 0;
    }

