//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _GCCurrentApplicationForegroundMonitor : NSObject
{
    NSMutableSet *_observers;	// 8 = 0x8
    _Atomic _Bool _appInBackground;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f5bb
- (void)CBApplicationWillResignActive:(id)arg1;	// IMP=0x000000000000f537
- (void)CBApplicationDidBecomeActive:(id)arg1;	// IMP=0x000000000000f4b3
@property(readonly, getter=isAppInBackground) _Bool appInBackground;
- (id)init;	// IMP=0x000000000000ec0f

@end
