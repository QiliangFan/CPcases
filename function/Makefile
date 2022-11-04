all: function

run: function
	./function

function: function.o
	$(CC) $(CFLAGS) $? -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	@ls *.o | xargs -n 1 -I {} rm {} 
	@ls -lh | grep "^-rwx" | awk '{print $$9}' |xargs -I {} bash -c "echo {}; rm {}" || true