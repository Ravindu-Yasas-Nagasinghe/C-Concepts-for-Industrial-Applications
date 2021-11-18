class CoffeeMachineInterface {
private:
  Selection* selection;
public:
  CoffeeMachineInterface(Selection* selection){
    selection = selection;
  }
  void chooseFirstSelection(){
    selection->selectFirst()
  }
  void chooseSecondSelection(){
    selection->selectSecond()
  }
  return;
}
