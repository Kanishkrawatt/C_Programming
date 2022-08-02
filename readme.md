## [DSA]() 
In Computer Terms, A data structure is a Specific way to store and organize in a computer's memory so that these data can be use efficiently later. 

#### Classification of DS
* Linear Vs Non-Linear Data Structure
* Homogenous Vs Non-Homogenous Data Structure
* Static Vs Dynamic 
* Primitive Vs Non-Primitive

#### Types of DS
* [Array](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/array) 
* [LinkedList](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/linkedList)
* [Stack](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/stacks)
* [Queues](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/queue)
* [Trees](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/trees)
* [Graphs]()

### [Array](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/array)
Array are collection of Homogenous Elements in Continious Order
* It is Linear
* It is Homogenous
* It is Static
* It is Non-Primitive 
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; Elements
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

### [Linked List](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/linkedList)
It is Collection of Nodes Where node has a Two Part First Part is Info And The second Part is Link. <br>
In Info, The Value is Stored and,<br>
In Link Part, Address of next Node is stored. <br>
There is a **Special Pointer** Which stores the **address of Fist Node** called **START**<br>
and a **Special Pointer** Which stores **NULL** in Link called **END**
<br>
  | Info | Link |  
  |-----:|-----:|
<br>

```Structure

// Structure of Node

struct Node{
    int info;           // INFO Part (can store any value)
    struct Node * Link; // Link Part (Stores The address of Next Node)
}

```
## [Stack](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/stacks)

It is based on LIFO, Last in First out , where insertion and deletion take place at one end Called Top.<br>
Insertion is known as **PUSH**<br>
Deletion is Known as **POP**  

**STACK**<br>

 | &nbsp; |    
 |--:|
 | B |
 | C |
 | D |

 ## [Queue](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/queue)
 It is Based On Fifo , where insertion take place at rare end and deletion take place at front End;


## [Trees](https://github.com/Kanishkrawatt/C_Programming/tree/main/DSA/trees)
It is a Hierarchical representation of Data



