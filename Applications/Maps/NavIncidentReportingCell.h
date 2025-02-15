//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class TrafficIncidentLayoutItem, UIImageView, UILabel;

@interface NavIncidentReportingCell : UITableViewCell
{
    UIImageView *_leadingImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    TrafficIncidentLayoutItem *_item;	// 24 = 0x18
}

+ (double)heightForCellWithItem:(id)arg1 width:(double)arg2;	// IMP=0x0040000000dca7b0
- (void).cxx_destruct;	// IMP=0x0020000000dca987
@property(retain, nonatomic) TrafficIncidentLayoutItem *item; // @synthesize item=_item;
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000dca670
- (void)_updateContent;	// IMP=0x0010000000dca597
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000dca418
- (void)prepareForReuse;	// IMP=0x0010000000dca3d5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000dc9b8f

@end

