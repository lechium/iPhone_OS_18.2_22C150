//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC15SiriInteractive23SceneItemMetricsRequest;

@interface _TtC15SiriInteractive19SceneMetricsRequest : NSObject
{
    MISSING_TYPE *_lockScreenMetrics;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000054d9
- (void).cxx_destruct;	// IMP=0x0000000000005703
- (id)init;	// IMP=0x00000000000056d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000566f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000555c
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000000547b
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000053bb
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000005373
@property(nonatomic, readonly) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000050e3
@property(nonatomic, readonly) long long hash;
- (id)initWithLockScreenMetrics:(id)arg1;	// IMP=0x0000000000004f6a
@property(nonatomic, retain) _TtC15SiriInteractive23SceneItemMetricsRequest *lockScreenMetrics;

@end
