//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLProactiveInertialOdometryClientDelegate : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_client;	// 16 = 0x10
}

@property(nonatomic) void *client; // @synthesize client=_client;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onBackgroundInertialOdometryState:(id)arg1;	// IMP=0x0010000000884f51
- (id)initWithLocationController:(void *)arg1;	// IMP=0x0010000000884f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

