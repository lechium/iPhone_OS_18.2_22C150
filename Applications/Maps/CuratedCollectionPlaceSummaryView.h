//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

@interface CuratedCollectionPlaceSummaryView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    UILabel *_tertiaryLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000da48f2
@property(retain, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_setupConstraints;	// IMP=0x0010000000da4119
- (void)_createSubviews;	// IMP=0x0010000000da3b81
- (void)configureWithModel:(id)arg1;	// IMP=0x0010000000da38b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000da382e

@end
