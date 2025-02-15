//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIImage;

__attribute__((visibility("hidden")))
@interface CNFRegShadowView : UIView
{
    struct CGRect _cachedBounds;	// 8 = 0x8
    UIBezierPath *_cachedPath;	// 40 = 0x28
    UIImage *_shadowImage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000087177
@property(retain, nonatomic) UIBezierPath *cachedPath; // @synthesize cachedPath=_cachedPath;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) struct CGRect cachedBounds; // @synthesize cachedBounds=_cachedBounds;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000086f18
- (id)initWithFrame:(struct CGRect)arg1 shadowImage:(id)arg2;	// IMP=0x0000000000086e88

@end

