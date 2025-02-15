//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol _UITextCanvasContext;

@protocol _UITextCanvas <NSObject>
@property _Bool layoutFragmentViewsNeedDisplay;
@property(nonatomic) __weak id <_UITextCanvasContext> context;
- (void)flushFragmentViews;
- (void)configureCustomTextRenderer;
- (void)isEditingDidChange;
- (void)updateContentSizeIfNeeded;
- (void)viewportBoundsDidChange;
- (void)drawTextInRect:(struct CGRect)arg1;
@end

