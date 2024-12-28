//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKContainer.h>

@class NSString;
@protocol AMSCloudDataDatabase;

@interface CKContainer (amsengagementd)
- (id)_fetchShareMetadataForURL:(id)arg1 withToken:(id)arg2;	// IMP=0x0020000000198614
- (id)_acceptShareWithShareMetadata:(id)arg1;	// IMP=0x00100000001984ab
- (id)queryDeviceToDeviceEncryptionAvailability;	// IMP=0x0010000000198396
- (id)fetchUserRecordID;	// IMP=0x00100000001982f2
- (id)acceptShareURL:(id)arg1 withToken:(id)arg2;	// IMP=0x0010000000198205
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
