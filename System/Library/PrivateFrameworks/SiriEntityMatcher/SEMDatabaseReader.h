//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SEMDatabaseConnection, SEMProvisionalResourceManager;

@interface SEMDatabaseReader : NSObject
{
    SEMDatabaseConnection *_connection;	// 8 = 0x8
    double _lifespan;	// 16 = 0x10
    SEMProvisionalResourceManager *_resourceManager;	// 24 = 0x18
}

+ (id)readerForDatabaseAtURL:(id)arg1;	// IMP=0x0010000000020ca2
- (void).cxx_destruct;	// IMP=0x0000000000021be1
- (_Bool)enumerateRowResultsOfSelect:(id)arg1 batchSize:(unsigned long long)arg2 offset:(unsigned long long)arg3 enumerateAll:(_Bool)arg4 error:(id *)arg5 usingBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000002199b
- (_Bool)enumerateRowResultsOfSelect:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021781
- (_Bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 batchSize:(unsigned long long)arg3 offset:(unsigned long long)arg4 enumerateAll:(_Bool)arg5 error:(id *)arg6 usingBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000002152b
- (_Bool)enumerateRecordResultsOfSelect:(id)arg1 recordClass:(Class)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021271
- (_Bool)deactivateWithError:(id *)arg1;	// IMP=0x0000000000021250
- (_Bool)activateWithError:(id *)arg1 operationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002122f
- (CDUnknownBlockType)_deactivationBlock;	// IMP=0x0000000000021192
- (CDUnknownBlockType)_activationBlock;	// IMP=0x00000000000210f5
- (void)dealloc;	// IMP=0x00000000000210b1
- (id)init;	// IMP=0x0000000000021069
- (id)initWithConnection:(id)arg1 lifespan:(double)arg2;	// IMP=0x0000000000020d18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

