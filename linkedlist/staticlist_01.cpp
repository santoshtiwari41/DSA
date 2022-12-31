#include <iostream>
using namespace std;
class list
{
private:
    int *arr, size, n, i, pos, e,flag=0;

public:
    list(int size)
    {
        this->size = size;
        arr = new int[size];
    }
    void creation()
    {
        cout << endl
             << "Enter the number of nodes : ";
        cin >> n;
        cout << endl
             << "Enter the elements in nodes : ";
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void insertion(int element)
    {
        cout << endl
             << " Enter the position you want to insert : ";
        cin >> pos;
        if (pos > n+1)
        {
            cout << endl
                 << "please enter the valid index ";
            ;
        }
        else
        {
            for (i = size - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = element;
        n++;
        }
        
    }

    void deletion()
    {
        cout << "\n Enter the position u want to delete : ";
        cin >> pos;

        if (pos >n)
        {
            cout << "\n Invalid Location : ";
        }

        else
        {
            for (i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
        }
    }

    void searching()
    {
        cout << endl
             << "Enter the element you want to check : ";
        cin >> e;
        for (i = 0; i < n; i++)
        {
            if (e == arr[i])
            {
                flag++;
                break;
                
            }
            
            
        }
              if(flag==1){
                cout<<endl<<" element is present in list ";
            }
            else
            {
                cout << endl
                     << "element is not present in the list ";
            }
    }
    void display()
    {
            cout << "\n The elements in the list are : ";
            for (i = 0; i < n; i++)
            {
                cout << endl
                     << arr[i];
            }
    }
};

int main()
{
    list l(10);
    int ch, element;
    while (1)
    {
        cout << endl
             << " CREATION : 1 ";
        cout << endl
             << " INSERTION : 2 ";
        cout << endl
             << " DELETION : 3 ";
        cout << endl
             << " SEARCHING : 4 ";
        cout << endl
             << " DISPLAY :5 ";
        cout << endl
             << " EXIT : 6 ";
        cout << endl
             << "enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            l.creation();
            break;

        case 2:
            cout << endl
                 << " enter the element you want to insert : ";
            cin >> element;
            l.insertion(element);
            break;

        case 3:
            l.deletion();
            break;

        case 4:
            l.searching();
            break;

        case 5:
            l.display();
            break;

        case 6:
            exit(0);

        default:
            cout << endl
                 << "wrong choice .....!";
        }
    }
    return 0;
}