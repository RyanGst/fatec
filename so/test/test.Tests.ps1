[int]$Nascimento = Read-Host "Qual seu ano de nascimento?"
[int]$Atual = Read-Host "Qual o ano atual?"

$Anos = $Atual - $Nascimento
Write-Host "Voce tem $($Anos) anos de idade, que equivalem a $($Anos * 12) meses, $($Anos * 356) dias e $($Anos * 52) semanas"