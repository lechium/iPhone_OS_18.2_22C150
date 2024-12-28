//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSICloudIdentityToken, BDSUbiquityStatusMonitor, NSMetadataQuery, NSString, NSURL;
@protocol BDSUbiquityDocumentsObserverDelegate, OS_dispatch_queue;

@interface BDSUbiquityDocumentsObserver : NSObject
{
    id <BDSUbiquityDocumentsObserverDelegate> _delegate;	// 8 = 0x8
    NSString *_directoriesSubpath;	// 16 = 0x10
    BDSUbiquityStatusMonitor *_ubiquityStatusMonitor;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_metadataQueryQueue;	// 40 = 0x28
    NSMetadataQuery *_query;	// 48 = 0x30
    BDSICloudIdentityToken *_identity;	// 56 = 0x38
    NSURL *_containerURL;	// 64 = 0x40
    NSURL *_noSyncURL;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000b7ab
@property(retain) NSURL *noSyncURL; // @synthesize noSyncURL=_noSyncURL;
@property(retain, nonatomic) NSURL *containerURL; // @synthesize containerURL=_containerURL;
@property(retain, nonatomic) BDSICloudIdentityToken *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueryQueue; // @synthesize metadataQueryQueue=_metadataQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak BDSUbiquityStatusMonitor *ubiquityStatusMonitor; // @synthesize ubiquityStatusMonitor=_ubiquityStatusMonitor;
@property(retain, nonatomic) NSString *directoriesSubpath; // @synthesize directoriesSubpath=_directoriesSubpath;
@property(nonatomic) __weak id <BDSUbiquityDocumentsObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)_replacementObjectForResultObject:(id)arg1;	// IMP=0x001000000000b0b6
- (id)_itemsForMetadataItems:(id)arg1;	// IMP=0x001000000000af8a
- (void)q_createSubpathDirectories;	// IMP=0x001000000000ad12
- (id)_noSyncURL;	// IMP=0x001000000000aa68
- (id)_dataURL;	// IMP=0x001000000000a989
- (id)_documentsURL;	// IMP=0x001000000000a8aa
- (id)_identityData;	// IMP=0x001000000000a842
- (void)mq_queryDidUpdate:(id)arg1;	// IMP=0x001000000000a668
- (void)mq_queryDidFinish:(id)arg1;	// IMP=0x001000000000a3cc
- (void)mq_queryDidStart:(id)arg1;	// IMP=0x001000000000a370
- (void)mq_tearDownQuery;	// IMP=0x001000000000a1dc
- (void)mq_setupQuery:(id)arg1;	// IMP=0x0010000000009fba
- (void)documentsURL:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009ec2
- (void)tearDownQuery;	// IMP=0x0010000000009dd6
- (void)restartQuery;	// IMP=0x0010000000009a28
- (void)ubiquityStatusChangedToAvailableWithNewIdentity:(id)arg1 oldIdentity:(id)arg2;	// IMP=0x001000000000977c
- (id)initWithDelegate:(id)arg1 ubquityStatusMonitor:(id)arg2 directoriesSubpath:(id)arg3;	// IMP=0x0010000000009352
- (id)init;	// IMP=0x0010000000009344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
