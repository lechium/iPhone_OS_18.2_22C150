//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLDaemonLocationUpdaterLiveAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00100000003c7089
- (void)dealloc;	// IMP=0x00100000003c7056
- (void)invalidate;	// IMP=0x00100000003c704c
- (id)init;	// IMP=0x00100000003c7014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
