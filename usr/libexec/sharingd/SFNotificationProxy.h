//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SFNotificationProxy : NSObject
{
    NSString *_externalID;	// 8 = 0x8
    NSMutableArray *_internalIDs;	// 16 = 0x10
    _Bool _showingMedium;	// 24 = 0x18
    NSString *_triggeredID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _dismissedHandler;	// 48 = 0x30
    CDUnknownBlockType _tappedHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000009b32b
@property(copy, nonatomic) CDUnknownBlockType tappedHandler; // @synthesize tappedHandler=_tappedHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)reset;	// IMP=0x001000000009b23d
- (id)externalID;	// IMP=0x001000000009b1c4
- (void)handleNotificationWasDismissed:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000009afcd
- (void)handleNotificationWasTapped:(id)arg1;	// IMP=0x001000000009ae18
- (void)requestUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3 canPostNotification:(_Bool)arg4;	// IMP=0x001000000009ae06
- (void)requestRemoveAll;	// IMP=0x001000000009ad5f
- (void)requestRemove:(id)arg1 withReason:(long long)arg2;	// IMP=0x001000000009a834
- (void)requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3;	// IMP=0x001000000009a81c
- (void)_requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3 canPost:(_Bool)arg4;	// IMP=0x001000000009a4af
- (id)init;	// IMP=0x001000000009a458

@end
