//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BiometricsStore : NSObject
{
}

+ (struct __CFDictionary *)_copyKeychainQuery;	// IMP=0x004000000000a8ac
+ (void)storeToken:(id)arg1;	// IMP=0x001000000000a61a
+ (id)retreiveTokenWithAction:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000a259
+ (void)removeToken;	// IMP=0x001000000000a000

@end

