//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService
{
    void *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x0020000000649f73
+ (id)getSilo;	// IMP=0x0010000000649d7e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000649d65
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000649d08
@property(nonatomic) void *manager; // @synthesize manager=_manager;
- (void)endService;	// IMP=0x0010000000649e86
- (void)beginService;	// IMP=0x0010000000649e17
- (id)init;	// IMP=0x0010000000649dda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
