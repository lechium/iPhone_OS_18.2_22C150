//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface CKGroupCollectionViewCell : UICollectionViewCell
{
    UIView *_avatarView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0060000000403c7a
- (void).cxx_destruct;	// IMP=0x0000000000404228
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000403f41
- (_Bool)shouldHighlight;	// IMP=0x0000000000403f39
- (void)layoutSubviews;	// IMP=0x0000000000403de2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000403c87

@end

