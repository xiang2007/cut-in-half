# CUT IN HALF

## what the game is and how it connects to Malaysia Day
- The game is about where you are required to cut the food that is given in half, whoever gets to the closest to half wins. The food that i used are some of the famous local food.

## how to build and run it, including any library you need installed and its version
1. Clone the repo
2. Run ``sudo apt install build-essential git``
3. Run ``sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev``
2. Run ``Make``
3. Run ``./game``

- Step 2 and 3 is required if X11 is not installed

## which library you chose and why, and what you built yourself versus what the library gave you

- I used raylib as the easiest graphical library out there and im a beginner in C++ so using raylib definitely make it easier.

## a short "where Week 1 shows up in this code" map: const correctness, ownership/RAII, class design, containers, any pattern, any algorithm, tests

- I used RAII for the windows, so that it'll close the window for me
- I used vector containers to store all the game scores so that I can display it by looping through.

## what you cut and what you'd do differently with more time
- Audio and more visuals.
- Multiple objects.
- A enemy so that you actually compete with AI.