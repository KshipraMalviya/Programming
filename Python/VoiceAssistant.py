import pyttsx3
import speech_recognition as sr
import datetime
import wikipedia
import webbrowser
import os

engine = pyttsx3.init('sapi5') # for taking input of voice
voices = engine.getProperty('voices')
#print(voices)    by default in computer, there are two voices (male and female)
engine.setProperty('voice', voices[0].id) # to select male/female voice 0 for male, 1 for female

def speak(audio) : # for AI to speak, audio is passed as argument and it will pronounce that audio
    engine.say(audio) # it will speak audio
    engine.runAndWait()

def wishMe() :
    hour = int(datetime.datetime.now().hour)
    if hour>=0 and hour<12 :
        speak("Good Morning!")

    elif hour>=12 and hour<16 :
        speak("Good Afternoon!")

    else :
        speak("Good Evening!")

    speak("How may I help you?")

def takeCommand() : # it takes microphone input from the user and returns string output
    r=sr.Recognizer() # Recognizer is class used for recognizing audio
    with sr.Microphone() as source :
        
        r.pause_threshold =1 #means while speaking we can take a gap of 1 sec
        audio = r.listen(source)

    try :
        # print("Recognizing....")
        query = r.recognize_google(audio, language='en-in') # language english india
        print(query)

    except Exception as e:
        # print("Say that again please....")
        return "None" # if there is prob in recognizing it return string "None"

    return query

if __name__ == "__main__" :
    wishMe()
    print("Listening....")
    while True :
        query=takeCommand()
