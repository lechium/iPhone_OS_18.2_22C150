//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessagePolicy.h>

__attribute__((visibility("hidden")))
@interface HMDConfigurationMessagePolicy : HMFMessagePolicy
{
    unsigned long long _operationTypes;	// 8 = 0x8
}

+ (id)policyWithOperationTypes:(unsigned long long)arg1;	// IMP=0x0060000000242faa
@property(readonly) unsigned long long operationTypes; // @synthesize operationTypes=_operationTypes;
- (unsigned long long)hash;	// IMP=0x0000000000242f87
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000242ee1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000242ed6
- (id)__initWithOperationTypes:(unsigned long long)arg1;	// IMP=0x0000000000242e92
- (id)init;	// IMP=0x0000000000242dea

@end
