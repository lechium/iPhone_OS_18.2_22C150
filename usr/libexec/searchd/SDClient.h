//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, SDUpdatesFile, SPXPCMessage;
@protocol OS_dispatch_source;

@interface SDClient : NSObject
{
    NSMutableDictionary *_queriesByExternId;	// 8 = 0x8
    _Bool _updating;	// 16 = 0x10
    NSString *_applicationDisplayID;	// 24 = 0x18
    NSString *_category;	// 32 = 0x20
    SDUpdatesFile *_updatesFile;	// 40 = 0x28
    NSMutableDictionary *_contentIndices;	// 48 = 0x30
    NSDate *_timer;	// 56 = 0x38
    NSString *_lastQuery;	// 64 = 0x40
    SPXPCMessage *_currentActivation;	// 72 = 0x48
    _Bool _isSpringBoard;	// 80 = 0x50
    _Bool _active;	// 81 = 0x51
    _Bool _didTimerFire;	// 82 = 0x52
    NSObject<OS_dispatch_source> *_resumeBackgroundActivityTimer;	// 88 = 0x58
}

+ (void)registerMessageHandlersWithServer:(id)arg1;	// IMP=0x004000000000848b
+ (id)clientForConnection:(id)arg1;	// IMP=0x00100000000083ec
+ (void)initialize;	// IMP=0x001000000000512e
- (void).cxx_destruct;	// IMP=0x002000000000a23b
@property(nonatomic) _Bool didTimerFire; // @synthesize didTimerFire=_didTimerFire;
@property(retain) NSObject<OS_dispatch_source> *resumeBackgroundActivityTimer; // @synthesize resumeBackgroundActivityTimer=_resumeBackgroundActivityTimer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)dealloc;	// IMP=0x001000000000a145
- (void)death;	// IMP=0x001000000000838d
- (void)deactivate;	// IMP=0x001000000000806f
- (void)activateForConnection:(id)arg1 message:(id)arg2;	// IMP=0x0010000000007451
- (void)cancelQueryWithExternalID:(unsigned int)arg1;	// IMP=0x00100000000071eb
- (void)clearInputForConnection:(id)arg1;	// IMP=0x0010000000007061
- (void)addAndStartQuery:(id)arg1;	// IMP=0x0010000000005429
- (void)removeActiveQuery:(id)arg1;	// IMP=0x0010000000005370
- (void)_endCrashHandling;	// IMP=0x0010000000005320
- (void)_beginCrashHandlingForStore:(id)arg1 andQuery:(id)arg2;	// IMP=0x001000000000519f
- (void)setActivation:(id)arg1;	// IMP=0x00100000000050a4

@end

