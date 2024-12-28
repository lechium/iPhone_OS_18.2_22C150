//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODataURLSession, GEODataURLSessionTask, NSString;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionWaiter : NSObject
{
    GEODataURLSession *_session;	// 8 = 0x8
    GEODataURLSessionTask *_task;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    id _strongReferenceToSelf;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000014a1e32
- (void)cancel;	// IMP=0x00000000014a1e1c
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;	// IMP=0x00000000014a1d73
- (id)init;	// IMP=0x00000000014a1d49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
