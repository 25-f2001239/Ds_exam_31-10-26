# Last-minute exam guide

Each `.c` file is a separate answer. In an exam, write the headers, `main`, input, the core loop/logic, then output. The short versions omit extra prompts so the algorithm is easy to see.

## Input patterns

- **Array programs 01–04:** first enter `n`, then enter `n` integers. In program 04, enter the new value and its 1-based position after the array.
- **05 Decimal to octal:** enter one non-negative decimal integer.
- **06 Lucky number:** enter an integer from 1 to 1000. It uses the classic lucky-number sieve.
- **07 Josephus:** enter number of people, then step size.
- **08 Strong number:** enter one non-negative integer.
- **09 Concatenation:** enter two words. **10–11:** enter one line. **12:** enter text word, then pattern word.
- **13 Stack and queue:** enter choices repeatedly: `1 value` push, `2` pop, `3 value` enqueue, `4` dequeue, `0` stop.
- **14 Circular queue:** `1 value` enqueue, `2` dequeue, `3` display, `0` stop.
- **15 Infix to postfix:** enter an expression with single-character operands, such as `a+b*c`.
- **16 Dynamic stack:** `1 value` push, `2` pop, `3` display, `0` stop.
- **17 Postfix evaluation:** enter space-separated tokens, for example `12 3 + 2 *`.

## Remember these core ideas

- **Frequency / repeated / unique:** nested loops compare array elements.
- **Insertion:** move elements right from the end, then place the new value.
- **Decimal to octal:** recursively print `n / 8`, then print `n % 8`.
- **Josephus:** `J(1,k)=0`; `J(n,k)=(J(n-1,k)+k)%n`; add one for a 1-based answer.
- **Strong number:** add the factorial of each digit and compare the sum with the original number.
- **Stack:** push/pop at the top (last in, first out). **Queue:** insert at rear, remove from front (first in, first out).
- **Circular queue:** advance indices with `(index + 1) % capacity`.
- **Infix to postfix:** send operands directly to output; hold operators on a stack until precedence says to pop.
- **Postfix evaluation:** push numbers; when an operator appears, pop right operand then left operand, calculate, and push the answer.
