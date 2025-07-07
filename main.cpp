#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;





class flashCards
{
  //Identification section
  public:
  char affirmation;
  string frontSideOfCard;
  string backSideofCard;
  string answer;
  string acceptableIterations;
  void cardCreationPortion()
    {     
//Identify Outputs for card creation
       cin.ignore();

       while (true)
       {
      
       int questionNumber = 0;
        cout  << "What is the question you would like to ask on the front side of the card?"<< endl;
        getline(cin,frontSideOfCard);
      
        
        cout <<"Was this input correctly?" << endl;
        cin >>affirmation;
        if (affirmation == 'y' || affirmation == 'Y')
        {
           questionNumber = 1;
        }
        if (affirmation == 'n' || affirmation == 'N')
        {

          questionNumber=0;
           frontSideOfCard.clear();
        }
        
        else if (questionNumber = 1)
          {
            cout <<"What is the response you are expecting from this card?"<< endl;
            getline(cin,backSideofCard);
          }
          cout <<"Was this input correctly?" << endl;
          cin >>affirmation;
          if (affirmation == 'y' || affirmation == 'Y')
            {
            questionNumber = 2;
            }
          if (affirmation == 'n' || affirmation == 'N')
          {
          questionNumber = 1;
          backSideofCard.clear();
          }
        else if (questionNumber= 2)
        {
          cout <<"Is there any other acceptable formattings for the answers?(Abreveations,Mnemonics,etc.)";
          getline(cin,acceptableIterations);
           cout <<"Was this input correctly?" << endl;
          cin >>affirmation;
            if (affirmation == 'y' || affirmation == 'Y')
              {
              questionNumber = 3;
             }
            if (affirmation == 'n' || affirmation == 'N')
              {
                questionNumber = 2;
                acceptableIterations.clear();
              }
        else if (questionNumber = 3){

        cout <<"Would you like to save this card and begin the next card creation? Please enter a y to proceed or would you like to restart the current cards creation."<< endl;
        cin >> affirmation;
          if (affirmation == 'y' || affirmation == 'Y')
          {
             {
              unordered_map<string, vector<int>> cardCollectionIndex;
              unordered_map<string, vector<int>> cardIndex;
              for (const auto& [key, positions] : cardCollectionIndex) 
              {  
              cardIndex[key] = positions;
              }
                     cardCreationPortion(); 
             }         
            }
        if (affirmation == 'n' || affirmation == 'N' )
          { cout << "No problem let us begin the card creation process again!"<<endl;
              frontSideOfCard.clear();
              backSideofCard.clear();
              cin.ignore();
              cardCreationPortion;
            
          }
        }
      }
     }
  }
  void cardDisplaySection(){
    cout <<"Prompt:"<< frontSideOfCard;
    getline(cin,answer);
      if (answer == backSideofCard || answer ==acceptableIterations)
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
  static int deckNumber;


    void creationOfDeck(flashCards& myCards) {
      cin.ignore();
      cout << "What would you like the name of this deck to be called?\n";
      getline(cin,deckName);
      
      cout <<"The deck name: " << deckName << "  Is this correct? If so input a Y. If this is incorrect please enter N to clear and restart."<< endl;
      cin >> affirmation;
      vector<string> deckCollections;
      deckCollections.push_back(deckName);
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
    class deckCollections {
private: vector<string> deckNameLibrary;
  public:
  
    void addDeckName(const string & name)
    {
     deckNameLibrary.push_back(name);
    }
     unordered_map<string,vector<int>> deckBuildIndex;
        unordered_map<string,vector<int>>deckIndex;
        
    for (int i = 0; i < deckNameLibrary.size(); ++i)
      { 
        deckIndex[deckNameLibrary[i]].push_back(i);
      
      }
      return deckIndex;
    };

//Beginning of Main
int main()
{
  deckCollections myDeckLibrary;
  int choice;
  flashCards myCards;
    cout << "Welcome to Budgelet.This initial build is going to just prompt you for card creation, opening of a prexisting set, or account creation. "<< endl;
    cout << "If you are interested in creating your own deck type 1."<< endl;
    cout << "If you are interested in opening one of your prexisting flashcard deck type 2" << endl;
    cout << "if you are interested in opening an account in order to save your own flashcard sets and in the future compete in Budgeoffs type 3."<< endl ;
    cin >>choice; 

if (choice == 1)
{
  deck myDeck;
 myDeck.creationOfDeck(myCards);
}


if(choice == 2) 
{

}

if (choice == 3)
{
  /* code */
}

}