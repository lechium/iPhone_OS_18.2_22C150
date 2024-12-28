//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKGraphViewRendererVirtualMarginConfiguration : NSObject
{
    double _virtualLeftMarginWidth;	// 8 = 0x8
    double _virtualRightMarginWidth;	// 16 = 0x10
    long long _virtualLeftMarginStyle;	// 24 = 0x18
    long long _virtualRightMarginStyle;	// 32 = 0x20
}

@property(readonly, nonatomic) long long virtualRightMarginStyle; // @synthesize virtualRightMarginStyle=_virtualRightMarginStyle;
@property(readonly, nonatomic) long long virtualLeftMarginStyle; // @synthesize virtualLeftMarginStyle=_virtualLeftMarginStyle;
@property(readonly, nonatomic) double virtualRightMarginWidth; // @synthesize virtualRightMarginWidth=_virtualRightMarginWidth;
@property(readonly, nonatomic) double virtualLeftMarginWidth; // @synthesize virtualLeftMarginWidth=_virtualLeftMarginWidth;
- (id)initWithVirtualLeftMarginWidth:(double)arg1 virtualRightMarginWidth:(double)arg2 virtualLeftMarginStyle:(long long)arg3 virtualRightMarginStyle:(long long)arg4;	// IMP=0x00000000001e9d8f

@end
