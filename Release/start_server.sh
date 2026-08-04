#!/bin/bash
# ==============================================================================
# WYD MYTH Server - Script de Inicialização para Linux (VPS via Wine + XVFB)
# ==============================================================================

# Diretório base do servidor
SERVER_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export WINEPREFIX="${SERVER_DIR}/.wine"
export WINEDEBUG=-all

echo "=================================================="
echo " Iniciando Servidor WYD MYTH no Linux VPS "
echo "=================================================="

# 1. Iniciar servidor de display virtual (XVFB) se não estiver rodando
if ! pgrep -x "Xvfb" > /dev/null; then
    echo "[1/5] Iniciando Xvfb (Virtual Framebuffer na porta :99)..."
    Xvfb :99 -screen 0 1024x768x16 &
    sleep 2
fi
export DISPLAY=:99

# 2. Iniciar DataServer
echo "[2/5] Iniciando DataServer..."
cd "${SERVER_DIR}/DataServer"
nohup wine DataServer.exe > dataserver.log 2>&1 &
echo "DataServer PID: $!"
sleep 3

# 3. Iniciar LogServer
echo "[3/5] Iniciando LogServer..."
cd "${SERVER_DIR}/ApiServer"
nohup wine LogServer.exe > logserver.log 2>&1 &
echo "LogServer PID: $!"
sleep 2

# 4. Iniciar GameServer
echo "[4/5] Iniciando GameServer..."
cd "${SERVER_DIR}/GameServer"
nohup wine GameServer.exe > gameserver.log 2>&1 &
echo "GameServer PID: $!"
sleep 3

echo "[5/5] Todos os serviços foram inicializados com sucesso!"
echo "Verifique os logs em cada subpasta para acompanhar o status."
echo "=================================================="
