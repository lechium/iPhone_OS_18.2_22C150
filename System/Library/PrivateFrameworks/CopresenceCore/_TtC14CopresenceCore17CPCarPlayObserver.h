//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14CopresenceCore17CPCarPlayObserver : NSObject
{
    MISSING_TYPE *sessionStatus;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *isAttemptingCarplaySession;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f6760
- (id)init;	// IMP=0x00000000001f67f0
- (void)dealloc;	// IMP=0x00000000001f6700
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;	// IMP=0x00000000001f71e0
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;	// IMP=0x00000000001f6e50
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x00000000001f6dd0
- (void)sessionDidConnect:(id)arg1;	// IMP=0x00000000001f6960

@end

