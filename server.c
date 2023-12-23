/* ./server 55555 */

#include <netdb.h>
// #include <sys/socket.h>

static int server_socket(const char *portnm)
{
	/* 変数定義 */
	int errcode;
	int soc;
	/* アドレス情報のヒントをゼロクリア */

	/* アドレス情報の決定 */
	if ((errcode = getaddrinfo()) != 0)
	{
		;
	}
	if ((errcode = getnameinfo()) != 0)
	{
		;
	}
	/* ソケットの生成 */
	if ((soc = socket()) == -1)
	{
		;
	}
	/* ソケットオプションの設定 */
	if ((soc = setsockopt()) == -1)
	{
		;
	}
	/* ソケットにアドレスを指定 */
	if (bind() == -1)
	{
		;
	}
	/*　アクセスバックログの指定 */
	if (listen() == -1)
	{
		;
	}
	freeaddrinfo();
	return (soc);
}

static void accept_loop(int soc)
{
	/* 変数定義 */
	int acc;
	socklen_t len;
	/* ループ開始 */
	for(;;)
	{
		len = ;
		/* 接続受付 */
		if ( (acc = accept()) == -1)
		{
			;
		}
		else
		{
			getnameinfo();
			/* 送受信ループ */
			send_recv_loop(acc);
			/* ソケットクローズ */
			close(acc);
			acc = 0;
		}
	}
}

static void send_recv_loop(int acc)
{
	/* 変数定義 */
	socklen_t len;
	/* ループ開始 */
	for(;;)
	{
		/* 受信 */
		if ( (len = recv()) == -1)
		{
			;
		}
		if (len == 0)
		{
			;
		}
		/* 文字列化・表示 */

		/* 応答文字列の作成 */

		/* 応答 */
		if ( (len = send()) == -1)
		{
			;
		}
	}
}

int	main(int argc, char **argv)
{
	int	soc;

	/* 引数にポート番号が指定されているか */
	if (argc <= 1)
	{
		;
	}
	/* サーバソケットの準備 */
	if ((soc = server_socket(argv[1])) == -1)
	{
		;
	}
	/* アクセプトループ */
	accept_loop(soc);
	/* ソケットクローズ */
	close(soc);
	return (0);
}
