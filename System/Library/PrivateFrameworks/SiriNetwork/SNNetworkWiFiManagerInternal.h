//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SNNetworkWiFiManagerInternal : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *queueGroup;	// 16 = 0x10
}

+ (id)shared;	// IMP=0x004000000005fefa
- (void).cxx_destruct;	// IMP=0x00000000000601a7
- (void)releaseWiFiAssertion;	// IMP=0x00000000000606c1
- (void)acquireWiFiAssertionWithWifiAssertionTypeRawValue:(long long)arg1;	// IMP=0x00000000000606bb
- (_Bool)isWiFiEnabled;	// IMP=0x0000000000060695
- (id)getWiFiRecordRepresentation;	// IMP=0x0000000000060289
- (void)dealloc;	// IMP=0x000000000006018a
- (id)init;	// IMP=0x0000000000060135

@end

