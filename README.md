# Three Dimensional Cube Viewer

A program which emulates a 3D image by calculating the location that points in 3D space fall on a 2D display when viewed from particular position.

## How to Run

Download the file and / or run the code on your IDE of choice (Codeblocks or DevC++ should both work). The user will be presented with 2 options, each of which display a large image of 8 different points in a cube formation using ascii characters.

## How to Use

The user can move their frame of reference along "the ground" using WASD and increase or decrease their height with "r" and "f" respectively. The angle at which the cube is viewed cannot be altered. Option 1 assumes that the angle between the line of sight and a point is proportional to that point's distance away from the center of the screen. This ended up creating a "fish eye lense" effect where the cube is squished as it approaches the edge of the screen. Option 2 is much closer to what is expected of 3D graphics on a computer and uses similar right triangles to determine the displayed position of points on the screen.

### Note

A varient of this program was made for a computer engineering school project. This project used the accelerometer feature of an Adafruit Circuit Playground in combination with an Adafruit Neopixel 8x8 matrix display to create a game in which the user would "drive" with a "steering wheel" in 3D virtual reality as the neopixel matrix displayed various points. In this version the user could turn their view which entailed some additional trigonometry calculations.
