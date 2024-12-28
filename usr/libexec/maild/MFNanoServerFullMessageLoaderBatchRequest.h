//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;

@interface MFNanoServerFullMessageLoaderBatchRequest : NSObject
{
    _Bool _resultIncludesProtectedMessages;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    NSMutableOrderedSet *_outstandingMessageIdRequests;	// 24 = 0x18
    NSMutableSet *_pendingMessageIdRequests;	// 32 = 0x20
    NSMutableDictionary *_resultedMessagesById;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000a014c
@property(nonatomic) _Bool resultIncludesProtectedMessages; // @synthesize resultIncludesProtectedMessages=_resultIncludesProtectedMessages;
@property(retain, nonatomic) NSMutableDictionary *resultedMessagesById; // @synthesize resultedMessagesById=_resultedMessagesById;
@property(retain, nonatomic) NSMutableSet *pendingMessageIdRequests; // @synthesize pendingMessageIdRequests=_pendingMessageIdRequests;
@property(retain, nonatomic) NSMutableOrderedSet *outstandingMessageIdRequests; // @synthesize outstandingMessageIdRequests=_outstandingMessageIdRequests;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)results;	// IMP=0x00100000000a00be
- (_Bool)isRequestCompleted;	// IMP=0x00100000000a00a1
- (void)addResult:(id)arg1 isProtectedMessage:(_Bool)arg2;	// IMP=0x001000000009ff80
- (void)addResults:(id)arg1 isProtectedMessage:(_Bool)arg2;	// IMP=0x001000000009fdf8
- (void)cancelRequestForMessageIds:(id)arg1;	// IMP=0x001000000009fc88
- (void)cancelRequestForMessageId:(id)arg1;	// IMP=0x001000000009fc0d
- (_Bool)enqueueMessageId:(id)arg1;	// IMP=0x001000000009fb9a
- (_Bool)enqueueMessageIds:(id)arg1;	// IMP=0x001000000009fa0f
- (id)dequeueMessageId;	// IMP=0x001000000009f9b0
- (id)dequeueAllMessageIds;	// IMP=0x001000000009f918
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009f90d
- (id)initWithMessageIds:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f793

@end
