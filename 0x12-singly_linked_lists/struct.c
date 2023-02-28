/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: ponts to the next node
 * Description: singly linked list node structure
 * all files in this project use this format
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next:
} list_t;
