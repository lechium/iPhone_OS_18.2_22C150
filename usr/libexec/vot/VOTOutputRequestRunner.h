//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SCRCThread, VOTOutputRequest;

@interface VOTOutputRequestRunner : NSObject
{
    _Bool _isActive;	// 8 = 0x8
    unsigned int _currentActionIndex;	// 12 = 0xc
    NSArray *_currentActions;	// 16 = 0x10
    _Bool _didProcessNoSyncActions;	// 24 = 0x18
    struct _NSRange _currentRange;	// 32 = 0x20
    SCRCThread *_runnerThread;	// 48 = 0x30
    _Bool _onHold;	// 56 = 0x38
    VOTOutputRequest *_currentRequest;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000014cd8
@property(readonly, nonatomic) VOTOutputRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool onHold; // @synthesize onHold=_onHold;
- (id)description;	// IMP=0x0010000000014c36
- (void)_processActions;	// IMP=0x0010000000014677
- (void)_performAction:(id)arg1 withComponent:(id)arg2;	// IMP=0x001000000001446c
- (void)_handleProcessActions:(id)arg1;	// IMP=0x00100000000143ad
- (void)_handleNotifications:(id)arg1;	// IMP=0x0010000000014089
- (void)resume;	// IMP=0x0010000000013fa8
- (void)handleEvent:(id)arg1;	// IMP=0x0010000000013f01
- (void)sendNotification:(unsigned int)arg1;	// IMP=0x0010000000013e14
- (void)runOutputRequest:(id)arg1;	// IMP=0x0010000000013d34
- (_Bool)isActive;	// IMP=0x0010000000013d2b
- (void)setIsActive:(_Bool)arg1;	// IMP=0x0010000000013d22
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x0010000000013cf6
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x0010000000013cd7
- (void)_initializeThread;	// IMP=0x0010000000013c53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000013be3
- (void)dealloc;	// IMP=0x0010000000013b7e
- (id)init;	// IMP=0x0010000000013af3

@end

