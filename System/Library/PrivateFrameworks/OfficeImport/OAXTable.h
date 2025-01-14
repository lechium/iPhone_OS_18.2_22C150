//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTable : NSObject
{
}

+ (id)readDefaultTableStyleWithDrawingState:(id)arg1;	// IMP=0x00800000001c8951
+ (void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002faef3
+ (id)readFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001f5c8c
+ (id)readTableStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c8c3c
+ (void)readRowsFromTableXmlNode:(struct _xmlNode *)arg1 toTable:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001f63a0
+ (void)readRowFromXmlNode:(struct _xmlNode *)arg1 toRow:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001f65ba
+ (void)readCellFromXmlNode:(struct _xmlNode *)arg1 toCell:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001f67e3
+ (id)readCellPropertiesFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001f6a53
+ (void)readGridFromXmlNode:(struct _xmlNode *)arg1 toGrid:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000002fb144
+ (void)readPropertiesFromXmlNode:(struct _xmlNode *)arg1 toProperties:(id)arg2 drawingState:(id)arg3;	// IMP=0x00800000001f5e5f
+ (id)readPartStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c9189
+ (id)readTextStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c9bf6
+ (int)readOnOffFlag:(id)arg1;	// IMP=0x00800000001c9f8a
+ (id)readCellStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c930f
+ (id)readCellBorderStyle:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c945e
+ (id)readThemableEffectsFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x0080000000222143
+ (id)readThemableFillFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c9914
+ (id)readThemableStrokeFromParent:(struct _xmlNode *)arg1 drawingState:(id)arg2;	// IMP=0x00800000001c966b

@end

