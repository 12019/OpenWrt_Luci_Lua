// Decompiled by Jad v1.5.8g. Copyright 2001 Pavel Kouznetsov.
// Jad home page: http://www.kpdus.com/jad.html
// Decompiler options: packimports(3) 

package com.sonos.sclib;

import com.sonos.jniutil.NativeCleanupInvocation;
import java.lang.reflect.Method;

// Referenced classes of package com.sonos.sclib:
//            SCILocalMediaCollection, sclibJNI

public class SCILocalMediaCollectionSwigBase extends SCILocalMediaCollection
{

    public SCILocalMediaCollectionSwigBase()
    {
        SCILocalMediaCollectionSwigBase(sclibJNI.new_SCILocalMediaCollectionSwigBase(), true);
        sclibJNI.SCILocalMediaCollectionSwigBase_director_connect(this, swigCPtr, true, true);
    }

    protected SCILocalMediaCollectionSwigBase(long l, NativeCleanupInvocation nativecleanupinvocation)
    {
        SCILocalMediaCollection(sclibJNI.SWIGSCILocalMediaCollectionSwigBaseUpcast(l), nativecleanupinvocation);
        swigCPtr = l;
    }

    protected SCILocalMediaCollectionSwigBase(long l, boolean flag)
    {
        NativeCleanupInvocation nativecleanupinvocation;
        if(flag)
            nativecleanupinvocation = new NativeCleanupInvocation(dtorMethod, l);
        else
            nativecleanupinvocation = null;
        SCILocalMediaCollectionSwigBase(l, nativecleanupinvocation);
    }

    protected static long getCPtr(SCILocalMediaCollectionSwigBase scilocalmediacollectionswigbase)
    {
        long l;
        if(scilocalmediacollectionswigbase == null)
            l = 0L;
        else
            l = scilocalmediacollectionswigbase.swigCPtr;
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

    public String dumpSCIObj()
    {
        String s;
        if(getClass() == com/sonos/sclib/SCILocalMediaCollectionSwigBase)
            s = sclibJNI.SCILocalMediaCollectionSwigBase_dumpSCIObj(swigCPtr, this);
        else
            s = sclibJNI.SCILocalMediaCollectionSwigBase_dumpSCIObjSwigExplicitSCILocalMediaCollectionSwigBase(swigCPtr, this);
        return s;
    }

    protected void swigDirectorDisconnect()
    {
        nativeRef = null;
        dispose();
    }

    private static final Method dtorMethod = NativeCleanupInvocation.lookupMethod(com/sonos/sclib/sclibJNI, "delete_SCILocalMediaCollectionSwigBase");
    private long swigCPtr;

}
