//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI20WorkoutCountdownView : UIView
{
    MISSING_TYPE *onCountdownStep;	// 8 = 0x8
    MISSING_TYPE *onCountdownWindUp;	// 24 = 0x18
    MISSING_TYPE *onCountdownFadeOut;	// 40 = 0x28
    MISSING_TYPE *onCountdownCompleted;	// 56 = 0x38
    MISSING_TYPE *readyLabel;	// 72 = 0x48
    MISSING_TYPE *oneLabel;	// 80 = 0x50
    MISSING_TYPE *twoLabel;	// 88 = 0x58
    MISSING_TYPE *threeLabel;	// 96 = 0x60
    MISSING_TYPE *countdownRingView;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001a4bb0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a4b50
- (void)layoutSubviews;	// IMP=0x00000000001a3ee0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a3ec0
- (void)accessibilityUpdateCountdownToStep:(long long)arg1;	// IMP=0x00000000001a5010

@end
