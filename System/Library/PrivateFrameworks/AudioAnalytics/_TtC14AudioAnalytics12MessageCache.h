//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14AudioAnalytics12MessageCache : _TtCs12_SwiftObject
{
    MISSING_TYPE *caches;	// 16 = 0x10
}

- (void)getTailspinSessionIDFor:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009ce0
- (void)requestMessageFor:(long long)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009c50
- (void)destroySessionFor:(long long)arg1;	// IMP=0x0000000000009c20
- (void)stopSessionFor:(long long)arg1;	// IMP=0x0000000000009ab0
- (void)sendWithMessage:(id)arg1 with:(unsigned int)arg2 and:(unsigned short)arg3 for:(long long)arg4;	// IMP=0x00000000000099a0
- (void)startSessionFor:(long long)arg1;	// IMP=0x0000000000009570
- (void)setWithServiceType:(unsigned short)arg1 for:(long long)arg2;	// IMP=0x0000000000009530
- (void)setWithConfiguration:(id)arg1 for:(long long)arg2;	// IMP=0x0000000000009470
- (void)validateFor:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000093e0
- (void)getServiceNameFor:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009390
- (void)createSessionWith:(long long)arg1;	// IMP=0x0000000000009370

@end
