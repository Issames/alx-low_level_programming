#include <stdlib.h>
#include <string.h>
/**
 * count_words - main method
 * Return: words
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
int num_words;
int i;
while (*str != '\0')
{
	if (*str == ' ')
	{
		in_word = 0;
	}
	else if (in_word == 0)
	{
		in_word = 1;
		count++;
	}
	str++;
}
return count;
}
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
{
	return NULL;
}
num_words = count_words(str);
char **words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
	return NULL;
}
int word_len = 0;
int in_word = 0;
char *word_start = str;
for (i = 0; i <= num_words; i++)
{
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			if (in_word)
			{
				break;
			}
			else
			{
				word_start++;
                	}
		}
		else
		{
			if (!in_word)
			{
				word_start = str;
			}
			word_len++;
			in_word = 1;
		}
		str++;
	}
	if (word_len > 0)
	{
		char *word = malloc((word_len + 1) * sizeof(char));
		if (word == NULL)
		{
			return NULL;
		}
		strncpy(word, word_start, word_len);
		word[word_len] = '\0';
		words[i] = word;
		word_len = 0;
		in_word = 0;
	}
	else
	{
		i--;
	}
}
words[num_words] = NULL;
return words;
}
