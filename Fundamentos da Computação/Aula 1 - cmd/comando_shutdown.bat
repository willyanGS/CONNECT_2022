@echo off
color 1f
:inicio
cls
echo *********************
echo ***** Shutdown ******
echo *********************
echo ** Escolha a opcao **
echo **                 **
echo **  1 - Desligar   **
echo **  2 - Reiniciar  **
echo **  3 - Cancelar   **
echo **  4 - Sair       **
echo **                 **
echo *********************
echo Escolha a opcao:
set /p opc=

color f1
echo **** PROCESSANDO ****
pause

if %opc% equ 3 goto opcao3
if %opc% geq 4 goto opcao4

echo Escolha o tempo:
set /p tempo=

if %opc% equ 1 goto opcao1
if %opc% equ 2 goto opcao2

:opcao1
shutdown -s -t %tempo%
echo *** Adeus ***
pause
goto inicio

:opcao2
shutdown -r -t %tempo%
echo *** Adeus ***
pause
goto inicio

:opcao3
shutdown -a
echo *** Ufa, salvou ***
pause
goto inicio

:opcao4
echo *** Saindo. Ate logo ***
pause
exit