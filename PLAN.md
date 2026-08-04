# PLAN.md - Plano de Implementação Técnica (Servidor, Infraestrutura & Cross-Platform)

> **Nota**: Este arquivo salva o planejamento técnico inicial (hospedagem VPS Linux, suporte desktop Windows/Linux/macOS e roadmap mobile). Retornaremos a ele após a definição da identidade, lore, nome, checkpoints de conteúdo e tarefas do GitHub.

---

## 1. Infraestrutura e VPS Linux (Fase 1)
- **Banco de Dados**: MariaDB / MySQL 5.7+ nativo no Linux (portas 3306/3316, databases `lok` e `log_db`).
- **Executáveis do Servidor**: Executados em Linux via **Wine + XVFB** (display virtual headless) para `DataServer.exe`, `LogServer.exe` e `GameServer.exe`.
- **Automação**:
  - `setup_vps.sh` (Instalação de dependências e regras de UFW).
  - `start_server.sh` (Inicialização automatizada).
  - `stop_server.sh` (Encerramento dos serviços).
  - `configure_ip.ps1` (Script PowerShell para reconfigurar IPs locais/remotos).

## 2. Cliente Desktop Cross-Platform (Fase 2)
- **Windows**: Execução nativa DirectX 9 (`Myth64.exe`).
- **Linux**: Launcher via Wine/Proton + DXVK (`play_linux.sh`).
- **macOS**: Execução via Whisky / CrossOver / MoltenVK (Metal translation).

## 3. Evolução Mobile (Fase 3)
- **Engines**: Unity 2022/2023 LTS ou Godot 4.x.
- **Protocolo**: Conexão Socket TCP C# direta na porta `8281` do `GameServer`.
- **Persistência**: Compartilhamento total de contas, personagens e progresso com o desktop através do mesmo MySQL/DataServer.
