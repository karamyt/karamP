// refuse if quantity is more than 10

#include <iostream>
using namespace std ;
int main ()
{
    double totalBill = 0.0 ;
    char moreOrders = 'y' ;

    while ( moreOrders == 'y' || moreOrders == 'Y' )
    {
        cout << " -------- VENDING MACHINE MENU -------- " << endl ;
        cout << "1. Chips       - 1.5$ " << endl ;
        cout << "2. Chocolate   - 2.0$ " << endl ;
        cout << "3. Soda        - 1.0$ " << endl ;
        cout << "4. Water       - 0.5$ " << endl ;
        cout << "5. Candy       - 1.2$ " << endl ;
        cout << "6. Gum         - 0.8$ " << endl ;
        cout << "7. Juice       - 1.8$ " << endl ;
        cout << "8. Cookies     - 2.5$ " << endl ;
        cout << "9. Exit               " << endl ;
        cout << "-------------------------------------- " << endl ;

        int choice ;
        cout << " please enter your choice (1-9) : " << endl ;
        cin >> choice ;




        int quantity ;
        cout << " please enter the quantity  " << endl ;
        cin >> quantity ;

        double pricePerItem = 0.0 ;

        
        switch ( choice )
        {
            case 1:
                pricePerItem = 1.5 ;
                break ;
            case 2:
                pricePerItem = 2.0 ;
                break ;
            case 3:
                pricePerItem = 1.0 ;
                break ;
            case 4:
                pricePerItem = 0.5 ;
                break ;
            case 5:
                pricePerItem = 1.2 ;
                break ;
            case 6:
                pricePerItem = 0.8 ;
                break ;
            case 7:
                pricePerItem = 1.8 ;
                break ;
            case 8:
                pricePerItem = 2.5 ;
                break ;
            case 9:
                cout << " Exiting the menu. " << endl;
                
                moreOrders = 'n' ;
                continue ;


                



            default:

                cout << " Invalid choice. Please try again. " << endl ;
                continue ;
        }

    if ( quantity > 10 )
        {
            cout << " Error: Quantity cannot be more than 10. Please try again. " << endl ;
            continue ;
        }


        double orderTotal = pricePerItem * quantity ;
        totalBill += orderTotal ;
        cout << " Your order total is: " << orderTotal << "$" << endl ;
        cout << " Do you want to order something else? (y/n) " << endl;
        cin >> moreOrders ;
    }
    cout << " Your total bill is: " << totalBill << " $" << endl ;
    

    
    cout << " Thank you for using the vending machine! " << endl ;
    return 0 ;
}    

   