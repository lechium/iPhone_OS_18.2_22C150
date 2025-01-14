//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;
@protocol CKModifySubscriptionsOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDModifySubscriptionsOperation
{
    _Bool _hasSubscriptionsToSave;	// 8 = 0x8
    _Bool _hasSubscriptionsToDelete;	// 9 = 0x9
    CDUnknownBlockType _saveCompletionBlock;	// 16 = 0x10
    CDUnknownBlockType _deleteCompletionBlock;	// 24 = 0x18
    NSArray *_subscriptionsToSave;	// 32 = 0x20
    NSArray *_subscriptionIDsToDelete;	// 40 = 0x28
    NSMutableDictionary *_subscriptionsByServerID;	// 48 = 0x30
}

+ (long long)isPredominatelyDownload;	// IMP=0x006000000018df75
- (void).cxx_destruct;	// IMP=0x000000000018eff8
@property(retain, nonatomic) NSMutableDictionary *subscriptionsByServerID; // @synthesize subscriptionsByServerID=_subscriptionsByServerID;
@property(retain, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(retain, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
@property(copy, nonatomic) CDUnknownBlockType deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (_Bool)isOperationType:(int)arg1;	// IMP=0x000000000018ef12
- (int)operationType;	// IMP=0x000000000018eee6
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000018ebd5
- (void)main;	// IMP=0x000000000018df7d
- (void)_handleSubscriptionDeleted:(id)arg1 responseCode:(id)arg2;	// IMP=0x000000000018dbd4
- (void)_handleSubscriptionSaved:(id)arg1 error:(id)arg2;	// IMP=0x000000000018d975
- (void)_handleSubscriptionSaved:(id)arg1 responseCode:(id)arg2;	// IMP=0x000000000018d7f6
- (id)activityCreate;	// IMP=0x000000000018d7cd
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000018d505

// Remaining properties
@property(retain, nonatomic) id <CKModifySubscriptionsOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

