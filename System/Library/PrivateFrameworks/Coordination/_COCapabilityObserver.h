//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _COCapabilityObserver : NSObject
{
    _Bool _notified;	// 8 = 0x8
    _Bool _lastValue;	// 9 = 0x9
    NSString *_capability;	// 16 = 0x10
    id _cluster;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b183
@property(nonatomic) _Bool lastValue; // @synthesize lastValue=_lastValue;
@property(nonatomic) _Bool notified; // @synthesize notified=_notified;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) id cluster; // @synthesize cluster=_cluster;
@property(readonly, copy, nonatomic) NSString *capability; // @synthesize capability=_capability;
- (void)notify:(_Bool)arg1;	// IMP=0x000000000002af21
- (id)description;	// IMP=0x000000000002ae33
- (id)initWithCapability:(id)arg1 cluster:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000002ac8f

@end
