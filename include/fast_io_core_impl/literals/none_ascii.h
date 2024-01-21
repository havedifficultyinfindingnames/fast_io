﻿if constexpr (::fast_io::details::is_ebcdic<ch_type> &&
              (::std::same_as<ch_type, char> || ::std::same_as<ch_type, wchar_t>))
{
    if constexpr (::std::same_as<ch_type, char>)
        switch (ch)
        {
            case u8'\0':
                return '\0';
            case u8'\n':
                return '\n';
            case u8'\t':
                return '\t';
            case u8' ':
                return ' ';
            case u8'!':
                return '!';
            case u8'\"':
                return '\"';
            case u8'#':
                return '#';
            case u8'$':
                return '$';
            case u8'%':
                return '%';
            case u8'&':
                return '&';
            case u8'\'':
                return '\'';
            case u8'(':
                return '(';
            case u8')':
                return ')';
            case u8'*':
                return '*';
            case u8'+':
                return '+';
            case u8',':
                return ',';
            case u8'-':
                return '-';
            case u8'.':
                return '.';
            case u8'/':
                return '/';
            case u8'0':
                return '0';
            case u8'1':
                return '1';
            case u8'2':
                return '2';
            case u8'3':
                return '3';
            case u8'4':
                return '4';
            case u8'5':
                return '5';
            case u8'6':
                return '6';
            case u8'7':
                return '7';
            case u8'8':
                return '8';
            case u8'9':
                return '9';
            case u8':':
                return ':';
            case u8';':
                return ';';
            case u8'<':
                return '<';
            case u8'=':
                return '=';
            case u8'>':
                return '>';
            case u8'?':
                return '?';
            case u8'@':
                return '@';
            case u8'A':
                return 'A';
            case u8'B':
                return 'B';
            case u8'C':
                return 'C';
            case u8'D':
                return 'D';
            case u8'E':
                return 'E';
            case u8'F':
                return 'F';
            case u8'G':
                return 'G';
            case u8'H':
                return 'H';
            case u8'I':
                return 'I';
            case u8'J':
                return 'J';
            case u8'K':
                return 'K';
            case u8'L':
                return 'L';
            case u8'M':
                return 'M';
            case u8'N':
                return 'N';
            case u8'O':
                return 'O';
            case u8'P':
                return 'P';
            case u8'Q':
                return 'Q';
            case u8'R':
                return 'R';
            case u8'S':
                return 'S';
            case u8'T':
                return 'T';
            case u8'U':
                return 'U';
            case u8'V':
                return 'V';
            case u8'W':
                return 'W';
            case u8'X':
                return 'X';
            case u8'Y':
                return 'Y';
            case u8'Z':
                return 'Z';
            case u8'[':
                return '[';
            case u8'\\':
                return '\\';
            case u8']':
                return ']';
            case u8'^':
                return '^';
            case u8'_':
                return '_';
            case u8'`':
                return '`';
            case u8'a':
                return 'a';
            case u8'b':
                return 'b';
            case u8'c':
                return 'c';
            case u8'd':
                return 'd';
            case u8'e':
                return 'e';
            case u8'f':
                return 'f';
            case u8'g':
                return 'g';
            case u8'h':
                return 'h';
            case u8'i':
                return 'i';
            case u8'j':
                return 'j';
            case u8'k':
                return 'k';
            case u8'l':
                return 'l';
            case u8'm':
                return 'm';
            case u8'n':
                return 'n';
            case u8'o':
                return 'o';
            case u8'p':
                return 'p';
            case u8'q':
                return 'q';
            case u8'r':
                return 'r';
            case u8's':
                return 's';
            case u8't':
                return 't';
            case u8'u':
                return 'u';
            case u8'v':
                return 'v';
            case u8'w':
                return 'w';
            case u8'x':
                return 'x';
            case u8'y':
                return 'y';
            case u8'z':
                return 'z';
            case u8'{':
                return '{';
            case u8'|':
                return '|';
            case u8'}':
                return '}';
            case u8'~':
                return '~';
            default:
                return '\0';
        }
    else
        switch (ch)
        {
            case u8'\0':
                return L'\0';
            case u8'\n':
                return L'\n';
            case u8'\t':
                return L'\t';
            case u8' ':
                return L' ';
            case u8'!':
                return L'!';
            case u8'\"':
                return L'\"';
            case u8'#':
                return L'#';
            case u8'$':
                return L'$';
            case u8'%':
                return L'%';
            case u8'&':
                return L'&';
            case u8'\'':
                return L'\'';
            case u8'(':
                return L'(';
            case u8')':
                return L')';
            case u8'*':
                return L'*';
            case u8'+':
                return L'+';
            case u8',':
                return L',';
            case u8'-':
                return L'-';
            case u8'.':
                return L'.';
            case u8'/':
                return L'/';
            case u8'0':
                return L'0';
            case u8'1':
                return L'1';
            case u8'2':
                return L'2';
            case u8'3':
                return L'3';
            case u8'4':
                return L'4';
            case u8'5':
                return L'5';
            case u8'6':
                return L'6';
            case u8'7':
                return L'7';
            case u8'8':
                return L'8';
            case u8'9':
                return L'9';
            case u8':':
                return L':';
            case u8';':
                return L';';
            case u8'<':
                return L'<';
            case u8'=':
                return L'=';
            case u8'>':
                return L'>';
            case u8'?':
                return L'?';
            case u8'@':
                return L'@';
            case u8'A':
                return L'A';
            case u8'B':
                return L'B';
            case u8'C':
                return L'C';
            case u8'D':
                return L'D';
            case u8'E':
                return L'E';
            case u8'F':
                return L'F';
            case u8'G':
                return L'G';
            case u8'H':
                return L'H';
            case u8'I':
                return L'I';
            case u8'J':
                return L'J';
            case u8'K':
                return L'K';
            case u8'L':
                return L'L';
            case u8'M':
                return L'M';
            case u8'N':
                return L'N';
            case u8'O':
                return L'O';
            case u8'P':
                return L'P';
            case u8'Q':
                return L'Q';
            case u8'R':
                return L'R';
            case u8'S':
                return L'S';
            case u8'T':
                return L'T';
            case u8'U':
                return L'U';
            case u8'V':
                return L'V';
            case u8'W':
                return L'W';
            case u8'X':
                return L'X';
            case u8'Y':
                return L'Y';
            case u8'Z':
                return L'Z';
            case u8'[':
                return L'[';
            case u8'\\':
                return L'\\';
            case u8']':
                return L']';
            case u8'^':
                return L'^';
            case u8'_':
                return L'_';
            case u8'`':
                return L'`';
            case u8'a':
                return L'a';
            case u8'b':
                return L'b';
            case u8'c':
                return L'c';
            case u8'd':
                return L'd';
            case u8'e':
                return L'e';
            case u8'f':
                return L'f';
            case u8'g':
                return L'g';
            case u8'h':
                return L'h';
            case u8'i':
                return L'i';
            case u8'j':
                return L'j';
            case u8'k':
                return L'k';
            case u8'l':
                return L'l';
            case u8'm':
                return L'm';
            case u8'n':
                return L'n';
            case u8'o':
                return L'o';
            case u8'p':
                return L'p';
            case u8'q':
                return L'q';
            case u8'r':
                return L'r';
            case u8's':
                return L's';
            case u8't':
                return L't';
            case u8'u':
                return L'u';
            case u8'v':
                return L'v';
            case u8'w':
                return L'w';
            case u8'x':
                return L'x';
            case u8'y':
                return L'y';
            case u8'z':
                return L'z';
            case u8'{':
                return L'{';
            case u8'|':
                return L'|';
            case u8'}':
                return L'}';
            case u8'~':
                return L'~';
            default:
                return L'\0';
        }
}
else if constexpr (::std::same_as<ch_type, wchar_t> && ::fast_io::details::wide_is_none_utf_endian)
{
    using unsigned_char_type = ::std::make_unsigned_t<wchar_t>;
    return static_cast<ch_type>(::fast_io::byte_swap(static_cast<unsigned_char_type>(ch)));
}
else