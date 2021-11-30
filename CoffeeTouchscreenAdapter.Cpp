class CoffeeTouchscreenAdapter : public CoffeeMachineInterface {
public:
  void connect(OldCoffeeMachine* OldMachine){
    OldMachine = OldMachine;
  }

    void selectFirst(){
      OldMachine->selectA();
    }
    void selectSecond(){
      OldMachine->selectB();
    }

}
