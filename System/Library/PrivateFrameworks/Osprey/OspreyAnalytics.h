//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyAnalytics : NSObject
{
}

+ (id)reporter;	// IMP=0x0080000000006c93
- (void)_addURL:(id)arg1 toContext:(id)arg2;	// IMP=0x0000000000007682
- (void)reportError:(id)arg1 forURL:(id)arg2;	// IMP=0x0000000000007472
- (void)reportHttpStatus:(long long)arg1 grpcStatus:(long long)arg2 forURL:(id)arg3;	// IMP=0x000000000000731c
- (void)reportAbsintheMetrics:(id)arg1;	// IMP=0x0000000000007153
- (void)reportConnectionMetrics:(id)arg1;	// IMP=0x0000000000006dca
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000006ce8

@end
