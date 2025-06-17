fastcgi_param	SERVER_NAME	$hostname;
fastcgi_pass	unix:/var/run/php8.1-fpm/php8.1-fpm.sock;
fastcgi_index	index.php;
fastcgi_connect_timeout 180;
fastcgi_send_timeout 250;
fastcgi_intercept_errors	on;
fastcgi_param	HTTPS	off;

