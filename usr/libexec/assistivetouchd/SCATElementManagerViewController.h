//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SCATElementManager, SCATStyleProvider;

@interface SCATElementManagerViewController : UIViewController
{
    SCATElementManager *_elementManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000100919
@property(nonatomic) __weak SCATElementManager *elementManager; // @synthesize elementManager=_elementManager;
- (void)orientationDidChange:(id)arg1;	// IMP=0x00100000001008e6
- (_Bool)isDisplayed;	// IMP=0x0010000000100883
- (void)updateCustomFocusingViewStateForViewsWithElement:(id)arg1;	// IMP=0x0010000000100571
- (id)viewsRequiringStateUpdate;	// IMP=0x0010000000100569
- (void)didDismiss:(_Bool)arg1;	// IMP=0x001000000010052c
- (void)willDismiss:(_Bool)arg1;	// IMP=0x00100000001004ef
- (void)didUpdateWithDisplayContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001004b2
- (void)didPresentWithDisplayContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000100475
- (void)didAddSubviewToDisplayContext:(id)arg1;	// IMP=0x001000000010046f
- (void)willPresentWithDisplayContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000100432
- (void)dismiss:(_Bool)arg1;	// IMP=0x0010000000100293
- (void)presentWithDisplayContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000010005a
@property(readonly, nonatomic) SCATStyleProvider *styleProvider;
- (void)viewDidLoad;	// IMP=0x00100000000ffffe
- (id)initWithElementManager:(id)arg1;	// IMP=0x00100000000fff92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
