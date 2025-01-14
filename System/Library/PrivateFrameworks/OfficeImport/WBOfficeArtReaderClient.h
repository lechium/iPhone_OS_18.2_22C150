//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : NSObject
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;	// IMP=0x00100000003e0205
+ (void)readClientDataFromObject:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x00100000003dff4c
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;	// IMP=0x00100000003dff41
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;	// IMP=0x00100000003dff39
+ (_Bool)tablesAreAllowed;	// IMP=0x00100000001dd01c
+ (_Bool)escherIsFullySupported;	// IMP=0x00100000001587f1
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;	// IMP=0x00100000003dff33
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x00100000001dd090
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x00100000000dd3f0
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 includeText:(_Bool)arg3 state:(id)arg4;	// IMP=0x00100000003dfcd6
+ (double)wrapDistanceBottom:(struct EshContentProperties *)arg1;	// IMP=0x00100000001583bf
+ (double)wrapDistanceRight:(struct EshContentProperties *)arg1;	// IMP=0x0010000000158369
+ (double)wrapDistanceTop:(struct EshContentProperties *)arg1;	// IMP=0x0010000000158313
+ (double)wrapDistanceLeft:(struct EshContentProperties *)arg1;	// IMP=0x00100000001582b1
+ (int)relativeVerticalPosition:(struct EshContentProperties *)arg1;	// IMP=0x0010000000158257
+ (int)verticalPosition:(struct EshContentProperties *)arg1;	// IMP=0x00100000001581fd
+ (int)relativeHorizontalPosition:(struct EshContentProperties *)arg1;	// IMP=0x00100000001581a3
+ (int)horizontalPosition:(struct EshContentProperties *)arg1;	// IMP=0x001000000015814a
+ (_Bool)allowOverlap:(struct EshContentProperties *)arg1;	// IMP=0x0010000000158415
+ (_Bool)behindText:(struct EshContentProperties *)arg1;	// IMP=0x0010000000158465
+ (void)readFrom:(struct EshContentProperties *)arg1 to:(id)arg2;	// IMP=0x0010000000157f54

@end

