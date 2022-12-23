# ft_printf
 
<p align="center">
<img src="https://github.com/santiagotena/assets/blob/master/logos/42%20logo.jpeg?raw=true" alt="42 Wolfsburg Logo" width="150" height="150">
</p>
 
The objective of this 42 Wolfsburg project is to recreate the emblematic printf function. 
 
The function handles the following conversions:
<ul>
<li> %c Prints a single character. </li>
<li> %s Prints a string (as defined by the common C convention). </li>
<li> %p The void * pointer argument has to be printed in hexadecimal format. </li>
<li> %d Prints a decimal (base 10) number. </li>
<li> %i Prints an integer in base 10. </li>
<li> %u Prints an unsigned decimal (base 10) number. </li>
<li> %x Prints a number in hexadecimal (base 16) lowercase format. </li>
<li> %X Prints a number in hexadecimal (base 16) uppercase format. </li>
<li> %% Prints a percent sign. </li> 
</ul>
 
Familiarity with variadic functions is central for the completion of this project.
 
# Usage
 
Use `make` to create the `libftprintf.a` file.
 
There is a `main.c` file inside the repository for the purpose to demonstrate how the function works.
 
Input the following inside the terminal in order to run it:
```
gcc main.c libftprintf.a && ./a.out
```
