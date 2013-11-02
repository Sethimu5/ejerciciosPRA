#gcc example.cpp -o example
#gcc example.cpp -o example -lstdc++
#gcc example.cpp -o example -lstdc++ -lm
#gcc example.cpp -O2 -o example -lstdc++
#gcc example.cpp -g -o example -lstdc++

g++ -lm MYexample.cpp -o MYexample


#gcc sdlexample.cpp `pkg-config --cflags --libs sdl` -o sdlexample -lstdc++
g++ MYsdlexample.cpp `pkg-config --cflags --libs sdl` -o MYsdlexample
