#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stdlib.h>

// Task 1
double fraction (double x) {
    int y = x;
    return x - y;
}

void Task1_1() {
    double x;
    std::cout << "Enter a floating‑point number: ";
    std::cin >> x;
    std::cout << "The floating-point part of number: " << fraction(x) << std::endl;
}

//Task 2
int charToNum (char x){
    return x - 48;
}

void Task1_3() {
    char x;
    std::cout << "Enter a character from 0 to 9:";
    std::cin >> x;
    std::cout << "The number of the symbol: " << charToNum(x) << std::endl;
}

//Task 3
bool is2Digits (int x) {
    return (x % 99 == x && (x > 10 || x < 10)) ? true : false;
}

void Task1_5(){
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    is2Digits(x) ? std::cout << "The number is two‑digit" : std::cout << "The number isn`t two‑digit.";
    std::cout << std::endl;
}

//Task 4
bool isInRange (int a, int b, int num) {
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    return (num > a && num < b) ? true : false;
}

void Task1_7() {
    int a, b, num;
    std::string s;
    std::cout << "Enter the range boundaries: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);
    ss >> a >> b;
    std::cout  << std::endl << "Enter the number you want to check for compliance with the range: ";
    std::cin >> num;
    isInRange(a, b, num) ? std::cout << "Number is in range" : std::cout << "Number is out of range";
    std::cout << std::endl;
}

//Task 5
bool isEqual(int a, int b, int c){
    return (a == b && b == c) ? true : false;
}

void Task1_9(){
    int a, b, c;
    std::string s;
    std::cout << "Enter tree number to chek is they equal: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);
    ss >> a >> b >> c;
    isEqual(a, b, c) ? std::cout << "The numbers is equal" : std::cout << "The numbers isn`t equal";
    std::cout << std::endl;
}

//Task 6
int abs (int x) {
    return (x >= 0) ? x : -x;
}

void Task2_1() {
    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;
    std:: cout << "The absolute value of number: " << abs(x) << std::endl;
}

//Task 7
bool is35 (int x) {
    return ((x % 3 == 0 || x % 5 == 0) && !(x % 3 == 0 && x % 5 == 0)) ? true : false;
}

void Task2_3() {
    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;
    is35(x) ? std::cout << "Number is divisible on 3 or 5" : std::cout << "Number isn`t divisible on 3 or 5";
}

//Task 8
int max3 (int x, int y, int z){
    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    if (y > z) {
        y = y + z;
        z = y - z;
        y = y - z;
    }
    return z;
}

void Task2_5() {
    int x, y, z;
    std::string s;
    std::cout << "Enter tree number: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);
    ss >> x >> y >> z;
    std::cout << "The biggest number is: " << max3(x, y, z) << std::endl;
}

//Task 9
int sum2 (int x, int y) {
    int sum = x + y;
    return (sum >= 10 || sum <= 19 ) ? 20 : sum;
}

void Task2_7() {
    int x, y;
    std::string s;
    std::cout << "Enter two number: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);
    ss >> x >> y;
    std::cout << "The sum is: " << sum2(x, y) << std::endl;
}

//Task 10
std::string day (int x) {
    switch (x) {
        case (1): {
            return "monday";
        }
        case (2): {
            return "tuesday";
        }
        case (3): {
            return "wednesday";
        }
        case (4): {
            return "thursday";
        }
        case (5): {
            return "friday";
        }
        case (6): {
            return "saturday";
        }
        case (7): {
            return "sunday";
        }
    }
    return "this day of the week doesn’t exist";
}

void Task2_9() {
    int x;
    std::cout << "Enter the day of the week";
    std::cin >> x;
    std::cout << day(x) << std::endl;
}

//Task 11
std::string listNums (int x) {
    std::string s;
    for (int i = 0; i <= x; i++) {
        s.append(std::to_string(i));
        s.append(" ");
    }
    return s;
}

void Task3_1() {
    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;
    std::cout << "The sequence of numbers: " << listNums(x) << std::endl;
}

//task 12
std::string chet (int x){
    std::string s;
    for (int i = 0; i <= x; i += 2){
        s.append(std::to_string(i));
        s.append(" ");
    }
    return s;
}

void Task3_3() {
    int x;
    std::cout << "Enter the number: ";
    std::cin >> x;
    std::cout << "The sequence of numbers: " << chet(x) << std::endl;
}

//task 13
int numLen (long x) {
    int count = 0;
    for (int i = x; i != 0; i /= 10, count++);
    return count;
}

void Task3_5() {
    long x;
    std::cout << "Enter the num: ";
    std::cin >> x;
    std::cout << "The len of num is: " << numLen(x) << std::endl;
}

//task 14
 void square (int x){
     std::string s;
     for (int i = 0; i < x; i++) {
         s.append("*");
     }
     for (int i = 0; i < x; i++) {
         std::cout << s << std::endl;
     }
 }

 void Task3_7() {
     int x;
     std::cout << "Enter square size: ";
     std::cin >> x;
     square(x);
 }

 //task 15
void rightTriangle (int x){
      for (int star = 1, space = x; space > 0; star++, space--) {
          for (int j = space-1; j > 0; j--) {
              std::cout << " ";
          }
          for (int j = star; j > 0; j--) {
              std::cout << "*";
          }
          std::cout << std::endl;
      }
}

void Task3_9(){
    int x;
    std::cout << "Enter tringle size: ";
    std::cin >> x;
    rightTriangle(x);
}

//task 16
int findFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

void Task4_1() {
    int x;
    std::vector<int> vec;
    std::string s;
    std::cout << "Enter numbers in array: ";
    std::getline(std::cin, s);
    std::cout << "Enter number to find: ";
    std::cin >> x;
    std::stringstream ss(s);

    int n;
    while (ss >> n) {
        vec.push_back(n);
    }
    int size_vec = vec.size();

    int arr[size_vec];
    // copy(vec.begin(), vec.end(), arr);

    std::cout << "The index of: " << findFirst(vec.data(), size_vec, x) << std::endl;
}

//task 17
 int maxAbs (int arr[], int size) {
     int max = arr[0];
     for (int i = 1; i < size; i++) {
         (arr[i] > max) ? max = abs(arr[i]) : 0 ;
     }
     return max;
}

void Task4_3() {
    std::vector<int> vec;
    std::string s;
    std::cout << "Enter numbers in array: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);

    int n;
    while (ss >> n) {
        vec.push_back(n);
    }
    int size_vec = vec.size();

    int arr[size_vec];
    // copy(vec.begin(), vec.end(), arr);

    std::cout << "The max absolute number is: " << maxAbs(vec.data(), size_vec) << std::endl;
}

//task 18
int* add(int arr[], int size_first, int ins[], int size_second, int pos) {

    int size_new = size_first + size_second;
    int* new_arr = new int[size_new];

    if (new_arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < pos; i++) {
        new_arr[i] = arr[i];
    }

    for (int i = pos; i < pos + size_second; i++) {
        new_arr[i] = ins[i - pos];
    }

    for (int i = pos + size_second; i < size_new; i++) {
        new_arr[i] = arr[i - size_second];
    }

    return new_arr;
}

void Task4_5() {
    int x;
    std::vector<int> vec;
    std::vector<int> vec_into;
    std::string s;
    std::string s_into;
    std::cout << "Enter numbers in first array: ";
    std::getline(std::cin, s);
    std::cout << "Enter numbers in array into first array: ";
    std::getline(std::cin, s_into);
    std::cout << "Enter position to join: ";
    std::cin >> x;
    std::stringstream ss(s);
    std::stringstream ss_into(s_into);

    int n;
    while (ss >> n) {
        vec.push_back(n);
    }
    while (ss_into >> n) {
        vec_into.push_back(n);
    }

    int size_vec = vec.size();
    int size_vec_into = vec_into.size();

    int arr[size_vec];
    int arr_into[size_vec_into];
    // copy(vec.begin(), vec.end(), arr);
    // copy(vec_into.begin(), vec_into.end(), arr_into);
    int* new_arr = add(vec.data(), size_vec, vec_into.data(), size_vec_into, x);
    std::cout << "The new array is: ";
    for (int i = 0; i < size_vec + size_vec_into; i++) {
        std::cout << new_arr[i] << " ";
    }
    std::cout << std::endl;
}

//task 19
int * reverseBack (int arr[], int size) {
    int* new_arr = new int [size];

    for (int i = 0, count = size-1; i < size; i++, count--) {
        new_arr[i] = arr[count];
    }

    return new_arr;
}

void Task4_7() {
    std::vector<int> vec;
    std::string s;
    std::cout << "Enter numbers in array: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);

    int n;
    while (ss >> n) {
        vec.push_back(n);
    }
    int size_vec = vec.size();

    int* arr = reverseBack(vec.data(), size_vec);

    std::cout << "The new array is: ";
    for (int i = 0; i < size_vec; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

//task 20
int * findAll (int arr[], int size, int x) {
    std::vector<int> new_vec;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            new_vec.push_back(i);
            count++;
        }
    }
    int size_vec = new_vec.size();
    int* new_arr = new int[size_vec];
    copy(new_vec.begin(), new_vec.end(), new_arr);
    return new_arr;
}

void Task4_9() {
    std::vector<int> vec;
    std::string s;
    int x;
    std::cout << "Enter numbers in array: ";
    std::getline(std::cin, s);
    std::stringstream ss(s);
    std::cout << "Enter number: ";
    std::cin >> x;

    int n;
    while (ss >> n) {
        vec.push_back(n);
    }
    int size_vec = vec.size();

    int* arr = findAll(vec.data(), size_vec, x);

    int count = 0;
    for (int i = 0; i < size_vec; i++) {
        if (vec[i] == x) {
            count++;
        }
    }

    std::cout << "The all index number in array is: ";
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
