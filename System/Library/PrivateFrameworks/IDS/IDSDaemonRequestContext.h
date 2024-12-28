//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDaemonResponseHandler, IMTimer;

@interface IDSDaemonRequestContext : NSObject
{
    IDSDaemonResponseHandler *_responseHandler;	// 8 = 0x8
    CDUnknownBlockType _timeoutBlock;	// 16 = 0x10
    IMTimer *_systemTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c26de
- (void)killSystemTimer;	// IMP=0x00000000000c26ac
- (id)systemTimer;	// IMP=0x00000000000c269e
- (CDUnknownBlockType)timeoutBlock;	// IMP=0x00000000000c2688
- (id)responseHandler;	// IMP=0x00000000000c267a
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2 systemTimer:(id)arg3;	// IMP=0x00000000000c25b2
- (void)dealloc;	// IMP=0x00000000000c2570

@end
