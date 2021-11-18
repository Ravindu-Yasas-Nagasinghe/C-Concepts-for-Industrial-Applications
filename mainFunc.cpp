#include<iostream>
using namespace std;
int main(){
    OldCoffeeMachine* OldMachine = new OldCoffeeMachine();
    CoffeeTouchscreenAdapter* adaptor = new CoffeeTouchscreenAdapter();

    adaptor->connect(OldMachine)

    CoffeeMachineInterface* touchMachine = new CoffeeMachineInterface(adaptor);

      touchMachine->chooseFirstSelection();
      touchMachine->chooseSecondSelection();
      return 0;
    }
