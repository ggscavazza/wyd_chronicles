#!/bin/bash
# ==============================================================================
# WYD MYTH Server - Script de Finalização para Linux
# ==============================================================================

echo "=================================================="
echo " Finalizando Servidor WYD MYTH no Linux "
echo "=================================================="

echo "Encerrando GameServer..."
pkill -f GameServer.exe

echo "Encerrando LogServer..."
pkill -f LogServer.exe

echo "Encerrando DataServer..."
pkill -f DataServer.exe

sleep 2

echo "Todos os serviços do servidor foram finalizados."
echo "=================================================="
