#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x1, x2, y1, y2, m, b;
    cout << fixed << showpoint << setprecision(2);

    cout << "Enter point coordinates: ";
    cin >> x1 >> y1 >> x2 >> y2;
    m = (y2-y1)/(x2-x1);
    b = (m*-x1)+y1;

    if(x1 == x2){ //vertical line
      cout << "x = " << x1 << " The line is vertical." ;
    }
    else if(y1 == y2){ //horizontal line
      cout << "y = " << m << "x + " << y1 << " The line is horizontal" ;
    }
    else if (m>=0){
      cout << "y = " << m << "x + " << (m*-x1)+y1 << endl;
      cout << "The line is increasing. ";
    }
    else{
      cout << "y = " << m << "x + " << (m*-x1)+y1 << endl;
      cout << "The line is decreasing. ";
    }
