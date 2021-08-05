#include <iostream>
#include <limits>
using namespace std;
ostream& endll(ostream& os) {
    os.flush();
    return os << "\n\n";
}
int main()
{
    int intVal;
    do
    {
        cout << "Enter an integer value ";
        cin>>intVal;
        if ((cin.fail())||(cin.peek() != '\n')) {
            cout << "\n it`s not an integer! \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            intVal = -1;
        }

    } while (intVal ==-1);
    cout<<"your input: "<<intVal<<endll;
    cout<<"it was a new endl"<<endll;

    return 0;
}
