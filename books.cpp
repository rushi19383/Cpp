#include <iostream>
#include <string>
using namespace std;
#define bookLIMIT 100
int count = 0;
int countid = 0;

class Library
{

public:
    string bookName[bookLIMIT];
    string authorName[bookLIMIT];
    int flag = 0;
    int aflag = 0;
    int id[bookLIMIT];

    void adddata()
    {

        cout << "Enter the name of book" << endl;
        cin.get();
        getline(cin,bookName[count]) ;
        cout << "Enter the author name " << endl;
        cin.get();
        getline(cin,authorName[count]) ;

        count++;
        cout << "Enter the id of book" << endl;
        cin >> id[countid];

        countid++;
    }
    void deletebyauthorname(){
        cout << "Enter the author to delete :" << endl;
        string arbn;
        cin.get();

        getline(cin,arbn);
        for (int i = 0; i < count; i++)
        {
            if (authorName[i] == arbn)
            {

                for (int j = i; j < count; j++)
                {
                    authorName[j] = authorName[j + 1];
                }
                for (int j = i; j < count; j++)
                {
                    bookName[j] = bookName[j + 1];
                }

                for (int j = i; j < countid; j++)
                {
                    id[j] = id[j + 1];
                }
                
                aflag = 1;
                count--;
                countid--;
            }
        }

        if (aflag == 0)
        {
            cout << "not found" << endl;
        }
         

    }
    void deletebybookname()
    {
        cout << "Enter the book to delete :" << endl;
        string rbn;
        cin.get();
        getline(cin,rbn);
        for (int i = 0; i < count; i++)
        {
            if (bookName[i] == rbn)
            {

                for (int j = i; j < count; j++)
                {
                    bookName[j] = bookName[j + 1];
                }
                for (int j = i; j < count; j++)
                {
                    authorName[j] = authorName[j + 1];
                }

                for (int j = i; j < countid; j++)
                {
                    id[j] = id[j + 1];
                }
                flag = 1;
                count--;
                countid--;
            }
        }

        if (flag == 0)
        {
            cout << "not found" << endl;
        }
    }
    void displaydata()
    {
        cout << "books are" << endl;
        for (int i = 0; i < count; i++)
        {

            cout << bookName[i] << endl;
            cout<<"author name"<<endl;
            cout << authorName[i] << endl;

            cout << "id are" << endl;
            cout << id[i] << endl;
        }
    }
    //for id//

    void show_Options()
    {
        cout << "\n1) Add Book\n";
        cout << "2) Delet Book\n";
        cout << "3) Display Books\n";
        cout << "4) Exit\n";
        cout << "\nEnter your choice: ";
    }
     void show_deleteOptions()
    {
        cout << "\n1)Delete by author name\n";
        cout << "2) Delet by  Book name \n";
        
        cout << "\nEnter your choice: ";
    }
};

int main()
{
    Library c1;
    while (2 < 3)
    {
        int choice;
        int deletechoice;
        c1.show_Options();

        cin >> choice;
        if (choice == 4)
        {
            cout << "\nsuccessfully exited!!\n\n";
            break;
        }
        else
        {
            switch (choice)

            {
            case 1:
                c1.adddata();
                break;
            case 2:
                c1.show_deleteOptions();
                cin>>deletechoice;
                switch (deletechoice)
                {   
                    case 1:
                        c1.deletebyauthorname();
                        break ;
                    case 2:
                        c1.deletebybookname();
                        break ;
                    default:
                        cout << "enter valid choice\n";
                        break;


                }
               
                break;
            case 3:
                c1.displaydata();
                break;
            default:
                cout << "enter valid choice\n";
                break;
            }
        }

        /* code */
    }

    return 0;
}