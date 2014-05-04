s03nd
=====

# Principles

So a PCM stream is essentially a stream of binary data.

### sample
A sample is one 'value' in the waveform.

Imagine drawing a sinewave, a sample would be one discrete value on this sinewave.

### sample size
Assuming you have an 8bit stream, you have 1-byte per time-slice. 

So 0-255 is your range of values that can represent a discrete value in your waveform.

Obviously 16bit would be 2-bytes and so forth.

### sample rate
This is the speed at which you play back the stream of samples.

Playing a waveform at a higher sample rate will result in a higher pitch.

### The code
We have a loop with a continuously incrementing value.

We must use this value to generate our waveform values to draw a soundwave.

Bit-shifting (```>>```, ``<<``) is useful as it's a fast and efficient way of generating a waveform that oscilates between high and low values.



# Compiling and running

```shell
make
./sound.sh
```

# Prerecorded clip

10 minute clip: https://soundcloud.com/craigjbass/s01nd-1

This program will continue to output sound until it can no longer increment t...

# Dependencies

- sox (On Mac OSX: ```brew install sox```)

# Cross-platform
I think modifying the sox parameters in sound.sh, to use linux specific drivers, would be more reliable.

On Linux you might be able to pipe to /dev/audio ```./sound | /dev/audio``` (Untested). 
