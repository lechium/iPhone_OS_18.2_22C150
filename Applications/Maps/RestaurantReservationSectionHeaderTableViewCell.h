//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKViewWithHairline, NSString, UIColor, UIFont, UILabel;

@interface RestaurantReservationSectionHeaderTableViewCell
{
    UILabel *_headerLabel;	// 8 = 0x8
    MKViewWithHairline *_hairlineContainer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000bd50c1
@property(retain, nonatomic) MKViewWithHairline *hairlineContainer; // @synthesize hairlineContainer=_hairlineContainer;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) _Bool hidesHairline;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
- (void)updateTheme;	// IMP=0x0010000000bd4cff
- (void)initConstraints;	// IMP=0x0010000000bd44ff
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000bd424e

@end
