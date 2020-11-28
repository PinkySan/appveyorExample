FROM alpine:3.12

RUN apk update
RUN apk add cmake clang-extra-tools g++ python3 py3-pip make

RUN pip install conan
WORKDIR /home