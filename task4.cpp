#include <iostream>
using namespace std;
int main() {
  double priceA = 50.0, priceB = 30.0, priceC = 20.0;
    int qA, qB, qC;

    cout<<"Enter the quantity of Product A: ";
    cin>>qA;
    cout<<"Enter the quantity of Product B: ";
    cin>>qB;
    cout<<"Enter the quantity of Product C: ";
    cin>>qC;

    double total = (priceA*qA)+(priceB*qB) + (priceC*qC);
   double finalTotal=(total > 200)?total*0.9:total;
    double shipping = (finalTotal<150)?15:0;
    double totalWithShipping = finalTotal + shipping;
    int loyaltyPoints = (totalWithShipping>300) ? 50 : 20;
   cout << "Total after discount and shipping: $" << totalWithShipping <<endl;
    cout << "Loyalty points earned: " << loyaltyPoints <<endl;

    return 0;

}