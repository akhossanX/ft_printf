# 42 ft_printf

Because I'm tired of using `ft_putnbr` and `ft_putstr`

This project aims at rebuilding the printf library. I tried to implement as much of the original as possible, and also have a few extra things which I found to be useful. Link to the project subject [here](https://cdn.intra.42.fr/pdf/pdf/1807/ft_printf.en.pdf).

## Installation

Run `make` on the root directory of the project

```bash
$ make 
```
the Makefile will compile all the source files including those of Libft Library, then it creates a static library `libftprintf.a`.

## Usage
Write your driver program containing `main()` function, should be something like this:

```c
#include "ft_printf.h"

int  main(void)
{
     ft_printf("%s, This is %d ft_printf project ^_^", "Hello World", 42);
     return (0);
}
```
`output: Hello World, this is 42 ft_printf project ^_^`
For this program to compile you must compile it with `libftprintf.a`, like: 
```bash
$ cc -Werror -Wall -Wextra main.c -lftprintf -L. -I./inc
```
Now all should be fine.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
