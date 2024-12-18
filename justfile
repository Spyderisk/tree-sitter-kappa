# This is a little utility file which helps test the parser. Use Just to run it.

# Generate the parser
gen:
    tree-sitter generate

# Test it on `examples/Lotka–Volterra-mod.ka`
parse: gen
    -tree-sitter parse examples/Lotka-Volterra-mod.ka | ack --passthru 'ERROR'