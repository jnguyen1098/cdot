# makefile for example and cleanup

EXE = example
OBJS = example.o
DEPS = cdot.h

all $(EXE): $(OBJS) $(DEPS)

run: $(EXE)
	./$(EXE)

clean:
	rm -rf $(EXE) example.gv *.o a.out

.PHONY: all run clean
