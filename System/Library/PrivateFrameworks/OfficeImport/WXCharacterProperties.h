//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject
{
}

+ (void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2;	// IMP=0x00400000001a4814
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x00400000001970a5
+ (id)fontHintEnumMap;	// IMP=0x0040000000405fd5
+ (id)twoLineBracketsEnumMap;	// IMP=0x0040000000405f21
+ (id)emphasisMarkEnumMap;	// IMP=0x0040000000405e6d
+ (id)verticalAlignEnumMap;	// IMP=0x0040000000405db9
+ (id)ligaturesEnumMap;	// IMP=0x0040000000405d05
+ (id)highlightEnumMap;	// IMP=0x0040000000405c51
+ (id)underlineEnumMap;	// IMP=0x0040000000405b9d
+ (_Bool)isBooleanCharacterPropertyTrue:(int)arg1;	// IMP=0x0040000000407584
+ (_Bool)readBooleanCharacterProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;	// IMP=0x004000000040754a
+ (id)readFillColor:(struct _xmlNode *)arg1 forTarget:(id)arg2 state:(id)arg3;	// IMP=0x004000000040727f
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;	// IMP=0x0040000000406e70
+ (_Bool)readBooleanCharacterMultipleProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;	// IMP=0x0040000000406e36
+ (void)readShadowForTarget:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;	// IMP=0x00400000004066c1

@end

