//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIAttributedStringView;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringWrapperView
{
    SKUIAttributedStringView *_delegateView;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000031e7b6
@property(readonly, nonatomic) SKUIAttributedStringView *delegateView; // @synthesize delegateView=_delegateView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000031e788
- (void)layoutSubviews;	// IMP=0x000000000031e448
- (_Bool)usesTallCharacterSet;	// IMP=0x000000000031e42b
- (id)treatmentColor;	// IMP=0x000000000031e40e
- (void)setTreatmentColor:(id)arg1;	// IMP=0x000000000031e3f1
- (_Bool)textColorFollowsTintColor;	// IMP=0x000000000031e3d4
- (void)setTextColorFollowsTintColor:(_Bool)arg1;	// IMP=0x000000000031e3b7
- (id)textColor;	// IMP=0x000000000031e39a
- (void)setTextColor:(id)arg1;	// IMP=0x000000000031e37d
- (long long)stringTreatment;	// IMP=0x000000000031e360
- (void)setStringTreatment:(long long)arg1;	// IMP=0x000000000031e343
- (id)requiredBadges;	// IMP=0x000000000031e326
- (void)setRequiredBadges:(id)arg1;	// IMP=0x000000000031e309
- (id)layout;	// IMP=0x000000000031e2ec
- (void)setLayout:(id)arg1;	// IMP=0x000000000031e2cf
- (long long)firstLineTopInset;	// IMP=0x000000000031e2b2
- (void)setFirstLineTopInset:(long long)arg1;	// IMP=0x000000000031e295
- (void)setBadgePlacement:(long long)arg1;	// IMP=0x000000000031e278
- (double)firstBaselineOffset;	// IMP=0x000000000031e25b
- (double)baselineOffset;	// IMP=0x000000000031e23e
- (long long)badgePlacement;	// IMP=0x000000000031e221
- (void)viewWasRecycled;	// IMP=0x000000000031e204
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000031e10f

@end

