//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKPrivacyController : NSObject
{
}

+ (void)requestAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x0080000000012d01
+ (long long)authorizationStatus;	// IMP=0x0080000000012c9f
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)arg1;	// IMP=0x0080000000012c8b
+ (id)_sharedCloudServiceStatusMonitor;	// IMP=0x0080000000012b93

@end
