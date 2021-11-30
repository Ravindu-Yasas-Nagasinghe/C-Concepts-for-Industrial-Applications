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
