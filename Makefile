# Nice verbose cli (makefile)
# A cli version of the nice verbose c++ library
# Github: https://www.github.com/0x4248/nice_verbose_cli

CC = g++
CFLAGS = 
STD = 
SRC = src
BIN = bin
LIB = lib

OUTPUT = $(BIN)/nverbose

include CFLAGS.conf
include STD.conf

all: init compile run

init:
	rm -rf bin
	mkdir bin

compile:
	$(CC) $(CFLAGS) -std=$(STD) $(SRC)/main.cpp -o $(OUTPUT) -I $(LIB)

run:
	./$(OUTPUT) -log Hello World!

test:
	./$(OUTPUT) -debug "Debug message"
	./$(OUTPUT) -log "Log message"
	./$(OUTPUT) -info "Info message"
	./$(OUTPUT) -warn "Warning message"
	./$(OUTPUT) -question "Question message"
	./$(OUTPUT) -error "Error message"
	./$(OUTPUT) -critical_error "Critical error message"
	./$(OUTPUT) -major_critical_error "Major critical error message"
	./$(OUTPUT) -success "Success message"
	./$(OUTPUT) -important "Important message"
	./$(OUTPUT) -t_ok "Ok message"
	./$(OUTPUT) -t_info "Info message"
	./$(OUTPUT) -t_warn "Warning message"
	./$(OUTPUT) -t_error "Error message"
	./$(OUTPUT) -t_critical_error "Critical error message"
	./$(OUTPUT) -t_major_critical_error "Major critical error message"
	./$(OUTPUT) -t_failed "Failed message"

clean:
	rm -rf bin
