//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardShadowView;

@interface CardCustomBorderView
{
    CardShadowView *_cardShadowView;	// 8 = 0x8
    unsigned long long _cardCustomBorder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000cb79a7
@property(nonatomic) unsigned long long cardCustomBorder; // @synthesize cardCustomBorder=_cardCustomBorder;
- (void)layoutSubviews;	// IMP=0x0010000000cb7921
- (void)setButtonCard:(_Bool)arg1;	// IMP=0x0010000000cb7904
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000cb7797

@end
