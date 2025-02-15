//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class GradientView, HairlineView;

@interface CompactGuidesSectionBackground : UICollectionReusableView
{
    GradientView *_backgroundGradientView;	// 8 = 0x8
    HairlineView *_topHairline;	// 16 = 0x10
    HairlineView *_bottomHairline;	// 24 = 0x18
}

+ (id)decorationViewKind;	// IMP=0x00400000009336ac
- (void).cxx_destruct;	// IMP=0x0020000000934445
@property(retain, nonatomic) HairlineView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) HairlineView *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) GradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000934317
- (void)updateBackgroundUI;	// IMP=0x001000000093416e
- (void)setupGradientBackground;	// IMP=0x0010000000933d19
- (void)setupHairlines;	// IMP=0x001000000093372b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009336b9

@end

