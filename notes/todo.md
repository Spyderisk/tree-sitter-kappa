# Todo list

- Think about CST => AST
    - Tree sitter makes a CST, which is good for syntax highlighting etc, but not for actual language level operations
    - We can clean up a *lot* of single child nodes to make the emitted tree simpler
    - Currently we differentiate between un/signed ints + float, however the grammar just gives us a domain
        - Investigate why different types of numbers are needed

- Write tests
    - Should I test each functionality seperately? 

- Write syntax highlighting