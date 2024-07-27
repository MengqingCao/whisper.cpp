mkdir build
cd build
cmake .. -D CMAKE_BUILD_TYPE=debug -D GGML_CANN=on
#  -D WHISPER_BUILD_TESTS=1
make -j

# run main.cpp whith CANN
./build/bin/main -f samples/jfk.wav

# convert pt checkpoint to ggml
python convert-pt-to-ggml.py /home/cmq/code/whisper.cpp/models/large-v3.pt ./whisper/ /home/cmq/code/whisper.cpp/models/modelscope-whisper-largev3


# run op test with CANN
./build/bin/test-backend-ops -b CANN0
./bin/test-backend-ops test -b CANN0 -o {OP_NAME}