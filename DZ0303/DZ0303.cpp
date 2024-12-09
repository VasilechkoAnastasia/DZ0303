#include <iostream>
using namespace std;

//1
/*template <typename T>
struct Node 
{
    T data;   
    Node* next;     
    Node* prev;   

    Node(T val) : data(val), next(nullptr), prev(nullptr) {}
};

template <typename T>
class List 
{
private:
    Node<T>* head;  
    Node<T>* tail;
public:
    List() : head(nullptr), tail(nullptr) {}

    ~List() 
    {
        clear();
    }

    void append(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        if (!head) 
        {
            head = tail = newNode;
        }
        else 
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void prepend(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        if (!head) 
        {
            head = tail = newNode;
        }
        else 
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void clear() 
    {
        while (head) 
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    void print() const 
    {
        Node<T>* current = head;
        while (current) 
        {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void printReverse() const 
    {
        Node<T>* current = tail;
        while (current) 
        {
            cout << current->data << " <-> ";
            current = current->prev;
        }
        cout << "nullptr" << endl;
    }

    bool isEmpty() const 
    {
        return head == nullptr;
    }
};

int main() 
{
    List<int> intList;
    intList.append(1);
    intList.append(2);
    intList.append(3);

    cout << "Integer list:" << endl;
    intList.print();

    List<string> stringList;
    stringList.append("Hello");
    stringList.append("World");

    cout << "String list: " << endl;
    stringList.print();
}*/

//2
/*template <typename T>
struct Node 
{
    T data;        
    Node* next;     
    Node* prev;   

    Node(T val) : data(val), next(nullptr), prev(nullptr) {}
};

template <typename T>
class List 
{
private:
    Node<T>* head;  
    Node<T>* tail;  
public:
    List() : head(nullptr), tail(nullptr) {}

    ~List() 
    {
        clear();
    }

    void append(T value) 
    {
        Node<T>* newNode = new Node<T>(value);
        if (!head) 
        {
            head = tail = newNode;
        }
        else 
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void clear() 
    {
        while (head) 
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }

    void print() const 
    {
        Node<T>* current = head;
        while (current) 
        {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    List operator+(const List& other) const 
    {
        List result;

        Node<T>* current = head;
        while (current)
        {
            result.append(current->data);
            current = current->next;
        }

        current = other.head;
        while (current) 
        {
            result.append(current->data);
            current = current->next;
        }

        return result;
    }

    List operator*(const List& other) const 
    {
        List result;
        unordered_set<T> elements;

        Node<T>* current = other.head;
        while (current) 
        {
            elements.insert(current->data);
            current = current->next;
        }

        current = head;
        while (current) 
        {
            if (elements.find(current->data) != elements.end()) 
            {
                result.append(current->data);
            }
            current = current->next;
        }

        return result;
    }

    bool isEmpty() const 
    {
        return head == nullptr;
    }
};

int main() 
{
    List<int> list1;
    list1.append(1);
    list1.append(2);
    list1.append(3);

    List<int> list2;
    list2.append(2);
    list2.append(3);
    list2.append(4);

    cout << "List 1: " << endl;
    list1.print();

    cout << "List 2: " << endl;
    list2.print();

    List<int> unionList = list1 + list2;
    cout << "Union of List 1 and List 2: " << endl;
    unionList.print();

    List<int> intersectionList = list1 * list2;
    cout << "Intersection of List 1 and List 2: " << endl;
    intersectionList.print();
}*/