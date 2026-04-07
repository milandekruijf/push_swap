<h1 align="center"><strong>Push swap</strong></h1>
<div align="center">Push swap is a project developed as part of the curriculum at 42 School, focused on sorting a list of integers using two stacks and a constrained set of operations in C. The program sharpens algorithmic thinking, data structure handling, and careful resource management.</div>
<br />
<div align="center">
  <a href="https://42.fr">42</a>
  <span>·</span>
  <a href="https://www.codam.nl">Codam</a>
</div>

## Usage

### Prerequisites

Clone the repository to your local machine using the following command in the terminal.

```sh
git clone https://github.com/milandekruijf/push_swap.git && cd push_swap
```

### Compiling

In order to compile **push_swap** and **checker**, run the following command in the project root directory.

```sh
make
```

*Compiles with the `cc` compiler. By default, flags include `-Wall`, `-Wextra`, `-Werror`, and `-g3`. To build without those strict flags, run `make STRICT=0`.*

### Running

After compiling, the executables `push_swap` and `checker` are created in the `/out` directory.

**push_swap** prints a sequence of stack operations that sorts the given integers. Pass the numbers as a single quoted argument or as separate arguments:

```sh
./out/push_swap 2 1 3
./out/push_swap "2 1 3"
```

**checker** reads operation lines from standard input, applies them to a copy of the initial stacks, then prints whether stack **a** is sorted (ascending). It is typically used together with **push_swap** by piping its output:

```sh
./out/push_swap 2 1 3 | ./out/checker 2 1 3
```

On success, **checker** prints `OK`; otherwise it prints `KO`. Invalid instructions cause **checker** to print an error and exit.

### Optional: address sanitizer

To compile with AddressSanitizer (useful while debugging memory issues), run:

```sh
make re TEST=1
```

*This adds `-fsanitize=address` to the compiler flags.*

### Quick script

For a small end-to-end smoke check, you can run:

```sh
sh scripts/test.sh
```

*This assumes `./out/push_swap` and `./out/checker` already exist (build with `make` first).*

## Features

Push swap solves the sorting problem with two stacks (**a** and **b**) using only the instructions defined by the subject. Below is a concise overview of what this implementation provides.

### Programs

- **push_swap**: Parses arguments, validates input, sorts stack **a** in ascending order, and writes the instruction sequence to standard output (nothing is printed if the stack is already sorted).
- **checker**: Replays instructions from stdin against the initial stacks and reports `OK` or `KO`.

### Allowed instructions

- **Swap**: `sa`, `sb`, `ss` — swap the first two elements on **a**, on **b**, or on both.
- **Push**: `pa`, `pb` — take the top element from one stack and place it on top of the other.
- **Rotate**: `ra`, `rb`, `rr` — shift all elements up; the top moves to the bottom (on **a**, **b**, or both).
- **Reverse rotate**: `rra`, `rrb`, `rrr` — shift all elements down; the bottom moves to the top (on **a**, **b**, or both).

### Sorting strategy

- Stacks with at most **five** values use a dedicated **simple sort**.
- Larger stacks use a **radix sort** based on indexed bits.

### Input validation

- Non-numeric arguments, duplicates, values outside the range of a signed 32-bit integer, or an empty argument list produce `Error: …` on standard error and a non-zero exit status.
- A single string of space-separated numbers (e.g. `"1 2 3"`) or multiple argv tokens are both accepted.

### Other targets

- `make clean` — remove object files (including `libft` clean).
- `make fclean` — remove the `/out` directory and perform a full `libft` clean.
- `make re` — `fclean` then `all`.

## Acknowledgements

- [42](https://42.fr): The educational institution that inspired and supported the development of this project.
- [Codam](https://www.codam.nl): The partner school of 42 in the Netherlands, where the project was developed.
