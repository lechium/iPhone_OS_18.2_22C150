//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPress;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementTabulatorPressGestureRecognizer
{
    UIPress *_trackingPress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000f9c4e5
@property(retain, nonatomic) UIPress *trackingPress; // @synthesize trackingPress=_trackingPress;
- (_Bool)_shouldReceivePress:(id)arg1;	// IMP=0x0000000000f9c424
- (void)reset;	// IMP=0x0000000000f9c3e1
- (unsigned long long)focusHeadingForPresses:(id)arg1;	// IMP=0x0000000000f9c23f
- (void)configureDefaults;	// IMP=0x0000000000f9c205

@end

