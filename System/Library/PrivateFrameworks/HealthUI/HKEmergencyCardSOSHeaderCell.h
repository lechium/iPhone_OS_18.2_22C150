//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface HKEmergencyCardSOSHeaderCell : UITableViewCell
{
    UILabel *_headerLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001dc9cf
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)_updateTextColor;	// IMP=0x00000000001dc933
- (void)tintColorDidChange;	// IMP=0x00000000001dc8f2
- (void)setupConstraints;	// IMP=0x00000000001dc59d
- (void)setupSubviews;	// IMP=0x00000000001dc2e1
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001dc280

@end
