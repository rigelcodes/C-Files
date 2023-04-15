//this program is designed to read a file, read user input for user names and user password's and have several paths depending on the input. If correct,
//the program will allow the user to view their information, if not the program will not allow the user to view. If the master enters, they will be able to see all of the community information
//and created a backup.

//cop 2000 , apr 20, 2022, Jenna Bols

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;


int linearSearch(string arr[][7], int numElems, string value);
void bubbleSort(string arr[][7], int size);
void display (string arr[][7], int size);
bool readFile();
bool validateUser();

int main() {
    string name;
    string pass;
    string userName;
    string userPass;
    int choice;
    
    bool readFile ();
    cout << " File Read..\n";
    
   cout << "Enter the following information or 0 to Exit...\n";
 
 bool validateUser();
    cout << "Please Enter your User Name >\n";
    cin >> userName;

    
      if ( userName == "zero")
    {
        exit(0);
    }
       
   cout << "Please Enter your UserPass >\n";
   cin >> userPass;
    if ( userPass == "zero")
    {
        exit(0);
    }
    
   
    if (userName == "tsmith@dna.com")
    if (userPass =="tuna20")
    {
        cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Tom " << "  "<<" " << "Smith" << " " << "2000" <<" "<< "U"<< " " << "Teacher" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if (userName =="bham@gnet.com")
    if (userPass == "squid62")
    {
      cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Blake " << "  "<<" " << "Ham" << " " << "1987" <<" "<< "U"<< " " << "Teacher" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if(userName == "jarrow@pnet.com")
    if (userPass =="ahoy10")
    {
     cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " James " << "  "<<" " << "Arrow" << " " << "2005" <<" "<< "U"<< " " << "Apprentice" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if(userName =="hgreen@lakes.net")
    if (userPass == "flower22")
    {
    cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Hannah " << "  "<<" " << "Green" << " " << "2007" <<" "<< "U"<< " " << "Apprentice" << "!" << endl;
    }
    
    
    if (userName == "jdark@att.net")
    if (userPass == "gymrat32")
    {
        
    string accts[5][7] =
{{"bham@gnet.com",	 "Blake",	 "Ham",		 "squid62",	"1987",	"U",	"Teacher"},
{"jdark@att.net",	 "Jim",		"Dark",		 "gymrat32",      "1985",	"A", "Master"},
{"hgreen@lakes.net", "Hannah",	"Green", 	"flower22",      "2007",	"U",	"Apprentice"},
{"tsmith@dna.com", "Tom",		"Smith",	 	 "tuna20",	"2000",	"U",	"Teacher"},
{"jarrow@pnet.com", "James",	"Arrow",		 "ahoy10",	"2005",	"U",	"Apprentice"}};

display (accts, 5);
cout << endl;
bubbleSort(accts, 5);


cout << "backup File completed...\n";

}
else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    return 0;
}

int linearSearch(string arr[][7], int size, string value)
{
    int index = 0;
    int position= -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if(arr[index][3] == value )
        found = true;
        position = index;
    }
    index++;

return position;
    }
    
void bubbleSort(string arr[][7], int size)
{
    bool swap;
    string temp;
    
    do 
{
    swap = false;
    for (int count =0; count < (size - 1); count++)
    {
        if (arr[count][0] > arr [count + 1][0])
        {
            
            
            for(int c=0; c < 7; c++)
            {
                temp = arr[count][c];
                arr[count][c] = arr[count+1][c];
                arr[count+1][c] = temp;
            }
            
            
            swap = true;
        }
    }
} while (swap);
}

void display(string arr[][7], int size)
{
    for(int r = 0; r < size; r++)
    {
        for(int c = 0; c < 7; c++)
        cout << arr[r][c] << " ";
    }
    cout << endl;
}

bool readFile(string theAccounts[5][7])
{
	ifstream inputFile;
	inputFile.open("AccountData.txt");

	if (inputFile)
	{
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 7; y++)
			{
			    getline (inputFile, theAccounts[x][y]);
				inputFile >> theAccounts[x][y];
			}
			cout << endl;
		}
			inputFile.close();
		return true;
	}

	else
	{
		return false;
	}
}
bool validateUser(string theAccounts[5][7], string userName, string userPass, int &saveRow)
{
    if (userName == "tsmith@dna.com")
    if (userPass =="tuna20")
    {
        cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Tom " << "  "<<" " << "Smith" << " " << "2000" <<" "<< "U"<< " " << "Teacher" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if (userName =="bham@gnet.com")
    if (userPass == "squid62")
    {
      cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Blake " << "  "<<" " << "Ham" << " " << "1987" <<" "<< "U"<< " " << "Teacher" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if(userName == "jarrow@pnet.com")
    if (userPass =="ahoy10")
    {
     cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " James " << "  "<<" " << "Arrow" << " " << "2005" <<" "<< "U"<< " " << "Apprentice" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
    if(userName =="hgreen@lakes.net")
    if (userPass == "flower22")
    {
    cout << setprecision(2)<< fixed << showpoint;
    cout << "Welcome Back " << " "
    << " Hannah " << "  "<<" " << "Green" << " " << "2007" <<" "<< "U"<< " " << "Apprentice" << "!" << endl;
    }
    else { 
        cout << "sorry that's incorrect.\n";
        exit(0);
    }
}