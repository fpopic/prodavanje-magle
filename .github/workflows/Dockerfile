FROM alpine
RUN apk add build-base && gcc --version


RUN mkdir /code /gen
COPY ./prodavanje_magle.c /code/prodavanje_magle.c
RUN gcc /code/prodavanje_magle.c -o /gen/prodavanje_magle.exe -lm

ENTRYPOINT ["/gen/prodavanje_magle.exe"]
