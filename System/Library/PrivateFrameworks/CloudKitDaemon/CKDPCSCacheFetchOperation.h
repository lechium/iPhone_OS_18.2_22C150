//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDPCSCache, CKDPCSData, CKDRecordPCSData, NSError, NSObject, NSString;
@protocol CKSQLiteItem, OS_dispatch_group;

@interface CKDPCSCacheFetchOperation
{
    _Bool _didFetchData;	// 8 = 0x8
    _Bool _wasFetchedFromCache;	// 9 = 0x9
    _Bool _shouldRetry;	// 10 = 0xa
    _Bool _pcsDataInvalidated;	// 11 = 0xb
    int _numRetries;	// 12 = 0xc
    NSObject<OS_dispatch_group> *_fetchGroup;	// 16 = 0x10
    CKDPCSCache *_cache;	// 24 = 0x18
    id <CKSQLiteItem> _itemID;	// 32 = 0x20
    unsigned long long _fetchOptions;	// 40 = 0x28
    CKDPCSData *_pcsData;	// 48 = 0x30
    NSError *_fetchError;	// 56 = 0x38
    NSError *_dependentPCSFetchError;	// 64 = 0x40
    CKDRecordPCSData *_parentPCSData;	// 72 = 0x48
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x00600000003077f8
- (void).cxx_destruct;	// IMP=0x0000000000307e12
@property(getter=isPCSDataInvalidated) _Bool pcsDataInvalidated; // @synthesize pcsDataInvalidated=_pcsDataInvalidated;
@property(retain, nonatomic) CKDRecordPCSData *parentPCSData; // @synthesize parentPCSData=_parentPCSData;
@property(nonatomic) _Bool shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(nonatomic) int numRetries; // @synthesize numRetries=_numRetries;
@property(nonatomic) _Bool wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(retain, nonatomic) NSError *dependentPCSFetchError; // @synthesize dependentPCSFetchError=_dependentPCSFetchError;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(nonatomic) _Bool didFetchData; // @synthesize didFetchData=_didFetchData;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
@property(nonatomic) unsigned long long fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) id <CKSQLiteItem> itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) CKDPCSCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000307b20
- (void)main;	// IMP=0x0000000000307adc
- (void)_willRetryFetch;	// IMP=0x00000000003078e3
- (_Bool)_savePCSDataToCache;	// IMP=0x00000000003078db
- (_Bool)_saveUpdatedPCSToServer;	// IMP=0x00000000003078d3
- (_Bool)_decryptPCS;	// IMP=0x00000000003078cb
- (_Bool)_fetchDependentPCS;	// IMP=0x00000000003078c3
- (_Bool)_createAdditionalPCS;	// IMP=0x00000000003078bb
- (_Bool)_fetchPCSDataFromServer;	// IMP=0x00000000003078b3
- (_Bool)_fetchPCSDataFromDatabase;	// IMP=0x00000000003078ab
- (_Bool)needsAdditionalPCSCreation;	// IMP=0x00000000003078a3
@property(readonly, nonatomic) _Bool hasAllPCSData;
@property(readonly, nonatomic) NSString *itemTypeName;
- (_Bool)makeStateTransition;	// IMP=0x0000000000306d17
- (_Bool)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0000000000306bc7
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000306ac9

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
