ARG ALPINE_VERSION=3.12

FROM alpine:$ALPINE_VERSION AS builder
RUN apk add build-base && gcc --version
RUN mkdir /code /gen
COPY ./prodavanje_magle.c /code/prodavanje_magle.c
RUN gcc /code/prodavanje_magle.c -o /gen/prodavanje_magle.exe -lm

FROM alpine:$ALPINE_VERSION
COPY --from=builder /gen/prodavanje_magle.exe /gen/prodavanje_magle.exe
ENTRYPOINT ["/gen/prodavanje_magle.exe"]
