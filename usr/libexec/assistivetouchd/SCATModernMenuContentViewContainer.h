//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray;

@interface SCATModernMenuContentViewContainer : UIView
{
    UIView *_contentView;	// 8 = 0x8
    NSArray *_contentViewConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c6e45
@property(retain, nonatomic) NSArray *contentViewConstraints; // @synthesize contentViewConstraints=_contentViewConstraints;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000000c6d8f
- (id)collectionView;	// IMP=0x00100000000c6c23
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000c6899

@end

