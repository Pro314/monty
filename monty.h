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

/**
 * struck arg_s - hold variables
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of text read from stream
 * @line_number: for tracking current line number
 * @tokens: used to store tokens from line
 * @instruction: a valid instruction froma line
 * @n_token: number of tokens created from line
 * Description: Hold bvariables that will be used
 */

typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
} arg_t

void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
