#!/bin/bash
# ==============================================================================
# WYD MYTH Server - Script de Setup Inicial para VPS Linux (Ubuntu 20.04/22.04/24.04 ou Debian 11/12)
# ==============================================================================

if [ "$EUID" -ne 0 ]; then
  echo "Erro: Execute este script como root (sudo ./setup_vps.sh)"
  exit 1
fi

echo "=================================================="
echo " Configurando Dependências da VPS Linux para WYD "
echo "=================================================="

# Update system
apt update && apt upgrade -y

# Habilitar suporte 32-bit (multiarch) para o Wine
dpkg --add-architecture i386
apt update

# Instalar pacotes essenciais
echo "Instalando Wine, Xvfb, MariaDB e dependências..."
apt install -y \
    wine \
    wine32 \
    wine64 \
    winetricks \
    xvfb \
    mariadb-server \
    mariadb-client \
    curl \
    unzip \
    net-tools \
    ufw

# Iniciar e habilitar MariaDB
systemctl enable mariadb
systemctl start mariadb

# Configurar Firewall (UFW)
echo "Configurando Firewall (Apertando portas do servidor WYD)..."
ufw allow 22/tcp        # SSH
ufw allow 8281/tcp      # GameServer Port
ufw allow 7525/tcp      # DataServer / ApiServer Port
ufw allow 3306/tcp      # MariaDB/MySQL (Se for acesso remoto)
ufw --force enable

echo "=================================================="
echo " Setup Inicial da VPS Concluído! "
echo " Próximos passos: "
echo " 1. Configure as senhas no MariaDB (mysql -u root)"
echo " 2. Crie os bancos de dados 'lok' e 'log_db'"
echo " 3. Edite os arquivos serverip.txt para o IP da sua VPS"
echo " 4. Execute ./start_server.sh para subir o servidor"
echo "=================================================="
