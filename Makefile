build: 
	clang exercise.c -o exercise

clean:
	rm exercise

run: build
	./exercise
	clean
