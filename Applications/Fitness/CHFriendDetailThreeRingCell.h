//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class ARUIRingsView, HKActivitySummary;

@interface CHFriendDetailThreeRingCell : UIView
{
    ARUIRingsView *_ringsView;	// 8 = 0x8
    HKActivitySummary *_activitySummary;	// 16 = 0x10
    _Bool _isFriendHidingDataFromMe;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000086a13
- (void)setIsStandalonePhoneFitnessMode:(_Bool)arg1;	// IMP=0x00100000000869be
- (void)setHidden:(_Bool)arg1;	// IMP=0x0010000000086965
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000868fa
- (double)preferredWidth;	// IMP=0x00100000000868d8
- (double)preferredHeight;	// IMP=0x00100000000868b6
- (void)layoutSubviews;	// IMP=0x000000000008679e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000086741
- (void)_setupCell;	// IMP=0x00100000000865b0

@end
