//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol CKAppMenuCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKAppMenuCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    id <CKAppMenuCollectionViewCellDelegate> _delegate;	// 24 = 0x18
    UIView *_selectionView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000132442
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic) __weak id <CKAppMenuCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001322b9
- (void)handleTap:(id)arg1;	// IMP=0x000000000013226d
- (void)didHoverOverCell:(id)arg1;	// IMP=0x00000000001321e8
- (void)layoutSubviews;	// IMP=0x0000000000131c38
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001317f7

@end

