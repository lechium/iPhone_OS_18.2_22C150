//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDShortcutColumnMetrics : NSObject
{
    double _columnWidth;	// 8 = 0x8
    double _modifiersWidth;	// 16 = 0x10
    double _inputWidth;	// 24 = 0x18
}

+ (id)metricsWithColumnWidth:(double)arg1 modifiersWidth:(double)arg2 inputWidth:(double)arg3;	// IMP=0x0060000000d699c4
@property(readonly, nonatomic) double inputWidth; // @synthesize inputWidth=_inputWidth;
@property(readonly, nonatomic) double modifiersWidth; // @synthesize modifiersWidth=_modifiersWidth;
@property(readonly, nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;

@end

