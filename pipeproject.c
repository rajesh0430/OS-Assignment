#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
int ar;
int fd[2];
pid_t c_id;
char r_buffer[50];
char w_buffer[50];
int r_counter;
pipe(fd);
if(ar<3)
{
printf("atleast require two parameter");
exit(1);
}
int fileopen=open(ar[1],0);
int targetfile=open(ar[2],0666);
if(fileopen==-1 || targetfile==-1)
{
printf("file will not open");
exit(1);
}
c_id=fork();
{
if(c_id==0)
{
close(fd[1]);
fread(fd[0],r_buffer,sizeof(r_buffer));
printf("The reading string is :%s",r_buffer);
fwrite(targetfile,r_buffer,strlen(r_buffer)+1);
}
else{
close(fd[0]);
while((r_counter=read(fileopen,r_buffer,sizeof(r_buffer))>0)
{
fwrite(fd[1],r_buffer,sizeof(r_buffer));
}
close(fd[1]);
}
}



