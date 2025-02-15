//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNHealthStoreManager, NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface CNMedicalIDAction
{
    long long _medicalIDActionType;	// 8 = 0x8
    CNHealthStoreManager *_healthStoreManager;	// 16 = 0x10
    UINavigationController *_medicalIDNavigationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000159de2
@property(retain, nonatomic) UINavigationController *medicalIDNavigationController; // @synthesize medicalIDNavigationController=_medicalIDNavigationController;
@property(retain, nonatomic) CNHealthStoreManager *healthStoreManager; // @synthesize healthStoreManager=_healthStoreManager;
@property(nonatomic) long long medicalIDActionType; // @synthesize medicalIDActionType=_medicalIDActionType;
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000159cb0
- (void)medicalIDViewControllerDidDelete:(id)arg1;	// IMP=0x0000000000159b84
- (void)medicalIDViewControllerDidSave:(id)arg1;	// IMP=0x0000000000159abe
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x00000000001599f8
- (void)dismissMedicalID;	// IMP=0x000000000015993e
- (void)presentMedicalIDViewControllerWithSender:(id)arg1;	// IMP=0x000000000015973a
- (void)presentHKMedicalIDViewControllerWithSender:(id)arg1;	// IMP=0x0000000000159544
- (void)performActionWithSender:(id)arg1;	// IMP=0x0000000000159487

// Remaining properties
@property(retain, nonatomic) CNContact *contact; // @dynamic contact;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

