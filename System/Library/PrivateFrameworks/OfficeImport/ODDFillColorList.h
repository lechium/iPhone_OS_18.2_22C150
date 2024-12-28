//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject
{
    NSArray *mColors;	// 8 = 0x8
    int mHueDirection;	// 16 = 0x10
    int mMethod;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000032f4ea
- (void)setMethod:(int)arg1;	// IMP=0x00000000001e13b0
- (void)setHueDirection:(int)arg1;	// IMP=0x00000000001e12cf
- (void)setColors:(id)arg1;	// IMP=0x00000000001e13b9
- (id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;	// IMP=0x00000000001e774f
- (void)getComponentsForIndex:(unsigned long long)arg1 hue:(float *)arg2 saturation:(float *)arg3 brightness:(float *)arg4 state:(id)arg5;	// IMP=0x000000000032f4fa
- (id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;	// IMP=0x0000000000227339
- (id)repeatColorAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001e7816
- (id)cycleColorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023d094

@end
