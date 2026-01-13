import time
import sys

def type_lyric(line, char_delay=0.065):
    """Prints a string character by character to simulate typing."""
    for char in line:
        print(char, end='', flush=True)
        time.sleep(char_delay)
    print() 

def print_lyrics():
    """Defines and prints the lyrics with specific delays between lines."""
    lyrics = [
        "Haathon ko sambhaale mere haathon mein",
        "Kaise haathon ko sambhaale mere haathon mein?",
        "Jab tak neend na aaye in lakeeron mein",
        "Baatein hon…",
        "Haan...",
    ]
    
    line_delays = [2.0, 1.8, 2.1, 2.4, 1.70]

    print("Arz Kiya Hai Lyrics:\n")
    time.sleep(1.5) 

    for i, line in enumerate(lyrics):
        type_lyric(line) 
        if i < len(line_delays):
            time.sleep(line_delays[i])


print_lyrics()