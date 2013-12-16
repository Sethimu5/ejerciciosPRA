#ifndef SCREEN_H_
#define SCREEN_H_

class screen {
public:
	screen();
	virtual ~screen();
	void set_screen(int w, int h);
	void set_screen(int w, int h, int fw, int fh);
};

#endif /* SCREEN_H_ */
