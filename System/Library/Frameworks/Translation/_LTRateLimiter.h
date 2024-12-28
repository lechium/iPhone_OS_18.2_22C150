//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTRateLimiter : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    _Bool _pageLoaded;	// 16 = 0x10
    unsigned long long _maximumPageLoadRequests;	// 24 = 0x18
    unsigned long long _maximumDynamicContentRequests;	// 32 = 0x20
}

@property(nonatomic) unsigned long long maximumDynamicContentRequests; // @synthesize maximumDynamicContentRequests=_maximumDynamicContentRequests;
@property(nonatomic) unsigned long long maximumPageLoadRequests; // @synthesize maximumPageLoadRequests=_maximumPageLoadRequests;
- (void)markPageLoaded;	// IMP=0x000000000001f71a
- (_Bool)allowedForRequests:(unsigned long long)arg1;	// IMP=0x000000000001f700
- (id)initWithMaximumPageLoadRequest:(unsigned long long)arg1 maximumDynamicContentRequests:(long long)arg2;	// IMP=0x000000000001f68f

@end
