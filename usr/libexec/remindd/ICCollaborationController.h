//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCloudContext, NSManagedObjectContext;

@interface ICCollaborationController : NSObject
{
    ICCloudContext *_cloudContext;	// 8 = 0x8
    NSManagedObjectContext *_objectContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008203e
@property(retain, nonatomic) NSManagedObjectContext *objectContext; // @synthesize objectContext=_objectContext;
- (id);	// IMP=0x0010000000082023
@property(retain, nonatomic) ICCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
- (void)acceptShareWithMetadata:(id)arg1 container:(id)arg2 accountID:(id)arg3 fetchObjectWithCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000080d8c
- (id)containerForAccountID:(id)arg1;	// IMP=0x0010000000080c8e
- (id)containerForUserRecordID:(id)arg1;	// IMP=0x00100000000808ca
- (void)acceptShareWithMetadata:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007f89f
- (void)didStopSharing:(id)arg1 recordID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000007f2f0
- (void)didStopSharingRecordID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007f2c3
- (void)didStopSharing:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007f299
- (id)objectForShare:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x001000000007f0b7
- (void)saveServerShare:(id)arg1 accountID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007ed62
- (void)didSaveShare:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007ebde
- (void)fetchShareIfNecessaryForObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e1ad
- (void)saveShare:(id)arg1 withRootRecord:(id)arg2 object:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007cdf8
- (void)saveShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c81e
- (void)prepareShare:(id)arg1 forObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c338
- (id)existingShareForObject:(id)arg1;	// IMP=0x001000000007bc0a
- (void)populateShare:(id)arg1 withObject:(id)arg2;	// IMP=0x001000000007b981
- (id)newShareForObject:(id)arg1;	// IMP=0x001000000007b6d7
- (id)rootRecordForObject:(id)arg1;	// IMP=0x001000000007b608
- (void)createShareForObjectWithManagedObjectID:(id)arg1 appIconData:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007aece
- (id)fetchShareForObjectWithManagedObjectID:(id)arg1;	// IMP=0x001000000007ac23
- (id)initWithCloudContext:(id)arg1;	// IMP=0x001000000007abbb

@end

