//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class MISSING_TYPE, NSString, UIColor, UILabel, UIView;

@interface ReservationTableViewCell : UITableViewCell
{
    NSString *_titleText;	// 8 = 0x8
    MISSING_TYPE *_detailText;	// 16 = 0x10
    UILabel *_detailLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIView *_detailView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000b262e9
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(retain, nonatomic) UIColor *detailTextColor;
- (void)updateLabels;	// IMP=0x0010000000b26022
- (void)setupTextVerticalConstraints;	// IMP=0x0010000000b25c54
- (void)_setupConstraints;	// IMP=0x0010000000b25911
- (void)loadDetailView;	// IMP=0x0010000000b257d8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000b255e9

@end
