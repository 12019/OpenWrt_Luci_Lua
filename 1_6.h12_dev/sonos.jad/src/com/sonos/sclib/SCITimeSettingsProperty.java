// Decompiled by Jad v1.5.8g. Copyright 2001 Pavel Kouznetsov.
// Jad home page: http://www.kpdus.com/jad.html
// Decompiler options: packimports(3) 

package com.sonos.sclib;

import com.sonos.jniutil.NativeCleanupInvocation;
import java.lang.reflect.Method;

// Referenced classes of package com.sonos.sclib:
//            SCISettingsProperty, sclibJNI, SCITime

public class SCITimeSettingsProperty extends SCISettingsProperty
{

    protected SCITimeSettingsProperty(long l, NativeCleanupInvocation nativecleanupinvocation)
    {
        SCISettingsProperty(sclibJNI.SWIGSCITimeSettingsPropertyUpcast(l), nativecleanupinvocation);
        swigCPtr = l;
    }

    protected SCITimeSettingsProperty(long l, boolean flag)
    {
        NativeCleanupInvocation nativecleanupinvocation;
        if(flag)
            nativecleanupinvocation = new NativeCleanupInvocation(dtorMethod, l);
        else
            nativecleanupinvocation = null;
        SCITimeSettingsProperty(l, nativecleanupinvocation);
    }

    protected static long getCPtr(SCITimeSettingsProperty scitimesettingsproperty)
    {
        long l;
        if(scitimesettingsproperty == null)
            l = 0L;
        else
            l = scitimesettingsproperty.swigCPtr;
        return l;
    }

    /**
     * @deprecated Method dispose is deprecated
     */

    public void dispose()
    {
        this;
        JVM INSTR monitorenter ;
        swigCPtr = 0L;
        dispose();
        this;
        JVM INSTR monitorexit ;
        return;
        Exception exception;
        exception;
        throw exception;
    }

    public String getFormattedValue()
    {
        return sclibJNI.SCITimeSettingsProperty_getFormattedValue(swigCPtr, this);
    }

    public SCITime getValue()
    {
        long l = sclibJNI.SCITimeSettingsProperty_getValue(swigCPtr, this);
        SCITime scitime;
        if(l == 0L)
            scitime = null;
        else
            scitime = new SCITime(l, true);
        return scitime;
    }

    private static final Method dtorMethod = NativeCleanupInvocation.lookupMethod(com/sonos/sclib/sclibJNI, "delete_SCITimeSettingsProperty");
    private long swigCPtr;

}
