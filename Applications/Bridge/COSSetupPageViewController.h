//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSString, NSUserActivity;
@protocol COSBuddyControllerDelegate;

@interface COSSetupPageViewController : OBTableWelcomeController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
    NSUserActivity *_tapToRadarActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001344d5
@property(retain, nonatomic) NSUserActivity *tapToRadarActivity; // @synthesize tapToRadarActivity=_tapToRadarActivity;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_endTapToRadarActivity;	// IMP=0x0010000000134441
- (void)_startTapToRadarActivity;	// IMP=0x0010000000134368
- (void)openTapToRadar;	// IMP=0x001000000013430f
- (id)tapToRadarMetadata;	// IMP=0x00100000001342e4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000001342a3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000134262
- (id)titleLabel;	// IMP=0x00100000001340bc
- (id)init;	// IMP=0x001000000013407e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
