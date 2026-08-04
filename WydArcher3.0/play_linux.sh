#!/bin/bash
# ==============================================================================
# WYD MYTH Client - Launcher para Linux (Wine / Proton + DXVK)
# ==============================================================================

CLIENT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export WINEPREFIX="${CLIENT_DIR}/.wine_client"
export WINEDEBUG=-all
export DXVK_HUD=fps

echo "Iniciando WYD Client no Linux..."

# Verificar Wine
if ! command -v wine &> /dev/null; then
    echo "Erro: Wine não está instalado. Instale com: sudo apt install wine"
    exit 1
fi

cd "${CLIENT_DIR}"
wine Myth64.exe
