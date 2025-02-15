//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitSimpleCache, CPLRecordTargetMapping, CPLResource, NSDictionary, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitGetStreamingURLTask
{
    CPLRecordTargetMapping *_targetMapping;	// 8 = 0x8
    CPLResource *_resource;	// 16 = 0x10
    NSDictionary *_hints;	// 24 = 0x18
    CPLCloudKitSimpleCache *_cache;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    CDStruct_e83c9415 _timeRange;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000b60fa
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CPLCloudKitSimpleCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) NSDictionary *hints; // @synthesize hints=_hints;
@property(readonly, nonatomic) CPLResource *resource; // @synthesize resource=_resource;
- (void)_fetchStreamingURL;	// IMP=0x00100000000b5393
- (void)runOperations;	// IMP=0x00100000000b5303
- (_Bool)shouldRequestEncryptedStream;	// IMP=0x00100000000b52aa
- (id)_streamOperationForKey:(id)arg1 operationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b486e
- (id)initWithController:(id)arg1 resource:(id)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 target:(id)arg5 transportScopeMapping:(id)arg6 cache:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000b4689

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: highPriorityBackground
// Property attributes: (null)

@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

