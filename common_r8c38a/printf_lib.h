/*======================================*/
/* シンボル定義                         */
/*======================================*/
#define     SPEED_4800      1           /* 通信速度 4800bps         */
#define     SPEED_9600      2           /* 通信速度 9600bps         */
#define     SPEED_19200     3           /* 通信速度 19200bps        */
#define     SPEED_38400     4           /* 通信速度 38400bps        */

/*======================================*/
/* プロトタイプ宣言                     */
/*======================================*/
void init_uart0_printf( int sp );
int get_uart0( char *s );
int put_uart0( char r );
