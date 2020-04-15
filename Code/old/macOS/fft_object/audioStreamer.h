
#ifndef AUDIOSTREAMER_H
#define AUDIOSTREAMER_H

#include <QThread>
#include </usr/local/include/fftw3.h>

class audioStreamer : public QThread
{
public:
	audioStreamer() {
		running = 0;
		inputData = (double *)malloc(sizeof(double)*512);
		outputData = (fftw_complex *) fftw_malloc(sizeof(fftw_complex)*512);
	};
	void quit();
	void run();
	double *inputData;
	fftw_complex *outputData;

private:
	bool running;

};

#endif