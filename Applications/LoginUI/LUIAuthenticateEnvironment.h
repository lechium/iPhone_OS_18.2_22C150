//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface LUIAuthenticateEnvironment : NSObject
{
    _Bool _deviceHasNetwork;	// 8 = 0x8
    _Bool _isInternalBuild;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(readonly, nonatomic) _Bool deviceHasNetwork; // @synthesize deviceHasNetwork=_deviceHasNetwork;
- (id)init;	// IMP=0x0010000000043c7c
- (id)initWithDeviceHasNetwork:(_Bool)arg1 isInternalBuild:(_Bool)arg2;	// IMP=0x0010000000043c36

@end

