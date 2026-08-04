# ==============================================================================
# WYD MYTH - Script de Configuração de IP (PowerShell)
# Uso: .\configure_ip.ps1 -TargetIP "127.0.0.1" (ou seu IP público / VPS)
# ==============================================================================
param(
    [string]$TargetIP = "127.0.0.1"
)

Write-Host "Configurando IP do Servidor para: $TargetIP" -ForegroundColor Green

$releaseDir = Join-Path $PSScriptRoot "Release"
if (-not (Test-Path $releaseDir)) {
    $releaseDir = $PSScriptRoot
}

# 1. Atualizar serverip.txt
$ipFiles = Get-ChildItem -Path $releaseDir -Filter "serverip.txt" -Recurse
foreach ($file in $ipFiles) {
    $content = Get-Content $file.FullName
    $newContent = $content -replace "IP=.*", "IP=$TargetIP"
    Set-Content -Path $file.FullName -Value $newContent
    Write-Host "Atualizado: $($file.FullName)" -ForegroundColor Cyan
}

# 2. Atualizar serverlist.txt
$listFiles = Get-ChildItem -Path $releaseDir -Filter "serverlist.txt" -Recurse
foreach ($file in $listFiles) {
    $content = Get-Content $file.FullName
    $newContent = $content -replace "\b\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}\b", $TargetIP
    Set-Content -Path $file.FullName -Value $newContent
    Write-Host "Atualizado: $($file.FullName)" -ForegroundColor Cyan
}

Write-Host "Configuração de IP concluída com sucesso!" -ForegroundColor Green
