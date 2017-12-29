void lcdToggleEnable(unsigned char bits);
void lcdByte(unsigned char bits, unsigned char mode);
void lcdInit();
void lcdSendCommand(unsigned char command);
void lcdString(char * message);
unsigned char convertRowColtoHex(int row, int col);
void setCursorPositionRowCol(int row, int col);
void setCursorPositionHex(unsigned char position);
void clearColumnsHex(unsigned char positionToClearTo, unsigned char positionToClearFrom);
void clearColumnsRowCol(int row, int colToClearTo, int colToClearFrom);

void blinkCursor();
void enableUnderlineCursor();
void clearDisplayClearMem();
void clearDisplayKeepMem();
void setEntryMode();
void setDisplayOnCursorOff();
void set4Bit2Line();
void set8Bit2Line();
void moveCursorRight();
void moveCursorLeft();
void resetCursorPosition();
void scroll1CharRightAllLines();
void scroll1CharLeftAllLines();