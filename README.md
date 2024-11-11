# libft-testing-notes

ft_isx
  self explanatory
  no need to seg fault with insane numbers (we can't use the crazy bitwise lookup tables)

ft_strlen
  checking if the function can handle strings longer than size_t max would be pretty insane (you could theoretically allocate enough memory and memset it but whatever)
  trying to input NULL would segfault the original, doesn't even pass the compiler flags though

ft_memset
  if you give memset null ptr with size 0 it doesn't segfault (size 0 is instant return)
  check with other types! for example int arrays
