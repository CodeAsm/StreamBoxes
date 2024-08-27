all:
	g++ about.cpp -o about -O2 -lfinal
	g++ donate.cpp -o donate -O2 -lfinal
	g++ rules.cpp -o rules -O2 -lfinal
	g++ socialmedia.cpp -o socialmedia -O2 -lfinal
	g++ subscribe.cpp -o subscribe -O2 -lfinal