from gtts import gTTS
import os


text = input("Enter the text: ")
filename = text.replace(" ", "")

tts = gTTS(text=text, lang="en")
tts.save(filename + ".mp3")
