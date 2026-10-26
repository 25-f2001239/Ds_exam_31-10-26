# Beginner C programs

Every numbered file is an independent program with its own `main`. Compile one at a time, for example: `gcc 01_array_frequency.c -o run`, then run `./run` (on Windows, `run.exe`). Read each program and trace the loops by hand before running it.

| # | Topic | Try this input / expected idea |
|---|---|---|
|1|Array frequency| `5 2 2 3 2 3` → 2 occurs 3 times; 3 occurs 2 times. A `used` array avoids counting a value twice.|
|2|First repeated value| `5 4 2 7 2 4` → 4. Nested loops find the earliest value that appears again later.|
|3|First non-repeated value| `5 4 2 7 2 4` → 7. Count how often each item occurs.|
|4|Insert into array|Enter size, items, then value and 1-based position. Shifting from right prevents overwriting.|
|5|Decimal to octal|25 → 31. Recursion prints the quotient's digits before the remainder.|
|6|Lucky number|Classic sieve: repeatedly remove every second, third, etc. remaining number. 13 is lucky. Limit 1000.|
|7|Josephus|Input people and step; 7 3 → survivor position 4. Recurrence is zero-based, so output adds 1.|
|8|Strong number|145 → Strong, since 1!+4!+5!=145.|
|9|Concatenate strings|Enter two words, e.g. Good Day → GoodDay.|
|10|String length|Type a line; newline is not included in the count.|
|11|Vowels/consonants|Counts English letters; ignores spaces, digits, and punctuation.|
|12|Pattern matching|Text banana, pattern ana → positions 2 and 4 (1-based).|
|13|Stack and queue|Enter choices repeatedly: 1 push, 2 pop, 3 enqueue, 4 dequeue, 0 exit. Stack is LIFO; queue is FIFO.|
|14|Circular queue|Choices: 1 enqueue, 2 dequeue, 3 display, 0 exit. Capacity is 5; indices wrap around.|
|15|Infix to postfix|Input a+b*c → abc*+. Operands must be single letters/digits.|
|16|Dynamic stack|Choices: 1 push, 2 pop, 3 display, 0 exit. Storage grows with `realloc`.|
|17|Postfix evaluation|Input `12 3 + 2 *` → 30. Separate every number and operator with spaces.|

The interactive stack/queue examples intentionally use short numeric menus and show the core data-structure logic.