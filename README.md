# libft-testing-notes

**ft_isx**


- Self explanatory

  
- No need to segfault with insane numbers (we can't use the crazy bitwise lookup tables)

  

**ft_strlen**


- Checking if the function can handle strings longer than size_t max would be pretty insane (you could theoretically allocate enough memory and memset it but whatever)

  
- Trying to input NULL would segfault the original

  

**ft_memset**


- If you give memset null pointer with size 0 it doesn't segfault (size 0 is instant return)

  
- If size != 0 and you give it a null pointer it should segfault

  
- Check with other types! For example int arrays

  

**ft_bzero**


- It's just memset with 0

  

**ft_memcpy**


- If either pointer is NULL it should segfault. Memcpy also checks for size 0 before accessing any memory

  
- See what happens if there's a null terminator in the middle

  

**ft_memmove**


- Check for overlaps obviously, otherwise memcpy with additional functionality

  
- See what happens if there's a null terminator in the middleqq

  

**ft_strlcpy**


- null inputs will segfault, but if size is 0 it doesnt even check them

  
- make sure you actually null terminate

  
- you can use the return value as inteded to see if you actually copied the thing completely

  

**ft_strlcat**


- null destination will segfault, but if size is 0 it doesnt even check it

  
- check what happens if null terminator not within size (if not found, return size+srclen)

  

**ft_toupper ft_tolower**


- eazy peazy just read the man

  
  
**ft_strchr**


- if string is NULL, segfault. make sure to check for c = nul terminator

  

**ft_strrchr**


- same

  
  
**ft_strncmp**


- n == 0 will not try to read null inputs, so no segfault

  

**ft_memchr**


- See what happens if there's a null terminator in the middle

  

**ft_memcmp**


- See what happens if there's a null terminator in the middle

  

**ft_strnstr**


- Big only gets deferenced when size != 0, small gets deferenced always. (And dereferencing NULL will segfault).

  

**ft_atoi**


- If you want to imitate the original atoi to the t, long_min <= will return 0 and long_max >= will return 1. Very very very debatable. Have fun.

**ft_calloc**

- Overflow is extremely difficult to test and observe. The check is still easy to implement.
- The only times calloc actually returns null is on error. Otherwise even with 0 sizes you still get back a freeable pointer

**ft_strdup**

