//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface BCAlertActionTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    UIImageView *_mainImageView;	// 24 = 0x18
}

+ (double)heightForActionItem:(id)arg1 forWidth:(double)arg2;	// IMP=0x0040000000008192
+ (id)reuseIdentifierForItem:(id)arg1;	// IMP=0x001000000000812c
- (void).cxx_destruct;	// IMP=0x0020000000009670
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)loadContentView;	// IMP=0x00100000000083d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000080e0

@end
