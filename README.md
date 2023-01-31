# Dr_Quine
42 -Dr Quine project- The point is to make quine programs whose output and source code are the identical.

## General usage
Must be on unix based system
```bash
cd X_name/C
make #only compile
make test #compile and make basic test
./name
```

## 0_Colleen, basic
The purpose of Colleen is to discover quine program and the principe of self-reproduction.
#### Subject restrictions
- The source code must contain at least :
	- A main function.
	- Two different comments.
	- One of the comments must be present in the main function
	- One of the comments must be present outside of your program.
	- Another function in addition to the main function (which of course will be called)

## 1_Grace, only macro
With Grace we have to do a quine without main function. I don't exactly understand why for now, maybe it's to make the quine more sniky, maybe it's just to deeply understand how macro work on a compiler, or it's just a start for the last program.
#### Subject restrictions
- The source code must strickly contain
	- No main declared.
	- Three defines only.
	- One comment.

## 2_Sully, mutation
After self-reproduction, welcome to self-reproduction with mutation !
#### Subject restrictions
- The executable must be named Sully.
- When executed the program writes in a file named Sully_X.c/Sully_X.s. The X will be an interger given in the source. Once the file is created, the program compiles this file and then runs the new program (which will have the name of its source file).
- Stopping the program depends on the file name : the resulting program will be executed only if the integer X is greater than 0.
- An integer is therefore present in the source of your program and will have to evolve by decrementing every time you create a source file from the execution of the program.
- You have no constraints on the source code, apart from the integer that will be set to 5 at first.

## Some helpfull links
- [wiki Quine program](https://fr.wikipedia.org/wiki/Quine_(informatique))
- [wiki fixed point](https://en.wikipedia.org/wiki/Fixed_point_(mathematics))
- [ascii help](https://theasciicode.com.ar/ascii-control-characters/horizontal-tab-ascii-code-9.html) || ```man ascii```
- [define gcc](https://gcc.gnu.org/onlinedocs/gcc-4.8.5/cpp/Stringification.html)
- [more define infos](https://renenyffenegger.ch/notes/development/languages/C-C-plus-plus/preprocessor/macros/stringify)
