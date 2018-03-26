# UVA-352 - The Seasonal War

The inhabitants of Tigerville and Elephantville are engaged in a seasonal war. Last month, Elephantville successfully launched and orbited a spy telescope called the Bumble Scope. The purpose of the Bumble Scope was to count the number of War Eagles in Tigerville. The Bumble Scope, however, developed two problems because of poor quality control during its construction. Its primary lens was contaminated with bugs which block part of each image, and its focusing mechanism malfunctioned so that images vary in size and sharpness.
The computer programmers, who must rectify the Bumble Scope’s problems are being held hostage in a Programming Contest Hotel in Alaland by elephants dressed like tigers. The Bumble Scope’s flawed images are stored by pixel in a file called Bumble.in. Each image is square and each pixel or cell contains either a 0 or a 1. The unique Bumble Scope Camera (BSC) records at each pixel location a 1 if part or all of a war eagle is present and a 0 if any other object, including a bug, is visible. The programmers must assume the following:
* A war eagle is represented by at least a single binary one.
* Cells with adjacent sides on common vertices, which contain binary ones, comprise one war eagle. A very large image of one war eagle might contain all ones.
* Distinct war eagles do not touch one another. This assumption is probably flawed, but the programmers are desperate.
* There is no wrap-around. Pixels on the bottom are not adjacent to the top and the left is not adjacent to the right (unless, of course, there are only 2 rows or 2 columns)

---
## Input and Output

Write a program that reads images of pixels from the input file (a text file), correctly counts the number of war eagles in the images and prints the image number and war eagle count for that image on a single line in the output file (also a text file). Use the format in the sample output. Do this for each image in the input file. Each image will be preceded by a number indicating its square dimension. No dimension will exceed 25.

---
## Sample input

```
6
100100
001010
000000
110000
111000
010100
8
01100101
01000001
00011000
00000010
11000011
10100010
10000001
01100000
```

---
## Sample output

```
Image number 1 contains 3 war eagles.
Image number 2 contains 6 war eagles.
```