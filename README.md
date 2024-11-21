Text Logo Maker (Alpha Logo) a new text styling engine for GIMP.

![image](https://github.com/user-attachments/assets/3688b73c-f529-4f2c-ac1d-52227f9c5d1d)

![image](https://github.com/user-attachments/assets/c25bb13c-3574-4332-a6ca-b49095790663)

Make 1000s of text styles with this awesome new plugin. Check out its modes such as (default, sharp and ring bevel) normal inner glow to grainy inner glow, and the multiple shadows and outlines it can do!

## Directory to put Binaries (They do NOT go in the normal plugins folder)

**Windows**

 C:\Users\(USERNAME)\AppData\Local\gegl-0.4\plug-ins

 **Linux**

~/.local/share/gegl-0.4/plug-ins

 **Linux (Flatpak includes Chromebook)**

~/.var/app/org.gimp.GIMP/data/gegl-0.4/plug-ins

Then Restart Gimp and go to "GEGL Operation" and look for "Ocean's Surface 2". Gimp 2.99.16+ users will find the filter in Filters>Render>Fun , where as 2.10 plugins will only be found in the drop down list.


## Compiling and Installing

### Linux

To compile and install you will need the GEGL header files (`libgegl-dev` on
Debian based distributions or `gegl` on Arch Linux) and meson (`meson` on
most distributions).

```bash
meson setup --buildtype=release build
ninja -C build

```

### Windows

The easiest way to compile this project on Windows is by using msys2.  Download
and install it from here: https://www.msys2.org/

Open a msys2 terminal with `C:\msys64\mingw64.exe`.  Run the following to
install required build dependencies:

```bash
pacman --noconfirm -S base-devel mingw-w64-x86_64-toolchain mingw-w64-x86_64-meson mingw-w64-x86_64-gegl
```

Then build the same way you would on Linux:

```bash
meson setup --buildtype=release build
ninja -C build
```

  
  ## More previews of this based plugin

  ![image](https://github.com/user-attachments/assets/a73b10be-af51-4e2e-809a-53faea61b973)
  
  ![image](https://github.com/user-attachments/assets/7641f6e6-44a5-4723-ab80-a9ea8cd179c9)
  
  ![image](https://github.com/user-attachments/assets/11e903a8-756d-4b70-bc15-04c31e6e863f)


##  Look at all the sliders too

![image](https://github.com/user-attachments/assets/24027274-9b3b-48fb-8087-84f532040642)

