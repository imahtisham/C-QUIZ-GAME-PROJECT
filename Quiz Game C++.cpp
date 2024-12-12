#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int PlayQuiz(void);
    result = PlayQuiz();
    cout << "Your Total Marks : " << result << endl;
    if (result >= 4)
    {
        string choice;
        cout << " Weldone " << endl;
        cout << "Do You Want to play it again : YES or NO " << endl;
        cin >> choice;
        if (choice == "Yes" || "yes") // Continue Project    .................................
        {
            cout << PlayQuiz();
        }
        else
        {
            if (choice == "No" || "no")
            {
                cout << "NO";
            }
            cout << "GOOD LUCK WILL SEE NEXT TIME ";
        }
    }
    else
    {
        cout << "Need More Practice : " << endl;
    }
}

int PlayQuiz()
{

    int score = 0;

    char option;
    char a;
    cout << "-----------QUIZ COMPETITION--------------" << endl;
    cout << "-----------FOLLOW PROCEDURE--------------" << endl;
    cout << "Step 1 : Total 10 qs and each carry equal marks " << endl;
    cout << "Step 2 : Enter S To Start Your Quiz Game ";
    cin >> a;
    if (a == 's' || a == 'S')
    {
        cout << "Q1 : What is first letter of English?" << endl;
        cout << "(a) A    (b) B    (c) C    (d) D " << endl;
        cin >> option;
        if (option == 'A')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q2 : What is second letter of English?" << endl;
        cout << "(a) B    (b) A    (c) C    (d) D " << endl;
        cin >> option;
        if (option == 'B')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q3 : What is third letter of English?" << endl;
        cout << "(a) A    (b) B    (c) C    (d) D " << endl;
        cin >> option;
        if (option == 'C')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q4 : What is forth letter of English?" << endl;
        cout << "(a) A    (b) B    (c) C    (d) D " << endl;
        cin >> option;
        if (option == 'D')
        {
            score = score + 1;
        }
        else
        {
            score = score + 0;
        }

        cout << "Q5 : What is fifth letter of English?" << endl;
        cout << "(a) A    (b) B    (c) E    (d) D " << endl;
        cin >> option;
        if (option == 'E')
        {
            score = score + 1;
            return score;
        }
        else
        {
            score = score + 0;
        }
    }

    else
    {
        cout << "ENter s to start quiz " << endl;
    }
    return score;
}