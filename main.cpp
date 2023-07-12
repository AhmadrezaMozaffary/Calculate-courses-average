#include <iostream>
using namespace std;

//Clear Screen Function
char clrscr(int a)
{
    for (int j = 1; j <= a; j++)
        cout << endl;
    return 0;
}

//Print Stars
char star(int b)
{
    for (int j = 0; j < b; j++)
    {
        cout << "* ";
    }
    cout << endl;
    return 0;
}


int main()
{
        char ans, poll;
    do
    {
        int n, i, credit, creditSum = 0, temp2 = 0;
        float mark, markSum = 0, mtoc = 0, temp1 = 0, temp3 = 0, average = 0;
        star(10);
        cout << "Enter number of your courses : ";
        cin >> n;

        //Receive Data ( marks and credits)
        for (i = 1; i <= n; i++)
        {
        validMark:
            cout << endl << " Enter your mark in course " << i << " : ";
            cin >> mark;
            if (mark < 0)
            {
                cout << "Out of range !" << endl;
                goto validMark;
            }
            else if (mark > 20)
            {
                cout << "Out of range !" << endl;
                goto validMark;
            }
            temp1 += mark;

        validCredit:
            cout <<" Enter course's credit : ";
            cin >> credit;
              if (credit < 1)
            {
                cout << "Out of range !" << endl;
                goto validCredit;
            }
            else if (credit > 4)
            {
                cout << "Out of range !" << endl;
                goto validCredit;
            }
            temp2 += credit;
            temp3 += (mark * credit);
        }

        //Calculate the average of courses
        markSum = temp1;
        creditSum = temp2;
        mtoc = temp3;

        average = mtoc / creditSum;
        cout << endl << "Sum Credit = " << creditSum << endl << "Average(Mean) = " << average << endl;
        if( average>=17) {
            cout << endl << " Congratulations! you are grade \"A\" " << endl;
        }
        cout << " Do you want to continue? (y/n) ";
        cin >> ans;
    } while (ans == 'y');
    cout << "Is it help full? (y/n)" << endl;
    cin >> poll;
    if(poll == 'y'){
        cout << endl << "Thanks🤩! - Please give a star⭐️ " << endl;
        clrscr(2);
    }else{
        cout << endl << "Ops🥲! I'm so sorry! Please say why? \n" << " send Email :\tam2002.de@gmail.com " << endl;
        clrscr(2);
    }
    return 0;
}
