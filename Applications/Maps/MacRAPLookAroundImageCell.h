//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImage, UIImageView;

@interface MacRAPLookAroundImageCell : UITableViewCell
{
    UIImage *_lookAroundImage;	// 8 = 0x8
    UIImageView *_lookAroundImageView;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x0020000000539960
- (void).cxx_destruct;	// IMP=0x00200000005399a3
@property(retain, nonatomic) UIImageView *lookAroundImageView; // @synthesize lookAroundImageView=_lookAroundImageView;
@property(retain, nonatomic) UIImage *lookAroundImage; // @synthesize lookAroundImage=_lookAroundImage;
- (void)_setupConstraints;	// IMP=0x0010000000539554
- (void)_setupSubviews;	// IMP=0x0010000000539409
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000053931a

@end
