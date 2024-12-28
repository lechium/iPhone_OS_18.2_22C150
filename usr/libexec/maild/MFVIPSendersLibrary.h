//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAEmailAddressSet, MFMailMessageLibrary, NSString, VIPManager;
@protocol EMUserProfileProvider, OS_dispatch_queue;

@interface MFVIPSendersLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_addressBookQueue;	// 8 = 0x8
    void *_addressBook;	// 16 = 0x10
    int _addressBookResetCount;	// 24 = 0x18
    MFMailMessageLibrary *_library;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pendingAddressQueue;	// 40 = 0x28
    EAEmailAddressSet *_pendingAdds;	// 48 = 0x30
    EAEmailAddressSet *_pendingRemoves;	// 56 = 0x38
    VIPManager *_vipManager;	// 64 = 0x40
}

+ (id)defaultMessageLibrary;	// IMP=0x00200000000c160d
+ (id)defaultInstance;	// IMP=0x00100000000c1520
+ (id)log;	// IMP=0x00100000000c1443
- (void).cxx_destruct;	// IMP=0x00200000000c4c7f
@property(readonly, nonatomic) VIPManager *vipManager; // @synthesize vipManager=_vipManager;
- (id)_messagesForSenders:(id)arg1 success:(_Bool *)arg2;	// IMP=0x00100000000c4a55
- (void)_vipsDidChange:(id)arg1;	// IMP=0x00000000000c4443
- (_Bool)_setVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;	// IMP=0x00100000000c423a
- (_Bool)_clearVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(_Bool)arg2;	// IMP=0x00100000000c4034
- (void)_libraryDidFinishReconciliation:(id)arg1;	// IMP=0x00100000000c3f15
- (void)_performTasksAfterProtectedDataBecomesAvailable;	// IMP=0x00100000000c3404
@property(readonly, nonatomic) id <EMUserProfileProvider> userProfileProvider;
- (void)_removePendingVIPChanges;	// IMP=0x00100000000c334d
- (void)_savePendingVIPChanges_nts;	// IMP=0x00100000000c31f5
- (id)_pendingVIPChangesPath;	// IMP=0x00100000000c3193
- (void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(_Bool)arg2;	// IMP=0x00100000000c2b50
- (id)_newVIPFromVIP:(id)arg1 byAddingEmailAddresses:(id)arg2;	// IMP=0x00100000000c29ec
- (void)_checkForAddressBookChangesNeedingRevert:(_Bool)arg1;	// IMP=0x00100000000c2034
- (void)checkForAddressBookChanges;	// IMP=0x00100000000c1eec
- (void)_handleAddressBookNotification;	// IMP=0x00100000000c1d81
- (void)dealloc;	// IMP=0x00100000000c1b49
- (id)initWithLibrary:(id)arg1;	// IMP=0x00100000000c1626

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
