//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface DRDispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000109b2
- (void)dealloc;	// IMP=0x0010000000010974
- (void)cancel;	// IMP=0x001000000001093e
- (void)activate;	// IMP=0x0010000000010929
- (void)resetWithTimeout:(double)arg1 leeway:(double)arg2;	// IMP=0x00100000000108a6
- (id)initWithQueue:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000107e2

@end

