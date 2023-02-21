#include <iostream>
#include <conio.h>
using namespace std;

int price[4], quantity[4], count = 0, a = 0, y = 0, return_quantity = 0, pass, adminpassword = 12345, j = 0;
string z, c, d, delete_name, name[4], type[4], book_name[4], book_review[4], return_name, user_name, user_id;
char b, n, x, g;

// function prototypes....

void header();
char mainMenu();
char mainMenuAdmin();
char mainMenuUser();
void clearScreen();
void displayBooks(string name, string type, int price, int quantity);
void sortBooks();
void outOfStock();
void Review(string book_name, string book_review);

main()
{
    n = 'd';
    g = 'd';
    while (g != '3')
    {
        header();
        g = mainMenu();

        if (g == '1')
        {
            cout << "Enter your password: ";
            cin >> pass;
            if (pass == adminpassword)
            {

                while (n != '7')
                {
                    system("cls");
                    header();
                    n = mainMenuAdmin();
                    // if option 1 is selected then books are added...
                    if (n == '1')
                    {
                        for (int i = count; i < 4; i++)

                        {
                            cout << "Main Menu: 2. ADD NEW BOOKS: " << endl;
                            cout << "Enter the name of the book you would like to sell: " << endl;
                            cin >> name[i];
                            cout << "Enter book type: " << endl;
                            cin >> type[i];
                            cout << "Enter the price of the book: " << endl;
                            cin >> price[i];
                            cout << "Enter the quantity of book: " << endl;
                            cin >> quantity[i];
                            count = count + 1;
                            cout << "Do you want to enter more books?(y/n) ";
                            cin >> x;
                            if (x == 'y')
                            {
                                continue;
                            }
                            else if (x == 'n')
                            {
                                break;
                            }
                            else
                            {
                                cout << "You added invalid answer...";
                                break;
                            }
                        }
                        if (count == 4)
                        {
                            cout << "You cannot add more books...";
                        }
                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    // if option 2 is selected then previously added books are displayed...

                    else if (n == '2')
                    {
                        for (int i = 0; i <= count - 1; i++)
                        {
                            displayBooks(name[i], type[i], price[i], quantity[i]);
                        }
                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    //if option 3 is selected then previously added books are sorted by price order....

                    else if (n == '3')
                    {
                        sortBooks();
                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    //if option 4 is selected then books that are out of stock are displayed...

                    else if (n == '4')
                    {
                        outOfStock();
                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    // if option 5 is selected then books along with reviews are displayed....

                    else if (n == '5')
                    {
                        if (a == 0)
                        {
                            cout << "No reviews added yet....";
                        }
                        else
                        {
                            for (int i = 0; i <= a; i++)
                            {
                                Review(book_name[i], book_review[i]);
                            }
                        }

                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    //if option 6 is selected then record of books is deleted...

                    else if (n == '6')
                    {
                        for (int i = 0; i <= count - 1; i++)
                        {
                            displayBooks(name[i], type[i], price[i], quantity[i]);
                        }

                        cout << endl;
                        cout << endl;
                        cout << "Enter the name of the book whose record you want to delete: ";
                        cin >> delete_name;
                        for (int i = 0; i < count; i++)
                        {
                            if (delete_name == name[i])
                            {
                                name[i] = " ";
                                type[i] = " ";
                                quantity[i] = 0;
                                price[i] = 0;
                                cout << "Record of " << name[i] << " is successfully deleted..." << endl;
                            }
                            else
                            {
                                cout << "No such book exists in our stock...";
                            }
                        }

                        for (int i = 0; i <= count - 1; i++)
                        {
                            cout << "The books in our stock are: " << endl;
                            cout << endl;
                            displayBooks(name[i], type[i], price[i], quantity[i]);
                        }

                        cout << endl;
                        cout << endl;
                        clearScreen();
                    }

                    // if option 7 is selected then back to main menu....

                    else if (n == '7')
                    {
                        cout << "Thanks for uing our 'BOOK STORE MANAGEMENT SYSTEM' ....... " << endl;
                        clearScreen();
                    }
                    //in case of adding invalid command....

                    else
                    {
                        cout << "The command you entered is INVALID... try again..." << endl;
                        clearScreen();
                    }
                }
            }

            else
            {
                cout << "You entered wrong password try again..." << endl;
                clearScreen();
            }
        }

        //users options....

        else if (g == '2')
        {
            cout << "Enter your name: ";
            cin >> user_name;
            cout << "Enter your log in id: ";
            cin >> user_id;
            system("cls");
            while (n != '8')
            {

                header();
                n = mainMenuUser();

                // if option 1 is selected then books are added...
                if (n == '1')
                {
                    for (int i = count; i < 4; i++)

                    {
                        cout << "Main Menu: 2. ADD NEW BOOKS: " << endl;
                        cout << "Enter the name of the book you would like to sell: " << endl;
                        cin >> name[i];
                        cout << "Enter book type: " << endl;
                        cin >> type[i];
                        cout << "Enter the price of the book: " << endl;
                        cin >> price[i];
                        cout << "Enter the quantity of book: " << endl;
                        cin >> quantity[i];
                        count = count + 1;
                        cout << "Do you want to enter more books?(y/n) ";
                        cin >> x;
                        if (x == 'y')
                        {
                            continue;
                        }
                        else if (x == 'n')
                        {
                            break;
                        }
                        else
                        {
                            cout << "You added invalid answer...";
                            break;
                        }
                    }
                    if (count == 4)
                    {
                        cout << "You cannot add more books...";
                    }
                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                // if option 2 is selected then previously added books are displayed...

                else if (n == '2')
                {
                    for (int i = 0; i <= count - 1; i++)
                    {
                        displayBooks(name[i], type[i], price[i], quantity[i]);
                    }
                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                //if option 3 is selected then previously added books are sorted by price order....

                else if (n == '3')
                {
                    sortBooks();
                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                // if option 4 is selected then review of books are added....

                else if (n == '4')
                {
                    if (a == 4)
                    {
                        cout << "Cannot add more reviews..." << endl;
                    }

                    for (int i = 0; i < 4; i++)
                    {
                        cout << "Enter the name of the book you want to review: " << endl;
                        cin >> book_name[i];
                        cout << "Enter the review.....(good / fair / bad) : " << endl;
                        cin >> book_review[i];
                        cout<<endl;
                        cout << user_name << " has just reviewed " << book_name[i] << endl;
                        cout<<endl;
                        cout<<"Do you want to enter more reviews?(y/n)";
                        cin>>x;
                        a = a + 1;
                        if(x == 'y')
                        {
                            continue;
                        }
                        else if(x == 'n')
                        {
                            break;
                        }
                        else 
                        {
                            cout<<"INVALID...";
                            break;
                        }
                        if( a == 4)
                        {
                            cout<<"No space to add more reviews...";
                        }
                        
                    }
                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                // if option 5 is selected then books along with reviews are displayed....

                else if (n == '5')
                {
                    if (a == 0)
                    {
                        cout << "No reviews added yet....";
                    }
                    else
                    {
                        for (int i = 0; i <= a; i++)
                        {
                            Review(book_name[i], book_review[i]);
                        }
                    }

                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                // if option 6 is selected then books are bought....

                else if (n == '6')
                {
                    // firstly displaying all the available books to the user to allowig him to choose from...

                    for (int i = 0; i <= count - 1; i++)
                    {
                        displayBooks(name[i], type[i], price[i], quantity[i]);
                    }

                    cout << endl;
                    cout << endl;

                    //asking the user to enter the name of the book he wants to buy....

                    cout << "Enter the name of book you want to buy: ";
                    cin >> z;
                    cout << "How many books do you want to buy: ";
                    cin >> y;

                    for (int i = 0; i < count - 1; i++)
                    {
                        if (z == name[i])
                        {
                            if (quantity[i] > 0)
                            {
                                quantity[i] = quantity[i] - y;
                                cout << user_name << " had just bought " << z << endl;
                                cout << endl;
                            }
                            else
                            {
                                cout << "This book is not available." << endl;
                                cout << user_name << " you can try searching for some other book.";
                            }
                        }
                        else
                        {
                            cout << "This book is not available..." << endl;
                        }
                    }

                    cout << endl;
                    cout << endl;
                    clearScreen();
                }
                // option 7 to return a book....
                else if (n == '7')
                {
                    for (int i = 0; i <= count - 1; i++)
                    {
                        displayBooks(name[i], type[i], price[i], quantity[i]);
                    }
                    cout << endl;
                    cout << endl;

                    cout << "Enter the name of the book you want to return: ";
                    cin >> return_name;
                    cout << "Enter the quantity of books you want to return: ";
                    cin >> return_quantity;

                    for (int i = 0; i < 4; i++)
                    {
                        if (return_name == name[i])
                        {
                            quantity[i] = quantity[i] + return_quantity;
                            cout << user_name << " your books have been successfully returned." << endl;
                            break;
                        }
                        j = j + 1;
                    }
                    
                        if( j == 4)
                        {
                            cout << "This book is not a part of our stock..." << endl;
                            cout<<endl;
                            clearScreen();
                        }
                    

                    for (int i = 0; i <= count - 1; i++)
                    {
                        displayBooks(name[i], type[i], price[i], quantity[i]);
                    }
                    cout << endl;
                    cout << endl;
                    clearScreen();
                }

                //option 8 to EXIT...

                else if (n == '8')
                {
                    cout << "Thanks for uing our 'BOOK STORE MANAGEMENT SYSTEM' ....... " << endl;
                    clearScreen();
                }

                //in case of adding invalid command....

                else
                {
                    cout << "The command you entered is INVALID... try again..." << endl;
                    clearScreen();
                }
            }
        }
        else if (g == '3')
        {
            clearScreen();
        }

        else
        {
            cout << "Invalid command..." << endl;
            clearScreen();
        }
    }
}

// function to display header...

void header()
{
    cout << "                                                       " << endl;
    cout << "**********Online Book Store Management System**********" << endl;
    cout << "                                                       " << endl;
    cout << "_______________________________________________________" << endl;
}

//function to display main menu....

char mainMenu()
{
    char n;
    cout << "Main Memu: " << endl;
    cout << "_________________________________________________________" << endl;
    cout << "Who are you logging in as? ...." << endl;
    cout << "1. Admin." << endl;
    cout << "2. User." << endl;
    cout << "3. Exit." << endl;
    cout << "Your option: " << endl;
    cin >> n;
    return n;
}

char mainMenuAdmin()
{
    cout << "Main Menu Admin: " << endl;
    cout << "_______________________________________________________" << endl;
    cout << "1. Add new books." << endl;
    cout << "2. View books." << endl;
    cout << "3. Sort books by price order." << endl;
    cout << "4. Check books that are out of stock." << endl;
    cout << "5. Check reviews." << endl;
    cout << "6. Delete record" << endl;
    cout << "7. Exit." << endl;
    cout << "Your option: " << endl;
    cin >> b;
    return b;
}
char mainMenuUser()
{
    cout << "Main Menu User: " << endl;
    cout << "_______________________________________________________" << endl;
    cout << "1. Add new books." << endl;
    cout << "2. View books." << endl;
    cout << "3. Sort books by price order." << endl;
    cout << "4. Add reviews." << endl;
    cout << "5. Check reviews." << endl;
    cout << "6. Buy books." << endl;
    cout << "7. Return books." << endl;
    cout << "8. Exit." << endl;
    cout << "Your option: " << endl;
    cin >> b;
    return b;
}

//to clear the screen....

void clearScreen()
{
    cout << "Enter any character to continue...";
    getch();
    system("cls");
}

// to display the books with name, type, price and quantity....

void displayBooks(string name, string type, int price, int quantity)
{
    cout << "Name: " << name << "\t";
    cout << "Book type: " << type << "\t";
    cout << "Price: " << price << "\t";
    cout << "Quantity: " << quantity << endl;
}

// to sort the books by price order....

void sortBooks()
{
    cout << "Main Menu: 3. SORT BOOKS: " << endl;
    for (int i = 0; i <= count - 1; i++)
    {
        for (int j = 0; j <= count - 1; j++)
        {
            int temp_quantity, temp_price;
            string temp_name, temp_type;

            if (price[i] < price[j])
            {
                temp_price = price[i];
                price[i] = price[j];
                price[j] = temp_price;

                temp_name = name[i];
                name[i] = name[j];
                name[j] = temp_name;

                temp_quantity = quantity[i];
                quantity[i] = quantity[j];
                quantity[j] = temp_quantity;

                temp_type = type[i];
                type[i] = type[j];
                type[j] = temp_type;
            }
        }
    }
    for (int i = 0; i <= count - 1; i++)
    {
        displayBooks(name[i], type[i], price[i], quantity[i]);
    }
}

// to check the books that are out of stock....

void outOfStock()
{
    for (int i = 0; i <= count - 1; i++)
    {
        if (quantity[i] == 0)
        {
            cout << name[i] << " is out of stock.";
        }
        else
        {
            cout << "All books are in stock.";
        }
    }
}

// to allow the user to check reviews.....

void Review(string book_name, string book_review)
{
    cout << "Book name: " << book_name << endl;
    cout << "Review: " << book_review << endl;
}