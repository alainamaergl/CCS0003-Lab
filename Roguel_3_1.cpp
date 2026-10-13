#include <iostream>
using namespace std;
int main()
{
    cout << "\033[1mDay\t\t\t" << "Time\t\t\t" << "Course code\t\t" << "Section\t\t" << "Room\t\033[0m" << endl;
    cout << "Monday\t" << "\t\t\t-------------NO CLASSES-------------\n" << endl;

    cout << "Tuesday\t\t" << "7:00-9:40\t\t" << "CCS0001\t\t\t" << "TN02\t\t" << "ONLINE" << endl;
    cout << "\t\t\t11:00-12:30\t\t" << "GED0011\t\t\t" << "TN02\t\t" << "ONLINE" << endl;
    cout << "\t\t\t1:00-2:20\t\t" << "GED0006\t\t\t" << "TN02\t\t" << "ONLINE\n" << endl;

    cout << "Wednesday\t" << "7:00-9:50\t\t" << "CCS0001L\t\t" << "TN02\t\t" << "F703" << endl;
    cout << "\t\t\t11:00-12:50\t\t" << "GED0004\t\t\t" << "TN02\t\t" << "F301" << endl;
    cout << "\t\t\t1:00-2:50\t\t" << "GED0009\t\t\t" << "TN02\t\t" << "F505\n" << endl;

    cout << "Thursday\t" << "7:00-9:50\t\t" << "CCS0003L\t\t" << "TN02\t\t" << "F703\n" << endl;

    cout << "Friday\t\t" << "7:00-9:40\t\t" << "CCS0003\t\t\t" << "TN02\t\t" << "ONLINE" << endl;
    cout << "\t\t\t11:00-12:30\t\t" << "GED0011\t\t\t" << "TN02\t\t" << "ONLINE" << endl;
    cout << "\t\t\t1:00-2:20\t\t" << "GED0006\t\t\t" << "TN02\t\t" << "ONLINE\n" << endl;

    cout << "Saturday\t" << "11:00-12:50\t\t" << "GED0004\t\t\t" << "TN02\t\t" << "F301" << endl;
    cout << "\t\t\t1:00-2:50\t\t" << "GED0009\t\t\t" << "TN02\t\t" << "F505" << endl;
   
    return 0;
}
