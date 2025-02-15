//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CNScheduler, OS_os_log;

@interface ContactProviderService : NSObject
{
    id <CNScheduler> _workQueue;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000001051c
- (void).cxx_destruct;	// IMP=0x0020000000010d79
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
- (void)handleBundleIdentifiers:(id)arg1;	// IMP=0x00100000000106e0
- (id)initWithSchedulerProvider:(id)arg1;	// IMP=0x00100000000105fb
- (id)init;	// IMP=0x00100000000105a1

@end

