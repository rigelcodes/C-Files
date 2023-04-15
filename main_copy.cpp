// The purpose of this program is to read inventory from a file and output a list of 10 unordered items, while also writing it to a file.

// COP 2000 , April 1, Jenna Bols (bool readInventory , void logo) , Zachary Farnell ( void displayInventory , void menu) , CharLi Grimaldo ( void writeFile , void main).

#include <iostream>

#include <iomanip>

#include <fstream>

#include <string>

using namespace std;

bool readInventory(string[], double[], int[][2]);

void displayInventory(string itemNames[], double itemCost[], int itemNoShip[][2]);

void writeFile (string itemNames[], double itemCost[], int itemNoShip[][2]);

void logo();

void menu();

const int MAX = 10;


  int main()

  {

    string itemNames[MAX]={""};

    double itemCost[MAX]={0.0};

    int itemNoShip[MAX][2] = {0};

    int choice;

  do {

    logo ();

    menu();

    cin >> choice;

    //retrieve choice

    switch (choice)

  {
  
//use selection statement to call correct operation

//1- call readInventory

  case 1:

    if (readInventory(itemNames, itemCost, itemNoShip))

  {

    cout << "File read successfully...\n";

  }

  else

    cout << "File not read..\n";

    exit(0);

//

  case 2:

//2- call displayInventory
    
   displayInventory(itemNames, itemCost, itemNoShip);
   
  exit (0);
    
  case 3:

//3- call writeFile

    cout << "File written\n";

  case 4:

//4- Quit

  exit (0);

  default:

    cout << "Invalid Menu Item entered...must enter 1-4...\n";

  }

  }while (choice != 4);

  }

  bool readInventory(string itemNames[], double itemCost[], int itemNoShip[][2])

  {

    ifstream inputFile;

    inputFile.open("inputInventorycopy.txt");

    if (inputFile)

    {

      for(int i = 0; i <MAX; i++)

      {

        getline (inputFile, itemNames[i], '\t');

        inputFile >> itemCost [i];

        inputFile >> itemNoShip [i][0];

        inputFile >> itemNoShip [i][1];

      }

        inputFile.close ();

        return true;

    }

    else

    return false;

  }  

  void displayInventory(string itemNames[], double itemCost[], int itemNoShip[][2])
  {
    cout << "\nItem Name  Cost  No. Stock  Shipping (1-Yes 0-No)" << endl;
    for (int i = 0; i < MAX; i++)
      {
        cout << itemNames[i] << '\t' << itemCost[i] << '\t' << itemNoShip[0] << '\t' << itemNoShip[1] << endl;
        }
        //display inventory from arrays
        //may want to check if array is empty or not
      }

  void writeFile(string itemNames[], double itemCost[], int itemNoShip[][2])

  {

    ofstream outputFile;

//open outputFile

    for (int i = 0; i < MAX; i++)

  {
   
//write each line to outputFile

  }

    outputFile.close();

  }

    void logo()

  {

    
	cout << endl;
	cout << "Jimmy's Steak House\n";
	cout << " \n";
    cout << "**********************************\n";
    cout<< " ";
    cout << "    ";
    cout<< "**";
    cout << "              ";
    cout << "**\n";
    cout<< "     ";
    cout << "**";
    cout<< "              ";
    cout <<"**\n";
    cout << "       ";
    cout << "**";
    cout << "          ";
    cout << "**\n";
    cout << "          ";
    cout << "**";
    cout << "      ";
    cout << "**\n";
    cout << "            ";
    cout << "**";
    cout << "  ";
    cout << "**\n";
    cout << "             ";
    cout << "*****\n";
    cout << "              ";
    cout << "***\n";
    cout << "\n";
    cout << "**********************************\n";
	cout << endl;
  
  }

 void menu()

  {

  cout << "1. Read in Inventory\n";

  cout << "2. Display Inventory\n";

  cout << "3. Write to file\n";

  cout << "4. exit\n";

  }