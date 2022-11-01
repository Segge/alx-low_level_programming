#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: filename
 *@text_content: added content
 *
 *Return: returns 1 if the file exists otherwise -1
 *if it fails or not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int fun;

	if (!filename)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		fun = write(fd, text_content, nletters);

		if (fun == -1)
		return (-1);
	}

	close(fd);

return (1);
}
