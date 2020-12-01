#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char igrach = 'X';
int n;
void Draw()
{
   
  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "Red e na " << igrach << " Napishete na koi nomer iskate da postavite znak: ";
    cin >> a;

 

    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = igrach;
        else
        {
            cout << "tova mqsto veche se izpolzva!" << endl;
            Input();
        }
        
    }

 else if (a>=10)
    {
       
            cout << "Ami ne moje da slagash tam!" << endl;
            Input();
        
        
    }


}
void TogglePlayer()
{
    if (igrach == 'X')
        igrach = 'O';
    else
        igrach = 'X';
}
char Win()
{
    //purvi igrach
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

 

    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

 

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

 

    //vtori igrach
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

 

    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

 

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';

 

    return '/';
}
int main()
{
    int nstart;
    cout << "Tova e Morski shah"<< endl;
    cout << "Natisni 1 da zapochnesh"<< endl;
    cout << "Natisni 0 za da zatvorish programata"<<endl;
    cin >> nstart;
    if(nstart==1){
        n = 0;
        Draw();
        while (1)
        {
            n++;
            Input();
            Draw();
            if (Win() == 'X')
            {
                cout << "X pecheli!" << endl;
                break;
            }
            else if (Win() == 'O')
            {
                cout << "O pechelo!" << endl;
                break;
            }
            else if (Win() == '/' && n == 9)
            {
                cout << "na ravno" << endl;
                break;
            }
            TogglePlayer();
        }
        system("pause");
        return 0;
    }
    else {
        system("pause");
        return 0;
    }
}
