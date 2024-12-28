//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class GEOSearchCategory, UIImageView, UILabel;

@interface NavCategoryCell : UITableViewCell
{
    UIImageView *_leadingImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    GEOSearchCategory *_category;	// 24 = 0x18
}

+ (double)heightForCellWithCategory:(id)arg1 width:(double)arg2;	// IMP=0x0040000000bb783a
- (void).cxx_destruct;	// IMP=0x0020000000bb7a11
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000bb76fa
- (void)_updateContent;	// IMP=0x0010000000bb7521
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000bb734b
- (void)prepareForReuse;	// IMP=0x0010000000bb7308
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000bb6ac2

@end
