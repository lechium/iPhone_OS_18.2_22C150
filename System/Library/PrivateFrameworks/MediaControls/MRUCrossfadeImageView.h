//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIImage;

@interface MRUCrossfadeImageView : UIView
{
    MISSING_TYPE *primaryImageView;	// 8 = 0x8
    MISSING_TYPE *secondaryImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000173270
- (void)transitionTo:(id)arg1;	// IMP=0x00000000001731e0
- (void)layoutSubviews;	// IMP=0x0000000000172f20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172d90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000172d60
@property(nonatomic) long long contentMode;
@property(nonatomic, readonly) UIImage *image;

@end

