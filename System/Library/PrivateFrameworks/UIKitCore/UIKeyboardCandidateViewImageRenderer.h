//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewImageRenderer : NSObject
{
    UIView *_viewForTraitCollection;	// 8 = 0x8
    NSCache *_imageCache;	// 16 = 0x10
}

+ (id)sharedImageRenderer;	// IMP=0x0060000000d95e12
- (void).cxx_destruct;	// IMP=0x0000000000d9760e
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak UIView *viewForTraitCollection; // @synthesize viewForTraitCollection=_viewForTraitCollection;
- (id)drawGradientImage:(struct CGRect)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 applyScale:(_Bool)arg4;	// IMP=0x0000000000d9732e
- (id)edgeMaskImageForRightSide:(_Bool)arg1;	// IMP=0x0000000000d971a9
- (id)extensionMaskImage;	// IMP=0x0000000000d9706d
- (id)handwritingCellBackgroundImageForDarkKeyboard:(_Bool)arg1 highlighted:(_Bool)arg2;	// IMP=0x0000000000d96dc4
- (id)pocketShadowImageForDarkKeyboard:(_Bool)arg1 fadesToBottom:(_Bool)arg2 drawShadow:(_Bool)arg3 topPadding:(double)arg4 bottomPadding:(double)arg5 height:(double)arg6;	// IMP=0x0000000000d9663e
- (id)separatorImageWithColor:(id)arg1 height:(double)arg2;	// IMP=0x0000000000d963ee
- (id)highlightedBarCellBackgroundImageWithColor:(id)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000d95e67
- (id)init;	// IMP=0x0000000000d95dbc

@end
