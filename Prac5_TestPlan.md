Introduction
============

This is a Test Plan for the 2048 game. The 2048 game is made up from a 4x4 grid which spawns tiles in random places on the grid. The game begins with 2 initial tiles which both have the value of 2. The user tilts the grid to combine the tiles that have the same value. Once those tiles are combined, the value will be the sum of the two tiles. The final outcome of the game is to score 2048.

Resources Needed
================

Considering the game isnt complex, a C Complier and the program/test files will only be required. The tests will be done on a Unix Machine.

Test Items
==========

 - board.c
 - keyboard.c
 - main.c
 - tilt.c

These are the only files that need to be tested, any other files are only required to allow the game to run correctly. 'tilt.c' is the file that is used to create tilting of the board. 'keyboard.c' is the file that receives they keys pressed which tells the 'tilt.c' which direction to tilt. 'board.c' is the file that has the grid for the tiles and 'main.c' is the files that runs all the files as a complete program.

Features To Be Tested
=====================

A number of tests will be done to ensure the program performs to the expected functionality. These tests will consist of:

 - Ensure the game is initated with two tiles (a 2 and a 4)
 - Ensure the tilt functions work correctly
   - Tilt up
   - Tilt down
   - Tilt left
   - Tilt right
 - Ensure everytime the board is tilted, a new tile with the value of 2 is spawned
 - Ensure the tiles are spawned in random places every tilt
 - Ensure the tiles of the same value combine and create a value with the sum of the two tiles
 - Ensure the game has an end state (if you fill the grid with uncombined tiles or if you win 2048)

Testing
=======

 - Black Box Testing:
   - Black box testing will be done as this will test the program as a whole without looking at the code itself. Considering this is a simple game, extensive testing will not be needed.

 - Unit Testing:
   - This test will be done to ensure that each of the components in the game work correctly. Tilting of the game will be tested to ensure that when the board it tilted, the correct combinations of values combine together and that a new tile with a value is spawned.   

 - System Testing:
   - System testing will be done to test as many possibilities as possible. This test will be done to the specifications of the game which will cover all the components of the game.

 - Comparison Testing:
   - Considering there are many games available like this in the market, there will be plenty of games to compare it to. This will ensure that the game meets the requirements of games like it to ensure it works and meets the market requirements.
