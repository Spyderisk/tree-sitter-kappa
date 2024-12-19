# Todo list

- Think about CST => AST
    - Tree sitter makes a CST, which is good for syntax highlighting etc, but not for actual language level operations
    - We can clean up a *lot* of single child nodes to make the emitted tree simpler
    - Currently we differentiate between un/signed ints + float, however the grammar just gives us a domain
        - Investigate why different types of numbers are needed

- Write tests
    - Should I test each functionality seperately? 
    - Step through all the tests making sure they all look good

- Write syntax highlighting

## Notes

- Regex to select line sequences in an emitted tree: ` \[[0-9, \[\]-]+\]`

### Issues with the Kappa Manual

- I can't copy and paste code exerpts because they come out as the wrong characters? Some characters seem to use unicode variants
- <https://kappalanguage.org/sites/kappalanguage.org/files/inline-files/Kappa_Manual.pdf#31> Pretty sure the third line of `signature-interface` needs a `|`
- Define what `␣` means, it seems the implementation lets it be either a space or comma.