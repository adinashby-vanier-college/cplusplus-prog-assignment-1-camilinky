/* ONLY WRITE THE ANSWER TO THE QUESTIONS IN THE CORRESPONDING METHODS */

#ifndef LABFILE_HPP
#define LABFILE_HPP

int sum(int a, int b) {

    int sum = a + b;

    return sum;
        
}

char findGrade(int score) {

    char findGrade(int score); {
        if (score >= 90) {
            return 'A';
        }
        else if (score >= 80) {
            return 'B';
        }
        else if (score >= 70) {
            return 'C';
        }
        else if (score >= 60) {
            return 'D';
        }
        else {
            return 'F';
        }
    }


    return '.';
}

bool isVowel(char ch) {

    ch = tolower(ch);
    bool isVowel(char ch); {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        else {
            return false;
        }
    }

    return '.';
}

bool isLeapYear(int year) {

    bool isLeapYear = false;
    if (year % 4 == 0) {
        isLeapYear = true;
    }
    if (year % 100 == 0) {
        isLeapYear = false;
    }
    if (year % 400 == 0) {
        isLeapYear = true;
    }
    return isLeapYear;
}

int max(int a, int b, int c) {
    if (c < a && b < a) {
        return a;
    }
    if (a < c && b < c) {
        return c;
    }
    if (a < b && c < b) {
        return b;
    }
    if (a == b && b == c) {
        return a;
    }


    return 0;
}

#endif
