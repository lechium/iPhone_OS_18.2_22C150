//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MKTransitFilterCell : UICollectionViewCell
{
    UILabel *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b747f
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001b728a
- (void)_contentSizeDidChange;	// IMP=0x00000000001b7169
@property(retain, nonatomic) NSString *titleText;
- (void)_setupLabel;	// IMP=0x00000000001b6d56
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b6ad3

@end

