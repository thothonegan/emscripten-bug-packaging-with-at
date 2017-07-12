
.PHONY: default clean

default: main.html

clean:
	rm main.html main.js main.data

main.html: main.cpp
	em++ -o $@ $^ --preload-file res@@master/test.txt@test.txt

serve:
	python -m SimpleHTTPServer 8000

