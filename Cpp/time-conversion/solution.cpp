#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s)
{
    // 'stoi': it is used for converting a string to integer.
    int hours = stoi(s.substr(0, 2));   // eg. 12:01:00 PM --> 12
    int minutes = stoi(s.substr(3, 2)); // eg. 12:01:00 PM --> 01
    int seconds = stoi(s.substr(6, 2)); // eg. 12:01:00 PM --> 00
    string am_pm = s.substr(8, 2);      // eg. 12:01:00 PM --> PM

    // If is it 'AM', and hours are equal to 12, then assign hours to '0'.
    if (am_pm == "AM")
    {
        if (hours == 12)
        {
            hours = 0;
        }
    }
    // else if it is 'PM', and hours are not equal to 12, then increment the value of hours by '12'.
    // eg. if input is 'hours = 02:30:00 PM', then output should be '14:30:00'.
    else
    {
        if (hours != 12)
        {
            hours += 12;
        }
    }

    string formattedHours = (hours < 10) ? '0' + to_string(hours) : to_string(hours);
    string formattedMinutes = (minutes < 10) ? '0' + to_string(minutes) : to_string(minutes);
    string formattedSeconds = (seconds < 10) ? '0' + to_string(seconds) : to_string(seconds);

    return formattedHours + ":" + formattedMinutes + ":" + formattedSeconds;
}

int main()
{
    string s;
    cout << "Enter time in the format of hh:mm:ssAM or hh:mm:ssPM: ";
    cin >> s;

    string result = timeConversion(s);
    cout << "Result: " << result << endl;
    return 0;
}