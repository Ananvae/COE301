
using namespace std;

int main() {
    int birthYear;
    int currentYear = 2026;  // Since today is January 08, 2026

    cout << "yo what year was you born? ";
    cin >> birthYear;

    // Simple age calculation (doesn't account for whether birthday has passed yet)
    int age = currentYear - birthYear;

    cout << "boi you are " << age << " years old in 2026" << endl;

    // A more accurate message
    if (age == 1) {
        cout << "get on that Linkdn broski" << endl;
    } else if (age < 13) {
        cout << "Go to school boi" << endl;
    } else if (age < 20) {
        cout << "join the military and help defend your country" << endl;
    } else if (age < 30) {
        cout << "midlife crisis hit you yet" << endl;
    } else {
        cout << "unc" << endl;
    }

    cout << "\nYOLO!!!! " << endl;
    cout << "This is nat, the world says hello!";

    return 0;

    
}
