param ([String[]] $only)

# Create folders
$buildPath = '.\build\@101st Doom Battalion Auxilliary Mod\addons'
New-Item $buildPath -ItemType Directory -Force

$buildPath = Resolve-Path $buildPath
$includePath = Resolve-Path '.\include.txt'

$addonBuilder = Join-Path (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path "AddonBuilder\AddonBuilder.exe"

function Build-Addon
{
    param ([string] $addonFolder)
    $addonPath = Resolve-Path ".\Addons\$addonFolder"
    & "$addonBuilder" $addonPath $buildPath -prefix="101st_Aux_Mod\Addons\$addonFolder" -clear -include="$includePath"
}

if ($PSBoundParameters.ContainsKey('only'))
{
    foreach($addonFolder in $only)
    {
        Build-Addon -addonFolder $addonFolder
    }
}
else
{
    foreach($addonFolder in Get-ChildItem -Directory .\Addons)
    {
        Build-Addon -addonFolder $addonFolder
    }
}
