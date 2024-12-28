//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface MCMClientIdentityIndex : NSObject
{
    NSData *_auditToken;	// 8 = 0x8
    NSData *_proximateAuditToken;	// 16 = 0x10
    NSString *_personaUniqueString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000088adc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000889fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008896f
- (_Bool)isEqualToClientIdentityIndex:(id)arg1;	// IMP=0x00000000000888bb
- (unsigned long long)hash;	// IMP=0x0000000000088830
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 proximateAuditToken:(CDStruct_4c969caf)arg2 personaUniqueString:(id)arg3;	// IMP=0x0000000000088732

@end
