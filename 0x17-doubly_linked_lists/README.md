
# 🦾 0x17. C - Doubly linked lists

- [What is a Doubly Linked List](https://intranet.alxswe.com/rltoken/C5_IRM981SVn8oA8RP3gag)


```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## 🛠 To Learn
- What is a doubly linked list
- How to use doubly linked lists
- Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
- Start to look for the right source of information without too much help


## 👨‍💻 Tasks and Description
| Tasks             | Description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| `0. Print list` | Write a function that prints all the elements of a dlistint_t list. |
| `1. List length`| Write a function that returns the number of elements in a linked dlistint_t list. |
| `2. Add node` | Write a function that adds a new node at the beginning of a dlistint_t list. |
| `3. Add node at the end`| Write a function that adds a new node at the end of a dlistint_t list. |
| `4. Free list` | Write a function that frees a dlistint_t list. |
| `5. Get node at index`| Write a function that returns the nth node of a dlistint_t linked list. |
| `6. Sum list` | Write a function that returns the sum of all the data (n) of a dlistint_t linked list. |
| `7. Insert at index`| Write a function that inserts a new node at a given position. |
| `8. Delete at index` | Write a function that deletes the node at index index of a dlistint_t linked list. |
| `9. Crackme4`| Find the password for crackme4. |
| `10. Palindromes` | A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. |
| `11. crackme5`| Write a keygen for crackme5. |

## 🚀 Tech Stack

**VM(s):** Ubuntu 20.04

**Client:** C, Algorithm, Data Structure.
