import subprocess

proc = subprocess.Popen(["git","push","origin","main"], stdin=PIPE,stdout=PIPE,stderr=PIPE)
time.sleep(1)
proc.stdin.write("dxg4268")
time.sleep(1)
with open("/home/dangerous_coder/Documents/githubToken.txt")  as f:
    line = f.readline()

print(line)
#proc.stdin.write(line)
