

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {


    float BalconyNum, GrandTierNum, LogeNum, MezzanineNum,OrchestraNum, BSeatTotal,GTSeatTotal, LSeatTotal, MSeatTotal, OSeatTotal, CMPLTTotal;
    

    cout << "Please input the total number of seats purchased for Balcony seating >" ;
    cin >> BalconyNum; //Get user input from the keyboard

    cout << "Please input the total number of seats purchased for Grand Tier seating >";
    cin >> GrandTierNum; //Get user input from the keyboard

    cout << "Please input the total number of seats purchased for Loge seating >";
    cin >> LogeNum; //Get user input from the keyboard

    cout << "Please input the total number of seats purchased for Mezzanine seating >";
    cin >> MezzanineNum; //Get user input from the keyboard

    cout << "Please input the total number of seats purchased for Orchestra seating >";
    cin >> OrchestraNum; //Get user input from the keyboard
    
    //prices
    BSeatTotal = BalconyNum * 50.00;
    GTSeatTotal = GrandTierNum * 175.25;
    LSeatTotal = LogeNum * 125.00;
    MSeatTotal = MezzanineNum * 100.00;
    OSeatTotal= OrchestraNum * 230.50;
    
    // printing
    CMPLTTotal = BSeatTotal + GTSeatTotal + LSeatTotal + MSeatTotal + OSeatTotal;
    cout << setprecision(2) << fixed;

    cout << fixed << setprecision(2) << endl;
    cout << "Legion Theatre Ticket Sales\n";
    cout << "--------------------------------\n";
    printf("%-16s","Balcony:");
    cout<<"$"<<setprecision(2)<<BSeatTotal<<endl;
    printf("%-16s","GrandTier:");
    cout<<"$"<<setprecision(2)<<GTSeatTotal<<endl;
    printf("%-16s","Loge:");
    cout<<"$"<<setprecision(2)<<LSeatTotal<<endl;
    printf("%-16s","Mezzanine:");
    cout<<"$"<<setprecision(2)<<MSeatTotal<<endl;
    printf("%-16s","Orchestra:");
    cout<<"$"<<setprecision(2)<<OSeatTotal<<endl;
    printf("%-16s","Total Sales:");
    cout<<"$"<<setprecision(2)<<CMPLTTotal<<endl;
    cout<<"Press any key to continue...";
    getchar();
    getchar();
    //asking the user to press any key to end the program using two getchar() functions
    //as there is no instructions given when the program stops or will it run till user wants

    return 0;
}
