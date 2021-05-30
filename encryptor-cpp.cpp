#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;

/// <summary>
/// Encrypt the string given based on the passcode given(string)
/// </summary>
/// <param name="message"></param>
/// <param name="passcode"></param>
/// <returns>the encrypted string</returns>
string encrypt(string message, string passcode) {
    int shift = passcode.length();
    for (int i = 0; i < message.length(); i++) message[i] += shift;
    return message;
}

/// <summary>
/// Unencrypt the string given based on the passcode given(string)
/// </summary>
/// <param name="message"></param>
/// <param name="passcode"></param>
/// <returns>the unencrypted string</returns>
string unencrypt(string message, string passcode) {
    int shift = passcode.length();
    for (int i = 0; i < message.length(); i++) message[i] -= shift;
    return message;
}

int main()
{
    string userselect;
    cout << "Welcome to Damian's Encryptor.exe **C++ Edition**" << endl;
    cout << "-please enter 'E' to encrypt or 'U' to unencrypt;" << endl;
    cin >> userselect;
    if (userselect == "E" || userselect == "e")
    {
        string message, passcode;
        cout << "Please enter you message you wish to encrypt" << endl;
        cout << "Please instead of using space between words, use '-' or '_'" << endl;
        cin >> message;
        cout << "Please enter a password(please do not lose this if you wish to unencrypt the message)" << endl;
        cin >> passcode;
        string encrypted_message = encrypt(message, passcode);
        cout << "The encrypted message is:" << endl;
        cout << encrypted_message << endl;
        cout << "And the password is:" << endl;
        cout << passcode << endl;
        cout << "*This message was encrypted using Damian's Encryptor.exe*" << endl;
    }
    else if (userselect == "U" || userselect == "u")
    {
        string message, passcode;
        cout << "Please enter you message you wish to unencrypt" << endl;
        cin >> message;
        cout << "Please enter the encryption password" << endl;
        cin >> passcode;
        string unencrypted_message = unencrypt(message, passcode);
        cout << "The unencrypted message is:" << endl;
        cout << unencrypted_message << endl;
        cout << "*This message was unencrypted using Damian's Encryptor.exe*" << endl;
    }
    else cout << "Wrong Input" << endl;
}