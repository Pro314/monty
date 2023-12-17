#ifndef MONTY_H
#define MONTY_H

/**
 * struck stack_s - doubly linked list representation of a stack
 * @n: integer
 * @next: points to the next element
 * @prev: points to the previous element
 * Description: doubly linked list node structure
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
}stack_t;

/**
 * struct instructions_s: opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and  it's function
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


#endif /* MONTY_H */
