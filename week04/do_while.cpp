#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;

    //cout << "점수를 입력하세요: ";
    //cin >> score;

    /*
    if (score < 0 || score > 100) {
        cout << "잘못된 점수 입력입니다.\n";
        return 0;
    }
    */

    do
    {
        cout << "점수를 입력하세요: ";
        cin >> score;
    } while (score<0 || score>100);

    switch ((score) / 10) {
    case 10:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }

    cout << "학점은 " << grade << "입니다." << endl;

    return 0;
}
