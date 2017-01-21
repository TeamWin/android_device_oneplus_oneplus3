## TWRP device tree for OnePlus 3 and OnePlus 3T (oneplus3/oneplus3t)

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

Kernel sources are available at: https://github.com/jcadduono/android_kernel_oneplus_msm8996/tree/twrp-7.0
