//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBColorScheme : NSObject
{
}

+ (void)readFromColorScheme:(struct PptColorSchemeAtom *)arg1 toColorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;	// IMP=0x0080000000024390
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 atIndex:(int)arg3 inScheme:(id)arg4;	// IMP=0x0080000000024745
+ (void)addColorWithIndex:(int)arg1 fromScheme:(struct PptColorSchemeAtom *)arg2 colorTransform:(CDUnknownFunctionPointerType)arg3 atIndex:(int)arg4 inScheme:(id)arg5;	// IMP=0x008000000002476d
+ (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1;	// IMP=0x008000000042d150
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1;	// IMP=0x008000000042d132

@end

