 #include <fcntl.h>
 #include <stdio.h>
 // maybe use start position in buffer, you don't need a second buffer that way.
 int		main(void)
 {
 	char	*line;
 	int		check;
 	int		fd;
 	int		count;

 	check = 1;
 	count = 1;
 	fd = open("dino.txt", O_RDONLY);
 	/* get_next_line(fd, &line);
 	 printf("%s\n", fill_line(&line, "hellloeqwe\newqeqew", 10)); */
 	while (check > 0)
 	{
 		check = get_next_line(fd, &line);
 		//while (1){;};
 		printf("Line%d = %s\n", count, line);
 		count++;
 		free(line);
 		//printf("%d:count", count);
		
 		// while (1){;}
 		// free(line);
 	}
 	//while (1){;}
 	close(fd);
 	return (0);
 }
