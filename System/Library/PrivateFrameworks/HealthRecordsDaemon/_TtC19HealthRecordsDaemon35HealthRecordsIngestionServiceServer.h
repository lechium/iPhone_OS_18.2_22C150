//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19HealthRecordsDaemon35HealthRecordsIngestionServiceServer : NSObject
{
    MISSING_TYPE *cancellables;	// 8 = 0x8
    MISSING_TYPE *client;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000196990
- (id)init;	// IMP=0x0000000000196930
- (void)remote_triggerDownloadPublicKeysWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019a830
- (void)remote_triggerDownloadIssuerRegistryWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000199d90
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)arg1;	// IMP=0x00000000001998c0
- (void)remote_didUpdateSignedClinicalDataRecord:(id)arg1;	// IMP=0x0000000000199110
- (void)remote_addCardToWalletForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001989b0
- (void)remote_reverifySignatureForRecord:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001982b0
- (void)remote_processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000197720
- (void)remote_handleSignedClinicalDataFeature:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001971d0
- (void)remote_parseSignedClinicalData:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000196dc0
- (void)connectionInvalidated;	// IMP=0x000000000019a990
- (id)remoteInterface;	// IMP=0x000000000019a980
- (id)exportedInterface;	// IMP=0x000000000019a960

@end

