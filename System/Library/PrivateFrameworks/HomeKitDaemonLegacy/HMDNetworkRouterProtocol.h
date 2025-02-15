//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterProtocol : NSObject
{
    long long _protocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000051b005
+ (id)protocolFromTransportProtocol:(unsigned char)arg1;	// IMP=0x00100000004ac7a8
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051aeae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051ae5d
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000051ae43
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000051acf1
- (id)initWithProtocol:(long long)arg1;	// IMP=0x000000000051acb4
- (id)init;	// IMP=0x000000000051ac78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

