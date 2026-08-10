# Shaheed Minar - OpenGL Computer Graphics Project

An interactive 2D computer graphics project that recreates the **Shaheed Minar and its surrounding environment** using OpenGL and GLUT. The scene combines the monument, buildings, trees, clouds, vehicles, and other environmental elements with interactive animations and day-night transitions. 

## Project Overview

The project demonstrates fundamental concepts of computer graphics, including:

- 2D object modeling using OpenGL primitives
- Scene composition and transformation
- Animation using timer functions
- Keyboard and mouse interaction
- Day and night scene transitions
- Moving vehicles and clouds
- Animated trees
- Interactive control of animation speed and direction

The scene represents the Shaheed Minar along with buildings, trees, clouds, the sun, a car, an ambulance, a mosque, a medical, and surrounding ground elements. 

## Features

### Scene Elements

The scene contains:

- Shaheed Minar
- Minar base, circle, and stairs
- Ground
- Sky and sun
- Clouds
- Small and large trees
- Multiple buildings
- Medical 
- Mosque
- Car
- Ambulance

These elements are implemented as separate drawing functions and composed together to create the complete scene. 

### Animation

The project includes several animated elements:

- Moving car
- Moving ambulance
- Moving clouds
- Swaying trees
- Day-night transition
- Adjustable cloud direction
- Adjustable car speed

Timer functions are used to continuously update the animated objects and refresh the scene. 

## Controls

| Input | Action |
|---|---|
| `Left Arrow` | Toggle day/night |
| `T` | Start/stop tree movement |
| `C` | Start/stop cloud movement |
| `L` | Move clouds left |
| `R` | Move clouds right |
| `A` | Start/stop ambulance |
| `B` | Start/stop car |
| `Left Mouse Button` | Decrease car speed |
| `Right Mouse Button` | Increase car speed |

The keyboard and mouse controls are implemented through GLUT callback functions. 

## Technologies Used

- **C/C++**
- **OpenGL**
- **GLUT / FreeGLUT**
- **Windows API**
- **Math Library**
