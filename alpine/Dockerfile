# docker build -t accetto/hello-there:alpine .

### requires login to Docker Hub
# docker buildx build --platform linux/amd64,linux/arm64 -t accetto/hello-there:alpine . --push

# docker run --name=hello-alpine accetto/hello-there:alpine
# docker start -i hello-alpine

FROM alpine as stage_builder

WORKDIR /usr/src/hello

COPY ./src .

RUN apk add build-base
RUN gcc hello.c -o hello

FROM alpine as stage_final

WORKDIR /usr/src/hello

COPY --from=stage_builder /usr/src/hello .

CMD ["./hello"]
