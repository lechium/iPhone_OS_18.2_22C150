//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAppleCardSilentEnrollment : NSObject
{
}

+ (id)bagKeySet;	// IMP=0x00100000002d5a7e
+ (id)createBagForSubProfile;	// IMP=0x00100000002d59e4
+ (id)bagSubProfileVersion;	// IMP=0x00100000002d5994
+ (id)bagSubProfile;	// IMP=0x00100000002d5944
+ (id)headersForAccount:(id)arg1;	// IMP=0x00100000002d5664
+ (id)gsTokenForAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002d536b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

