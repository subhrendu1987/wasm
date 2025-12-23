# Compiler
CC = emcc

# Output filenames
TARGET = math
WASM_OUT = $(TARGET).wasm
JS_OUT = $(TARGET).js

# Compiler Flags
# -s WASM=1: Generate WebAssembly
# -s EXPORTED_FUNCTIONS: Tell the compiler which C functions to keep
# -s EXPORTED_RUNTIME_METHODS: Allow JS to use helper methods like ccall/cwrap
CFLAGS = -s WASM=1 \
         -s "EXPORTED_FUNCTIONS=['_add_numbers','_main']" \
         -s "EXPORTED_RUNTIME_METHODS=['ccall','cwrap']" \
         -O3

# Default target
all: $(TARGET)

$(TARGET): math.c
	$(CC) math.c $(CFLAGS) -o $(JS_OUT)

# Clean up generated files
clean:
	rm -f $(JS_OUT) $(WASM_OUT)

# Instructions for the user
help:
	@echo "Usage:"
	@echo "  make        - Build math.js and math.wasm"
	@echo "  make clean  - Remove generated files"