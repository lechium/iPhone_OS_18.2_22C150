//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC12GameCenterUI22GKAddFriendsLockupView : UIView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *textLabel;	// 16 = 0x10
    MISSING_TYPE *button;	// 24 = 0x18
    MISSING_TYPE *metricsPageId;	// 32 = 0x20
    MISSING_TYPE *metricsPageType;	// 48 = 0x30
    MISSING_TYPE *addFriendsHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000177452
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017741c
- (void)didTapButton:(id)arg1;	// IMP=0x0000000000177311
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000001770b0
- (void)layoutSubviews;	// IMP=0x0000000000176e72
@property(nonatomic, copy) CDUnknownBlockType addFriendsHandler;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000176922
- (id)initWithFrame:(struct CGRect)arg1 friendState:(long long)arg2 metricsPageId:(id)arg3 metricsPageType:(id)arg4;	// IMP=0x0000000000176823

@end
