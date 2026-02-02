# linux-processes-docker--DEVOPS
Demonstrates Unix process creation and synchronization in C, containerized with Docker to explore process behavior inside containers.

# ProcessAnalyze – C + Linux Processes + Docker

This project demonstrates Unix process lifecycle management using C,
and shows how the same behavior works inside a Docker container.

It was built as a hands-on study for:
- Operating Systems (processes, fork, wait)
- Linux process inspection
- Docker containerization

---

## What This Project Does

- Starts a parent process
- Creates 3 child processes using fork()
- Each child:
  - Prints its PID
  - Sleeps for a short time
  - Exits cleanly
- Parent process:
  - Waits for all children using wait()
  - Exits only after all children finish

When containerized:
- The program runs as PID 1
- Demonstrates how process lifecycle works inside Docker

---

## Key Concepts Demonstrated

- fork() – process creation
- wait() – parent-child synchronization
- PID and PPID
- Process scheduling (non-deterministic order)
- Docker containers and PID 1 behavior
- Linux process inspection with ps

---

## Technologies Used

- C (GCC)
- Linux (Ubuntu)
- Docker
- WSL2

---

## Project Structure

processanalyze/
├── processanalyze.c
├── Dockerfile
└── README.md

---

## Build and Run (Local)

gcc processanalyze.c -o processanalyze  
./processanalyze

---

## Run with Docker

Build image:
docker build -t processanalyze:1.0 .

Run container:
docker run --rm processanalyze:1.0

Expected behavior:
- Parent runs as PID 1
- Child processes get separate PIDs
- Parent waits until all children exit

---

## Example Output (Docker)

Parents started with PID : 1  
Child process started with PID : 8  
Child process over with PID : 8  
...  
All children processes are finished, Parent exiting ...

---

## Why This Matters for DevOps

Understanding how processes behave is critical for:
- Container lifecycle
- Signal handling
- Zombie processes
- Kubernetes pod behavior

This project connects Operating Systems theory with real DevOps tooling.

---

## Author

Software Engineering student focusing on:
- Backend development
- Linux systems
- DevOps fundamentals
