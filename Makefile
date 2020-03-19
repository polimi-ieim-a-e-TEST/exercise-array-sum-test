build: 
	clang exercise.c -o exercise

clean:
	rm exercise

run: clean build
	./exercise
