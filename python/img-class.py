from tkinter import Image
import cv2 as cv
import cv2
import numpy as np
import math


img = cv2.imread('256x256.png')
img2 = math.fmod((img+20),256)
cv2.imwrite('output.png', img2)