//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, PXPhotosDetailsContext, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUICore19PhotosDetailsWidget : NSObject
{
    MISSING_TYPE *widgetDelegate;	// 8 = 0x8
    MISSING_TYPE *_context;	// 16 = 0x10
    MISSING_TYPE *_viewModel;	// 24 = 0x18
    MISSING_TYPE *_spec;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_contentViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000033ff90
- (id)init;	// IMP=0x000000000033fee0
- (void)contentViewDidDisappear;	// IMP=0x000000000033fe80
@property(nonatomic, readonly) id <PXAnonymousView> contentView;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x000000000033fcc0
@property(nonatomic, retain) PXWidgetSpec *spec;
@property(nonatomic, retain) PXPhotosDetailsContext *context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate;

@end
