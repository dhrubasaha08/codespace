#!/bin/bash

# Update and Upgrade
sudo apt update
sudo apt upgrade -y

# Install OpenGL Net-tools Build-Essential
sudo apt install build-essential mesa-utils libglu1-mesa-dev freeglut3-dev mesa-common-dev libglew-dev libglfw3-dev libglm-dev libao-dev libmpg123-dev net-tools software-properties-common -y

# Add SWI-Prolog repository and install
sudo apt-add-repository ppa:swi-prolog/stable -y
sudo apt-get update
sudo apt-get install swi-prolog -y
