//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SFBadgeMaskView : UIView
{
    struct CGRect _badgeRect;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00600000000ab834
@property(nonatomic) struct CGRect badgeRect; // @synthesize badgeRect=_badgeRect;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000abafb
- (void)_updateShape;	// IMP=0x00000000000ab993
- (void)layoutSubviews;	// IMP=0x00000000000ab857
@property(readonly, nonatomic) CAShapeLayer *shapeLayer;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ab74f

@end

