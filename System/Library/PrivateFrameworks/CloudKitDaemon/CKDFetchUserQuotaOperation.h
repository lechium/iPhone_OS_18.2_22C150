//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKFetchUserQuotaOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDFetchUserQuotaOperation
{
    unsigned long long _quotaAvailable;	// 8 = 0x8
}

@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (void)main;	// IMP=0x000000000012e9e9
- (int)operationType;	// IMP=0x000000000012e9de
- (id)activityCreate;	// IMP=0x000000000012e9b5
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000012e986

// Remaining properties
@property(retain, nonatomic) id <CKFetchUserQuotaOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
