#include "wav_file_writer_beta.h"

using namespace std;

int main() {

	sakado::WavFileWriterBeta wfw("testes.wav", 44100, 2, 88200);
	short buf;

	for (int i = 0; i < 88200; i++) {
		buf = 32767 * (0 + sin((double)i * 6.28 / 440));
		wfw.Write(&buf, 2, 1);
	}
	wfw.Close();

	return 0;
}
