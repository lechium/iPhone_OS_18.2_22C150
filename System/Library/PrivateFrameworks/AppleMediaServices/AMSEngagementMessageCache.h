//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AMSEngagementMessageCache : NSObject
{
    MISSING_TYPE *cacheInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008991a
- (id)init;	// IMP=0x00000000000898d9
- (id)filterWithMessage:(id)arg1;	// IMP=0x00000000000897c4
- (_Bool)isBlockedWithMessageRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3;	// IMP=0x0000000000088a28
- (void)addWithCachePolicy:(long long)arg1 placement:(id)arg2 serviceType:(id)arg3;	// IMP=0x0000000000088829

@end

