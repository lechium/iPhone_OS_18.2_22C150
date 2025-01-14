//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol MediaSocialErrorDelegate, OS_dispatch_queue;

@interface MediaSocialErrorCoordinator : NSObject
{
    id <MediaSocialErrorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    id _notification;	// 24 = 0x18
    NSMutableOrderedSet *_postIDs;	// 32 = 0x20
    NSArray *_temporaryPostIDs;	// 40 = 0x28
    NSArray *_temporaryUploadIDs;	// 48 = 0x30
    NSMutableOrderedSet *_uploadIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000116710
@property(nonatomic) __weak id <MediaSocialErrorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showDialog:(id)arg1;	// IMP=0x0010000000116556
- (void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1;	// IMP=0x001000000011645f
- (id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0010000000115fe4
- (id)_newSingleErrorDialogWithUpload:(id)arg1;	// IMP=0x0010000000115c3a
- (id)_newSingleErrorDialogWithPost:(id)arg1;	// IMP=0x0010000000115858
- (id)_newPluralErrorDialogWithUploadCount:(long long)arg1;	// IMP=0x00100000001157a6
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2;	// IMP=0x001000000011547b
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1;	// IMP=0x00100000001153c9
- (id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2;	// IMP=0x001000000011510d
@property(readonly, copy, nonatomic) NSArray *uploadIdentifiers;
@property(readonly, copy, nonatomic) NSArray *postIdentifiers;
- (void)dismissAllDialogs;	// IMP=0x0010000000114fe5
- (_Bool)addDialogForUploadIdentifiers:(id)arg1;	// IMP=0x0010000000114eb9
- (_Bool)addDialogForUpload:(id)arg1;	// IMP=0x0010000000114d59
- (_Bool)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x0010000000114c45
- (_Bool)addDialogForPost:(id)arg1;	// IMP=0x0010000000114adf
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x0010000000114a74

@end

