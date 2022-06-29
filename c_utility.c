/*
	how to save csv file in C
*/
// global initialization
FILE *fid;
char parh[]="/path/to/save/file"
// data saving initialization (adding labels) function
void init_save_data()
{
	fptintf(fid, "x1, x2, x3");
	fprintf(fid, "x4, x5, x6");
	fprintf(fid, "\n");
}
// data saving main function
void save_data(double x1, double x2, double x3, double x4, double x5, double x6)
{
	fprintf(fid, "%f %f %f", x1, x2, x3);
	fprintf(fid, "%f %f %f", x4, x5, x6);
	fprintf(fid, "\n"); 
}
// call the data saving main function inside the main loop
fid = fopen(path, "w");
init_save_data();
for ()
{
	save_data(x1, x2, x3, x4, x5, x6);
}
fclose(fid);
