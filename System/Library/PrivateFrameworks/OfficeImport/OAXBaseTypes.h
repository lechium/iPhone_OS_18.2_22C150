//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject
{
}

+ (id)readRotation3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001dbbd9
+ (id)readPoint3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000002ecb03
+ (id)readVector3DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000002eca62
+ (void)writeRectAlignment:(int)arg1 to:(id)arg2;	// IMP=0x00800000002ec9a2
+ (int)readRectAlignmentFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000027530
+ (void)writeRelativeRect:(id)arg1 to:(id)arg2;	// IMP=0x00800000002ec68b
+ (id)stringForRectAlignment:(int)arg1;	// IMP=0x00800000002ec618
+ (id)readRelativeRectFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x0080000000027886
+ (struct CGSize)readSize2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001a8531
+ (struct CGPoint)readPoint2DFromXmlNode:(struct _xmlNode *)arg1;	// IMP=0x00800000001a84a5
+ (float)readOptionalFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000027960
+ (float)readRequiredFractionFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000000263fc
+ (double)readOptionalAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000193f47
+ (double)readRequiredAngleFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001dbc86
+ (float)readOptionalLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001e95eb
+ (float)readRequiredLengthFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x00800000001a8507
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00800000002ec5fc
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 desiredOutputUnit:(int)arg3;	// IMP=0x00800000002ec5df
+ (long long)readOptionalLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x0080000000027982
+ (long long)readRequiredLongFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2;	// IMP=0x008000000002641b
+ (id)rectAlignmentEnumMap;	// IMP=0x00800000001d685b

@end

