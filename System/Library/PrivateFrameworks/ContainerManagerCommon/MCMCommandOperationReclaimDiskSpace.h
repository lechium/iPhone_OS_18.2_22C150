//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MCMReply, MCMXPCMessage;

__attribute__((visibility("hidden")))
@interface MCMCommandOperationReclaimDiskSpace
{
    _Bool _asynchronously;	// 8 = 0x8
    id <MCMXPCMessage> _message;	// 16 = 0x10
    id <MCMReply> _handoffReply;	// 24 = 0x18
}

+ (Class)incomingMessageClass;	// IMP=0x0060000000055c48
+ (unsigned long long)command;	// IMP=0x0060000000055c1c
- (void).cxx_destruct;	// IMP=0x0000000000055710
@property(readonly, nonatomic) _Bool asynchronously; // @synthesize asynchronously=_asynchronously;
@property(readonly, nonatomic) id <MCMReply> handoffReply; // @synthesize handoffReply=_handoffReply;
@property(readonly, nonatomic) id <MCMXPCMessage> message; // @synthesize message=_message;
- (void)_deleteContainersOnDeathRowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000553ab
- (void)_deleteContainersAtDeathRowURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000054d7f
- (_Bool)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000549a3
- (void)execute;	// IMP=0x000000000005466c
- (_Bool)preflightClientAllowed;	// IMP=0x000000000005456b
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000054535
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3 asyncResultPromise:(id)arg4;	// IMP=0x0000000000054455
- (id)initWithAsynchronously:(_Bool)arg1 context:(id)arg2 resultPromise:(id)arg3;	// IMP=0x000000000005441f
- (id)initWithAsynchronously:(_Bool)arg1 context:(id)arg2 resultPromise:(id)arg3 handoffForReply:(id)arg4;	// IMP=0x0000000000054350

@end
