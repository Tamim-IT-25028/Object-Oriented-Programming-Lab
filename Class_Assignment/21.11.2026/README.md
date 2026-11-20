
# Task 1: Class and Object

## 1. Class Name and Object

- **Class Name:** `Student`
- **Object:** `s1`

## 2. Data Members and Member Function

- **Data Members:**
  - `name`
  - `studentID`
- **Member Function:**
  - `displayInfo()`

## 3. How the Object Accesses the Class Members

The object `s1` uses the dot (`.`) member access operator to read from, write to, or call public members of `Student`:

- `s1.name = "Rahim";` assigns `"Rahim"` to `s1`'s `name` data member.
- `s1.studentID = 210601;` assigns `210601` to `s1`'s `studentID` data member.
- `s1.displayInfo();` invokes the `displayInfo()` member function on `s1`, printing:

**Output:**

```text
Name: Rahim
ID: 210601
```

---

# Task 2: Access Specifiers (private and public)

## 1. `private` and `public` Members

- **`private` member:** `balance` (of type `double`), accessible only inside `BankAccount` member functions.
- **`public` members:**
  - `setBalance(double amount)`: setter member function.
  - `getBalance()`: getter member function.

## 2. Direct Access from `main()` and Compilation Error

**Code:**

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    void setBalance(double amount) {
        balance = amount;
    }
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.balance = 5000.0;
    cout << acc.balance << endl;
    return 0;
}
```

**Output:**

```text
(compilation error output here)
```

**Explanation of the error:**
The compiler rejects `acc.balance` because `balance` is `private` and `main()` is outside the `BankAccount` class.

## How Getter and Setter Functions Provide Controlled Access

- **Validation in Setters (`setBalance`):** A setter acts as a gatekeeper. You can check conditions (such as `amount >= 0`) before updating `balance`, preventing invalid states like negative balances.
- **Controlled Reading via Getters (`getBalance`):** A getter exposes the value safely without giving callers direct write access to the underlying variable.

---

# Task 3: Constructors

## 1. Both Constructors

- **Default constructor:** `Student()` (takes no parameters).
- **Parameterized constructor:** `Student(string n, int i)`

## 2. When Each Constructor Is Called

- **`Student()` (Default constructor):** Called automatically when a `Student` object is instantiated without arguments, for example `Student s1;` in `main()`, which sets `name` to `"Unknown"` and `id` to `0`.
- **`Student(string n, int i)` (Parameterized constructor):** Called automatically when a `Student` object is instantiated with `(string, int)` arguments, for example `Student s2("Rahim", 210601);` in `main()`, which initializes `name` to `n` and `id` to `i`.

## Three Objects Using the Parameterized Constructor & Independent Data Observation

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
public:
    Student() {
        name = "Unknown";
        id = 0;
    }
    Student(string n, int i) {
        name = n;
        id = i;
    }
    void display() {
        cout << name << " " << id << endl;
    }
};

int main() {
    Student s1;
    Student s2("Rahim", 210601);
    Student s3("Karim", 210602);
    Student s4("Nadia", 210603);
    Student s5("Tariq", 210604);

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    return 0;
}
```

---

# Task 4: Student Information Management

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    string department;
    int semester;
public:
    void setInformation(int id, string n, string dept, int sem) {
        studentID = id;
        name = n;
        department = dept;
        semester = sem;
    }
    void displayInformation() {
        cout << "ID: " << studentID << ", Name: " << name
             << ", Dept: " << department << ", Semester: " << semester << endl;
    }
};

int main() {
    Student s1, s2, s3, s4;
    s1.setInformation(25028, "Tamim", "ICT", 2);
    s2.setInformation(25016, "Monir", "ICT", 2);
    s3.setInformation(25011, "Abedin", "ICT", 2);
    s4.setInformation(25015, "Kawser", "ICT", 2);

    s1.displayInformation();
    s2.displayInformation();
    s3.displayInformation();
    s4.displayInformation();
    return 0;
}
```

**Output:**

```text
ID: 25028, Name: Tamim, Dept: ICT, Semester: 2
ID: 25016, Name: Monir, Dept: ICT, Semester: 2
ID: 25011, Name: Abedin, Dept: ICT, Semester: 2
ID: 25015, Name: Kawser, Dept: ICT, Semester: 2
```
