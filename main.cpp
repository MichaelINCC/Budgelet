#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;





class flashCards{
  public:
  string frontSideOfCard;
  string backSideofCard;
  string answer;
  string acceptableIterations;
  void cardCreationPortion(){
//Identify Strings
     
//Identify Outputs for card creation
       cin.ignore();
       
        cout  << "What is the question you would like to ask on the front side of the card?"<< endl;
        getline(cin,frontSideOfCard);
      
        cout <<"What is the response you are expecting from this card?"<< endl;
        getline(cin,backSideofCard);
        cout <<"Is there any other acceptable formattings for the answers?(Abreveations,Mnemonics,etc.)";
        getline(cin,acceptableIterations);
  }

  void cardDisplaySection(){
    cout <<"Prompt:"<< frontSideOfCard;
    getline(cin,answer);
      if (answer == backSideofCard || answer==acceptableIterations)
      { 
          cout << "That answer is correct!" << endl;     
      }}

    void cardDisplay(){
        cout << "Front:\n";
        cout << "Back:\n";
  }
};
class deck{
  public:
  char affirmation;
  string identifierOfFlashCards;
  string decks;
  string userInput;
  string deckName;


  int cardNumber;


    void creationOfDeck(flashCards& myCards) {
      cin.ignore();
      cout << "What would you like the name of this deck to be called?\n";
      getline(cin,deckName);
      cout <<"The deck name: "<< deckName <<"  Is this correct? If so input a Y. If this is incorrect please enter N to clear and restart."<< endl;
      cin >> affirmation;
      cout<< endl;
    bool isConfirmed;
        
    if (affirmation == 'y' || affirmation=='Y')
    { 
      cout<<"The deck has been created.\n";
      cin.ignore();
      cout <<"Please enter y to proceed to card creation, enter N to return to the menu.";
      cin >>affirmation;
      }
      if (affirmation =='y' || affirmation =='Y')
      { myCards.cardCreationPortion();}
            
    else if(affirmation == 'n' || affirmation == 'N'){
            cout <<"No problem!Let's begin the deck creation process again."<< endl;
            deckName.clear();
            cin.ignore();
            creationOfDeck(myCards);
            
        }
      }
    };
class deckCollections{
private:
public:
};
int main()
{{
  int choice;
  flashCards myCards;
    cout << "Welcome to Budgelet.This initial build is going to just prompt you for card creation, opening of a prexisting set, or account creation. "<< endl;
    cout << "If you are interested in creating your own deck type 1."<< endl;
    cout << "If you are interested in opening one of your prexisting flashcard sets type 2"<< endl;
    cout << "if you are interested in opening an account in order to save your own flashcard sets and in the future compete in Budgeoffs type 3."<< endl ;
    cin >>choice; 

if (choice == 1)
{
  deck myDeck;
  myDeck.creationOfDeck(myCards);
}
return 0;
}}
