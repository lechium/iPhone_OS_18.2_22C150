//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PSDisplay, PSPointerPortalSourceCollection, _UILumaTrackingBackdropView, _UIPortalView;

@interface PUIDSystemPointerRootViewController : UIViewController
{
    CDUnknownBlockType _lumaChangedHandlerBlock;	// 8 = 0x8
    _Bool _sampling;	// 16 = 0x10
    _UILumaTrackingBackdropView *_pointerLumaMeasurementView;	// 24 = 0x18
    _UIPortalView *_systemPointerPortalView;	// 32 = 0x20
    PSDisplay *_display;	// 40 = 0x28
    PSPointerPortalSourceCollection *_systemPointerPortalSourceCollection;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000255a9
@property(retain, nonatomic) PSPointerPortalSourceCollection *systemPointerPortalSourceCollection; // @synthesize systemPointerPortalSourceCollection=_systemPointerPortalSourceCollection;
@property(readonly, nonatomic) PSDisplay *display; // @synthesize display=_display;
- (void)_addMatchMoveAnimationFromSource:(id)arg1 toView:(id)arg2;	// IMP=0x00100000000252e1
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;	// IMP=0x00100000000252c1
- (void)setLumaChangedHandlerBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002528d
- (void)setSamplingLuma:(_Bool)arg1 seedingWithLumaLevel:(unsigned long long)arg2;	// IMP=0x00100000000251db
@property(readonly, copy) NSString *description;
- (void)viewDidLoad;	// IMP=0x0010000000024d26
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000024d1e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000024c95
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000024c0c
- (id)initWithDisplay:(id)arg1;	// IMP=0x0010000000024b9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

