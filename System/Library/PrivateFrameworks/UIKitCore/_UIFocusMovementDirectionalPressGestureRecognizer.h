//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIFocusMovementDirectionalPressGestureRecognizer
{
    struct {
        unsigned int determinedPressSource:1;
    } _flags;	// 8 = 0x8
    unsigned long long _pressSource;	// 16 = 0x10
}

@property(nonatomic) unsigned long long pressSource; // @synthesize pressSource=_pressSource;
- (void)reset;	// IMP=0x00000000015d3487
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000015d3401
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000015d337b
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000015d32f5
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000015d2f64
- (id)_filterPressesByPressSource:(id)arg1;	// IMP=0x00000000015d2d7c
- (unsigned long long)focusHeadingForPresses:(id)arg1;	// IMP=0x00000000015d2cde
- (void)configureDefaults;	// IMP=0x00000000015d2ca4

@end

