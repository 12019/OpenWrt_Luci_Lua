// Decompiled by Jad v1.5.8g. Copyright 2001 Pavel Kouznetsov.
// Jad home page: http://www.kpdus.com/jad.html
// Decompiler options: packimports(3) 

package ch.qos.logback.core.pattern.util;


// Referenced classes of package ch.qos.logback.core.pattern.util:
//            IEscapeUtil

public class AsIsEscapeUtil
    implements IEscapeUtil
{

    public AsIsEscapeUtil()
    {
    }

    public void escape(String s, StringBuffer stringbuffer, char c, int i)
    {
        stringbuffer.append("\\");
        stringbuffer.append(c);
    }
}
