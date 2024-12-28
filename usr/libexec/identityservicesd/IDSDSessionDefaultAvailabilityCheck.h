//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMNetworkAvailability;

@interface IDSDSessionDefaultAvailabilityCheck : NSObject
{
    IMNetworkAvailability *_availability;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000003aca9c
@property(retain, nonatomic) IMNetworkAvailability *availability; // @synthesize availability=_availability;
- (void)checkLocalConnectivityForSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ac486
- (void)availabilityTimerCancel;	// IMP=0x00100000003ac42c
- (void)checkNetworkAvailabilityForSession:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000003ab6ce
- (long long)networkCheckOverrideBehavior;	// IMP=0x00100000003ab646

@end
