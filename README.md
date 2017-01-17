## TWRP device tree for OnePlus 3 (oneplus3)

Add to `.repo/local_manifests/oneplus3.xml`:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
	<project path="device/oneplus/oneplus3" name="android_device_oneplus_oneplus3" remote="TeamWin" revision="android-6.0" />
</manifest>
```

Then run `repo sync` to check it out.

To build:

```sh
. build/envsetup.sh
lunch omni_oneplus3-eng
make -j5 recoveryimage
```

If you want to use the f2fs backport kernel, use `make -j5 USE_F2FS_BACKPORT=1 recoveryimage` instead.  

Kernel sources are available at: https://github.com/jcadduono/android_kernel_oneplus_msm8996/tree/3-twrp-6.0
