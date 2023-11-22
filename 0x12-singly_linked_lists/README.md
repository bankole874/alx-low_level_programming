# 🦾 0x12. C - Singly linked lists

Data Structures.

## 🛠 Skills
- Linked lists

Data structure for this project:

```bash
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## 👨‍💻 Tasks and Description
| Tasks             | Description                                                                |
| ----------------- | ------------------------------------------------------------------ |
| `0. Print list` | Write a function that prints all the elements of a list_t list. |
| `1. List length` | Write a function that returns the number of elements in a linked list_t list. |
| `2. Add node` | Write a function that adds a new node at the beginning of a list_t list. |
| `3. Add node at the end` | WWrite a function that adds a new node at the end of a list_t list. |
| `4. Free list` | Write a function that frees a list_t list. |

## 🚀 Tech Stack

**VM(s):** Ubuntu 20.04
