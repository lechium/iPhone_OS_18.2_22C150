//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIImage;

@interface CNKParticipantScreenShareInfoViewInternal : UIView
{
    MISSING_TYPE *nameLabel;	// 8 = 0x8
    MISSING_TYPE *stackView;	// 16 = 0x10
    MISSING_TYPE *avatarImageView;	// 24 = 0x18
    MISSING_TYPE *backgroundBlurView;	// 32 = 0x20
    MISSING_TYPE *normalConstraints;	// 40 = 0x28
    MISSING_TYPE *fullScreenConstraints;	// 48 = 0x30
    MISSING_TYPE *customCornerRadius;	// 56 = 0x38
    MISSING_TYPE *avatarImage;	// 64 = 0x40
    MISSING_TYPE *isFullScreenMode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000298727
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002986e2
- (void)configureWith:(id)arg1 isFullScreenMode:(_Bool)arg2;	// IMP=0x00000000002985f5
- (void)layoutSubviews;	// IMP=0x0000000000298344
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029832c
- (id)init;	// IMP=0x000000000029819a
@property(nonatomic, retain) UIImage *avatarImage; // @synthesize avatarImage;
@property(nonatomic, readonly) double preferredHeight;
@property(nonatomic) double customCornerRadius; // @synthesize customCornerRadius;

@end
