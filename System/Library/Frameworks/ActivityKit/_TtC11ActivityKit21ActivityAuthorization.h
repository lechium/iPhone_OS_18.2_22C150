//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC11ActivityKit21ActivityAuthorization : NSObject
{
    MISSING_TYPE *authorizationClient;	// 8 = 0x8
    MISSING_TYPE *lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015e60
- (_Bool)setFrequentPushesWithEnabled:(_Bool)arg1 for:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015d60
- (_Bool)areFrequentPushesEnabledFor:(id)arg1;	// IMP=0x0000000000015bf0
- (_Bool)areActivitiesEnabledForBundleId:(id)arg1;	// IMP=0x0000000000015aa0
- (_Bool)clearActivityAuthorizationFor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000015910
- (_Bool)setActivitiesWithEnabled:(_Bool)arg1 for:(id)arg2 source:(long long)arg3 error:(id *)arg4;	// IMP=0x00000000000155f0
- (_Bool)setActivitiesWithEnabled:(_Bool)arg1 forBundleId:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000154c0
- (id)init;	// IMP=0x0000000000015280

@end

