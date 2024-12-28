//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADActivityTracker, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADActivityManager : NSObject
{
    MADActivityTracker *_managerActivity;	// 8 = 0x8
    MADActivityTracker *_unknownClient;	// 16 = 0x10
    MADActivityTracker *_pidReusedClient;	// 24 = 0x18
    MADActivityTracker *_untrackedCommandType;	// 32 = 0x20
    MADActivityTracker *_untrackedCommand;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_activityTrackingQueue;	// 48 = 0x30
    NSMutableDictionary *_xpcConnectionByProcessId;	// 56 = 0x38
    NSMutableDictionary *_xpcConnectionByFullId;	// 64 = 0x40
    unsigned long long _connectionNoClientTracker;	// 72 = 0x48
    unsigned long long _connectionNoClientIdentifier;	// 80 = 0x50
    unsigned long long _connectionReplyAllocationFailure;	// 88 = 0x58
    unsigned long long _connectionNonDictionaryEvent;	// 96 = 0x60
    unsigned long long _connectionMissingRequired;	// 104 = 0x68
    unsigned long long _statusChangeNoClientTracker;	// 112 = 0x70
    unsigned long long _statusChangeNoTrackerOwner;	// 120 = 0x78
    unsigned long long _statusChangeNoControlManager;	// 128 = 0x80
    unsigned long long _statusChangeNoDownloadManager;	// 136 = 0x88
    unsigned long long _statusChangeUnknownOwner;	// 144 = 0x90
    unsigned long long _statusChangeUnknownXPCError;	// 152 = 0x98
    unsigned long long _statusChangeUnknownXPCType;	// 160 = 0xa0
}

+ (_Bool)notifyStatusChange:(unsigned long long)arg1 forClient:(id)arg2 withReason:(id)arg3;	// IMP=0x006000000009837f
+ (void)noticeForActivity:(id)arg1 reason:(id)arg2;	// IMP=0x0060000000097c1f
+ (void)failureOfActivity:(id)arg1 withResult:(int)arg2 ofResultName:(id)arg3 forReason:(id)arg4;	// IMP=0x0060000000097b24
+ (void)warningForActivity:(id)arg1 fromMethod:(id)arg2 leaderNote:(id)arg3 warning:(id)arg4;	// IMP=0x0060000000097a3b
+ (void)transferOwnership:(id)arg1 toOwner:(unsigned long long)arg2 reason:(id)arg3;	// IMP=0x00600000000978dd
+ (void)progressForActivity:(id)arg1 calledPrimitive:(id)arg2 withErrorResult:(id)arg3;	// IMP=0x00600000000977b6
+ (void)progressForActivity:(id)arg1 calledPrimitive:(id)arg2 withBoolResult:(_Bool)arg3;	// IMP=0x00600000000976e0
+ (void)progressForActivity:(id)arg1 calledPrimitive:(id)arg2 withSuccessResult:(_Bool)arg3;	// IMP=0x0060000000097600
+ (void)progressForActivity:(id)arg1 callingPrimitive:(id)arg2;	// IMP=0x0060000000097547
+ (void)sendReply:(id)arg1 withResult:(int)arg2 ofResultName:(id)arg3;	// IMP=0x006000000009738c
+ (void)sendReply:(id)arg1 withCancelDownloadResult:(long long)arg2;	// IMP=0x0060000000097324
+ (void)sendReply:(id)arg1 withDownloadResult:(long long)arg2;	// IMP=0x00600000000972bc
+ (void)sendReply:(id)arg1 withOperationResult:(long long)arg2;	// IMP=0x0060000000097254
+ (id)newTrackingCommandForEvent:(id)arg1 forClient:(id)arg2;	// IMP=0x00600000000965be
+ (void)unknownXPCType:(struct _xpc_type_s *)arg1 forClient:(id)arg2;	// IMP=0x0060000000096496
+ (void)unknownXPCError:(id)arg1 forClient:(id)arg2;	// IMP=0x0060000000096353
+ (void)connectionInterruptedForClient:(id)arg1;	// IMP=0x006000000009632b
+ (void)terminationIminentForClient:(id)arg1;	// IMP=0x0060000000096303
+ (void)connectionInvalidForClient:(id)arg1;	// IMP=0x00600000000962b3
+ (id)clientForConnection:(id)arg1;	// IMP=0x0060000000095f7a
+ (id)remoteProcessFullIdentifierForConnection:(id)arg1;	// IMP=0x0060000000095ee0
+ (id)remoteProcessIdentifierForConnection:(id)arg1;	// IMP=0x0060000000095e9a
+ (id)sharedActivityManager;	// IMP=0x0060000000095c20
- (void).cxx_destruct;	// IMP=0x000000000009872a
@property(nonatomic) unsigned long long statusChangeUnknownXPCType; // @synthesize statusChangeUnknownXPCType=_statusChangeUnknownXPCType;
@property(nonatomic) unsigned long long statusChangeUnknownXPCError; // @synthesize statusChangeUnknownXPCError=_statusChangeUnknownXPCError;
@property(nonatomic) unsigned long long statusChangeUnknownOwner; // @synthesize statusChangeUnknownOwner=_statusChangeUnknownOwner;
@property(nonatomic) unsigned long long statusChangeNoDownloadManager; // @synthesize statusChangeNoDownloadManager=_statusChangeNoDownloadManager;
@property(nonatomic) unsigned long long statusChangeNoControlManager; // @synthesize statusChangeNoControlManager=_statusChangeNoControlManager;
@property(nonatomic) unsigned long long statusChangeNoTrackerOwner; // @synthesize statusChangeNoTrackerOwner=_statusChangeNoTrackerOwner;
@property(nonatomic) unsigned long long statusChangeNoClientTracker; // @synthesize statusChangeNoClientTracker=_statusChangeNoClientTracker;
@property(nonatomic) unsigned long long connectionMissingRequired; // @synthesize connectionMissingRequired=_connectionMissingRequired;
@property(nonatomic) unsigned long long connectionNonDictionaryEvent; // @synthesize connectionNonDictionaryEvent=_connectionNonDictionaryEvent;
@property(nonatomic) unsigned long long connectionReplyAllocationFailure; // @synthesize connectionReplyAllocationFailure=_connectionReplyAllocationFailure;
@property(nonatomic) unsigned long long connectionNoClientIdentifier; // @synthesize connectionNoClientIdentifier=_connectionNoClientIdentifier;
@property(nonatomic) unsigned long long connectionNoClientTracker; // @synthesize connectionNoClientTracker=_connectionNoClientTracker;
@property(readonly, nonatomic) NSMutableDictionary *xpcConnectionByFullId; // @synthesize xpcConnectionByFullId=_xpcConnectionByFullId;
@property(readonly, nonatomic) NSMutableDictionary *xpcConnectionByProcessId; // @synthesize xpcConnectionByProcessId=_xpcConnectionByProcessId;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *activityTrackingQueue; // @synthesize activityTrackingQueue=_activityTrackingQueue;
@property(readonly, nonatomic) MADActivityTracker *untrackedCommand; // @synthesize untrackedCommand=_untrackedCommand;
@property(readonly, nonatomic) MADActivityTracker *untrackedCommandType; // @synthesize untrackedCommandType=_untrackedCommandType;
@property(readonly, nonatomic) MADActivityTracker *pidReusedClient; // @synthesize pidReusedClient=_pidReusedClient;
@property(readonly, nonatomic) MADActivityTracker *unknownClient; // @synthesize unknownClient=_unknownClient;
@property(readonly, nonatomic) MADActivityTracker *managerActivity; // @synthesize managerActivity=_managerActivity;
- (void)_finishClientCommandActivity:(id)arg1 withResult:(int)arg2 ofResultName:(id)arg3 ableToReply:(_Bool)arg4;	// IMP=0x0000000000098050
- (void)_startClientCommandActivity:(id)arg1;	// IMP=0x0000000000097f75
- (id)_clientMADActivityTrackerForClient:(id)arg1 withProcessID:(id)arg2 withFullID:(id)arg3;	// IMP=0x0000000000097cd8
- (id)_clientForConnection:(id)arg1;	// IMP=0x000000000009616b
- (id)init;	// IMP=0x0000000000095c75

@end
