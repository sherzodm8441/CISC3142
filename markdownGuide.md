Headings
# Heading level 1
## Heading level 2
### Heading level 3
#### Heading level 4
##### Heading level 5
###### Heading level 6


Paragraphs
To create paragraphs, use a blank line to separate one or more lines of text.


Line Breaks
To create a line break or new line (<br>), end a line with two or more spaces, and then type return.


Bold
To bold text, add two asterisks or underscores before and after a word or phrase. To bold the middle of a word for emphasis, add two asterisks without spaces around the letters.
I just love **bold text**.
I just love __bold text__.
Love**is**bold


Italic
To italicize text, add one asterisk or underscore before and after a word or phrase. To italicize the middle of a word for emphasis, add one asterisk without spaces around the letters.
Italicized text is the *cat's meow*.
Italicized text is the _cat's meow_.
A*cat*meow

Bold and Italic
To emphasize text with bold and italics at the same time, add three asterisks or underscores before and after a word or phrase. To bold and italicize the middle of a word for emphasis, add three asterisks without spaces around the letters.
This text is ***really important***.
This text is ___really important___.
This text is __*really important*__.
This text is **_really important_**.
This is really***very***important text.

Blockquotes
To create a blockquote, add a > in front of a paragraph

Blockquotes with Multiple Paragraphs
Blockquotes can contain multiple paragraphs. Add a > on the blank lines between the paragraphs.

Lists
You can organize items into ordered and unordered lists.

Ordered Lists
To create an ordered list, add line items with numbers followed by periods. The numbers don’t have to be in numerical order, but the list should start with the number one.
1. First item
2. Second item
3. Third item
4. Fourth item

Unordered Lists
To create an unordered list, add dashes (-), asterisks (*), or plus signs (+) in front of line items. Indent one or more items to create a nested list.
- First item
- Second item
- Third item
- Fourth item

Code
To denote a word or phrase as code, enclose it in backticks (`).


Code Blocks
To create code blocks, indent every line of the block by at least four spaces or one tab.


Tables
To add a table, use three or more hyphens (---) to create each column’s header, and use pipes (|) to separate each column. For compatibility, you should also add a pipe on either end of the row.

| Syntax      | Description |
| ----------- | ----------- |
| Header      | Title       |
| Paragraph   | Text        |

Fenced Code Blocks
The basic Markdown syntax allows you to create code blocks by indenting lines by four spaces or one tab. If you find that inconvenient, try using fenced code blocks. Depending on your Markdown processor or editor, you’ll use three backticks (```) or three tildes (~~~) on the lines before and after the code block. The best part? You don’t have to indent any lines!

```
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```

Syntax Highlighting
Many Markdown processors support syntax highlighting for fenced code blocks. This feature allows you to add color highlighting for whatever language your code was written in. To add syntax highlighting, specify a language next to the backticks before the fenced code block.

```json
{
  "firstName": "John",
  "lastName": "Smith",
  "age": 25
}
```