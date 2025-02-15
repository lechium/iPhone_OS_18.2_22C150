//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COSSetupController, FAFamilyMember, NRDevice, NSString, UIViewController;
@protocol BPSBuddyController, COSBuddyControllerDelegate;

@interface COSTinkerHealthSharingSetupDelegate : NSObject
{
    COSSetupController *_setupController;	// 8 = 0x8
    UIViewController<BPSBuddyController> *_presentingController;	// 16 = 0x10
    id <COSBuddyControllerDelegate> _buddyControllerDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000015c7f
@property(nonatomic) __weak id <COSBuddyControllerDelegate> buddyControllerDelegate; // @synthesize buddyControllerDelegate=_buddyControllerDelegate;
@property(nonatomic) __weak UIViewController<BPSBuddyController> *presentingController; // @synthesize presentingController=_presentingController;
- (void)sharingSetupDidSucceed;	// IMP=0x0010000000015bd7
- (void)sharingSetupDidFailWithError:(id)arg1;	// IMP=0x0010000000015984
@property(readonly) FAFamilyMember *guardianMember;
@property(readonly) FAFamilyMember *tinkerMember;
@property(readonly) NRDevice *tinkerDevice;
- (id)init;	// IMP=0x001000000001587a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

