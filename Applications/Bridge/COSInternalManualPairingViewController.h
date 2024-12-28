//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class COSManualFlowView, NSString;
@protocol COSInternalManualPairingDelegate;

@interface COSInternalManualPairingViewController : UIViewController
{
    id <COSInternalManualPairingDelegate> _pairingDelegate;	// 8 = 0x8
    COSManualFlowView *_manualView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002afb1
@property(retain, nonatomic) COSManualFlowView *manualView; // @synthesize manualView=_manualView;
@property(nonatomic) id <COSInternalManualPairingDelegate> pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
- (void)pressedDone:(id)arg1;	// IMP=0x001000000002ade1
- (void)pressedCancel:(id)arg1;	// IMP=0x001000000002adc4
- (void)tappedManualMode:(id)arg1;	// IMP=0x001000000002ada4
- (void)viewDidLoad;	// IMP=0x001000000002acb0
- (id)init;	// IMP=0x001000000002ac0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;

@end
