//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class OS_dispatch_queue;
@protocol CPSystemStateObserverObserver;

@protocol CPSystemStateObserver <NSObject>
@property(readonly, nonatomic) _Bool allowScreenSharingInitiation;
@property(readonly, nonatomic) _Bool allowScreenSharing;
@property(readonly, nonatomic) _Bool allowSharePlay;
- (void)addObserver:(id <CPSystemStateObserverObserver>)arg1 withQueue:(OS_dispatch_queue *)arg2;
@end

