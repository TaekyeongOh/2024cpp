#include <iostream>
using namespace std;

int main() {

    int score;
    char grade;

    //cout << "������ �Է��ϼ���: ";
    //cin >> score;

    /*
    if (score < 0 || score > 100) {
        cout << "�߸��� ���� �Է��Դϴ�.\n";
        return 0;
    }
    */

    do
    {
        cout << "������ �Է��ϼ���: ";
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

    cout << "������ " << grade << "�Դϴ�." << endl;

    return 0;
}
