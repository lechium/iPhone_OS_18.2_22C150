//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

@interface COSUsageTotalUsedHeader : UIView
{
    UILabel *_usedLabel;	// 8 = 0x8
    UILabel *_availableLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    double _height;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000125e2
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *availableLabel; // @synthesize availableLabel=_availableLabel;
@property(retain, nonatomic) UILabel *usedLabel; // @synthesize usedLabel=_usedLabel;
- (double)preferredHeightForWidth:(double)arg1;	// IMP=0x001000000001253d
- (void)layoutSubviews;	// IMP=0x0010000000012220
- (void)setUsed:(id)arg1;	// IMP=0x00100000000121d0
- (void)setAvailable:(id)arg1;	// IMP=0x0010000000012180
- (void)setName:(id)arg1;	// IMP=0x0010000000012130
- (void)recalcHeight;	// IMP=0x0010000000012001
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000011cf5
- (id)initWithSpecifier:(id)arg1;	// IMP=0x0010000000011cc3

@end
