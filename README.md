# Proyecto POO Hospital — arquitectura MVC

Aplicación de escritorio para Windows desarrollada con C++/CLI, Windows Forms y .NET Framework 4.7.2. El código fue reorganizado para separar la interfaz, las entidades del dominio y la lógica de aplicación.

## Estructura

```text
Proyecto_POO/
├── Modelos/          Entidades: Usuario, Paciente, Personal y Seguridad
├── Vistas/           Formularios de Windows Forms y recursos `.resx`
├── Controladores/    Autenticación, reglas y persistencia de cada módulo
├── Datos/            Datos iniciales que se copian con la compilación
└── Proyecto_POO.vcxproj
```

### Responsabilidades MVC

- **Modelo:** representa los datos del hospital mediante clases tipadas; ya no se usan diccionarios de cadenas en la interfaz.
- **Vista:** captura entradas, muestra mensajes y actualiza tablas. No abre ni interpreta archivos de datos.
- **Controlador:** valida operaciones, autentica usuarios, asigna identificadores y guarda/carga los registros.

Los datos modificables se guardan en `%APPDATA%\ProyectoPOO\Datos`. En la primera ejecución, los controladores migran los archivos antiguos o copian los datos iniciales incluidos en `Proyecto_POO\Datos`.

## Compilar

1. Abrir `Proyecto_POO.slnx` en Visual Studio con la carga de trabajo **Desarrollo para el escritorio con C++**.
2. Confirmar que estén instalados C++/CLI, .NET Framework 4.7.2 y el toolset `v145`.
3. Seleccionar `Debug | x64` o `Release | x64` y ejecutar **Compilar solución**.

La aplicación principal también puede compilarse por consola:

```powershell
msbuild Proyecto_POO\Proyecto_POO.vcxproj /t:Build /p:Configuration=Debug /p:Platform=x64
```

El proyecto del instalador requiere la extensión **Microsoft Visual Studio Installer Projects** y se genera a partir de la salida `x64\Release\Proyecto_POO.exe`.

## Flujo principal

- La pantalla inicial abre el inicio de sesión.
- El administrador accede al menú de gestión del hospital.
- Los usuarios registrados acceden a la consulta de pacientes por cédula.
- Los módulos de pacientes, seguridad y personal persisten sus datos a través de controladores independientes.

> Nota: se mantuvo el formato de datos y las credenciales administrativas originales para conservar compatibilidad. Para un entorno real se recomienda reemplazar las contraseñas en texto plano por hashes con sal y mover la configuración administrativa fuera del código fuente.
