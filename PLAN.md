# PLAN.md - Plano de Implementação Técnica (Servidor, Infraestrutura & Cross-Platform)

> **Decisão Estratégica de Arquitetura**:
> Adotamos o **Modelo Híbrido por Fases**:
> - **Servidor C++ Nativo (Fase 1)**: Mantemos o servidor de alta performance (`GameServer.exe` e `DataServer.exe`) rodando na VPS Linux via Wine + XVFB + MariaDB nativo para um lançamento rápido, estável e com 100% da física/matemática do WYD original.
> - **Cliente Unity Multiplataforma (Fase 3)**: Desenvolvemos o novo cliente gráfico em **Unity (C#)** consumindo os pacotes TCP (porta `8281`) do mesmo servidor C++, viabilizando builds nativas para Windows, Mac, Linux, Android e iOS com contas compartilhadas!

---

## 1. Infraestrutura e VPS Linux (Fase 1 - Lançamento)
- **Banco de Dados**: MariaDB / MySQL 5.7+ nativo no Linux (portas 3306/3316, databases `lok` e `log_db`).
- **Executáveis do Servidor**: Executados em Linux via **Wine + XVFB** (display virtual headless) para `DataServer.exe`, `LogServer.exe` e `GameServer.exe`.
- **Automação de Infraestrutura**:
  - `setup_vps.sh` (Instalação de dependências e regras de UFW).
  - `start_server.sh` (Inicialização automatizada).
  - `stop_server.sh` (Encerramento dos serviços).
  - `configure_ip.ps1` (Script PowerShell para reconfigurar IPs locais/remotos).

## 2. Cliente Desktop Cross-Platform (Fase 2)
- **Windows**: Execução nativa DirectX 9 (`Myth64.exe`).
- **Linux**: Launcher via Wine/Proton + DXVK (`play_linux.sh`).
- **macOS**: Execução via Whisky / CrossOver / MoltenVK (Metal translation).

## 3. Cliente Moderno Unity & Mobile Cross-Play (Fase 3)
- **Engine**: Unity 2022/2023 LTS (C#).
- **Rede & Protocolo**: Conexão Socket TCP C# na porta `8281` do `GameServer.exe`.
- **Assets 3D**: Conversão de Meshes (`.vgo` $\rightarrow$ `.fbx`), texturas e mapas para Unity.
- **Persistência**: Compartilhamento total de contas, personagens e progresso com o desktop através do mesmo banco MariaDB/DataServer.
