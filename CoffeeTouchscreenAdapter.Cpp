class CoffeeTouchscreenAdapter : public CoffeeMachineInterface {
private:
  OldCoffeeMachine* OldMachine;
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
