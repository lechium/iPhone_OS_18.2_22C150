//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

@class NSMutableArray, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController, UIEvent;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlay : UIWindow
{
    _Bool _isFullscreen;	// 8 = 0x8
    _Bool _checkingTouches;	// 9 = 0x9
    _Bool _touchCaptureEnabled;	// 10 = 0xa
    NSMutableArray *_touchObservers;	// 16 = 0x10
    UIWindow *_inspectedWindow;	// 24 = 0x18
    UIEvent *_lastTouch;	// 32 = 0x20
    struct CGPoint _drawingOrigin;	// 40 = 0x28
}

+ (id)overlay;	// IMP=0x0010000001834c20
+ (void)prepareDebuggingOverlay;	// IMP=0x0010000001834a96
- (void).cxx_destruct;	// IMP=0x00000000018357cb
@property(nonatomic) struct CGPoint drawingOrigin; // @synthesize drawingOrigin=_drawingOrigin;
@property(retain, nonatomic) UIEvent *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(retain, nonatomic) UIWindow *inspectedWindow; // @synthesize inspectedWindow=_inspectedWindow;
@property(retain, nonatomic) NSMutableArray *touchObservers; // @synthesize touchObservers=_touchObservers;
@property(nonatomic) _Bool touchCaptureEnabled; // @synthesize touchCaptureEnabled=_touchCaptureEnabled;
@property(nonatomic) _Bool checkingTouches; // @synthesize checkingTouches=_checkingTouches;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001835588
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000183513c
- (void)toggleFullscreen;	// IMP=0x00000000018350ff
- (void)toggleVisibility;	// IMP=0x000000000183505e
- (void)_setHidden:(_Bool)arg1;	// IMP=0x0000000001834cd2
@property(readonly, nonatomic) UIDebuggingInformationOverlayViewController *overlayViewController;
- (id)init;	// IMP=0x000000000183497e

@end

