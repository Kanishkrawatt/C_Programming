## [DSA]() 
In Computer Terms, A data structure is a Specific way to store and organize in a computer's memory so that these data can be use efficiently later. 

#### Classification of DS
* Linear Vs Non-Linear Data Structure
* Homogenous Vs Non-Homogenous Data Structure
* Static Vs Dynamic 
* Primitive Vs Non-Primitive

#### Types of DS
* [Array]() 
* [LinkedList]()
* [Stack]()
* [Queues]()
* [Trees]()
* [Graphs]()

### [Array]()
Array are collection of Homogenous Elements in Continious Order
* It is Linear
* It is Homogenous
* It is Static
* It is Non-Primitive 
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Elements
<br>

| A | B | C | D |   
|--:|--:|--:|--:|
| 0 | 1 | 2 | 3 |  

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Index

<br>

```Array

// Initialization of Array
int Arr[]= {1,2,3,4,5};

// Array Declaration 
int Arr[Size_Of_Array];

``` 
<br>

### [Linked List]()
It is Collection of Nodes Where node has a Two Part First Part is Info And The second Part is Link. 
In Info, The Value is Stored and,
In Link Part, Address of next Node is stored.
There is a **Special Pointer** Which stores the **address of Fist Node** called **START**
and a **Special Pointer** Which stores **NULL** in Link called **END**
<br>
  | Info | Link |  
  |-----:|-----:|
<br>
``` Structure Of Linked List

// Structure of Node

struct Node{
    int info;           // INFO Part (can store any value)
    struct Node * Link; // Link Part (Stores The address of Next Node)
}

```
