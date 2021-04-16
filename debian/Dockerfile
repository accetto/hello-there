# docker build -t accetto/hello-there:debian .

### requires login to Docker Hub
# docker buildx build --platform linux/amd64,linux/arm64 -t accetto/hello-there:debian . --push

# docker run --name=hello-debian accetto/hello-there:debian
# docker start -i hello-debian

FROM debian:stretch-slim as stage_builder

WORKDIR /usr/src/hello
    
COPY ./src .

RUN apt-get update \
    && apt-get install -y --no-install-recommends gcc libc6-dev

RUN gcc hello.c -o hello

FROM debian:stretch-slim as stage_final

WORKDIR /usr/src/hello

COPY --from=stage_builder /usr/src/hello .
    
CMD ["./hello"]
