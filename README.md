# libft-testing-notes

ft_isx
  self explanatory
  no need to seg fault with insane numbers (we can't use the crazy bitwise lookup tables)

ft_strlen
  checking if the function can handle strings longer than size_t max would be pretty insane (you could theoretically allocate enough memory and memset it but whatever)
  trying to input NULL would segfault the original, doesn't even pass the compiler flags though

ft_memset
  if you give memset null ptr with size 0 it doesn't segfault (size 0 is instant return)
  if size != 0 and you give it nullptr it should segfault
  check with other types! for example int arrays

ft_bzero
  memset with 0

ft_memcpy
  if either ptr is NULL it should segfault. memcpy also checks for size 0 before accessing any memory
  See what happens if there's a null terminator in the middle

ft_memmove
  check for overlaps obviously, otherwise memcpy with additional functionality
  See what happens if there's a null terminator in the middle

ft_strlcpy
  null inputs will segfault, but if size is 0 it doesnt even check them
  make sure you actually null terminate
  you can use the return value as inteded to see if you actually copied the thing completely

ft_strlcat
  null destination will segfault, but if size is 0 it doesnt even check it
  check what happens if null terminator not within size (if not found, return size+srclen)

ft_toupper tolower
  eazy peazy just read the man
  
ft_strchr
  if string is NULL, segfault. make sure to check for c = nul terminator

ft_strrchr
  same
  
ft_strncmp
  n == 0 will not try to read null inputs, so no segfault

ft_memchr
  See what happens if there's a null terminator in the middle

ft_memcmp
  See what happens if there's a null terminator in the middle

ft_strnstr
  If little is longer than big the original function crashes ?

