//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDStatusChannelRecord : NSObject
{
    NSUUID *_idsIdentifier;	// 8 = 0x8
    NSString *_idsDestination;	// 16 = 0x10
    NSDictionary *_payload;	// 24 = 0x18
    NSDate *_assertionTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000034e388
@property(readonly, nonatomic) NSDate *assertionTime; // @synthesize assertionTime=_assertionTime;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
@property(readonly, nonatomic) NSUUID *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (unsigned long long)hash;	// IMP=0x000000000034e31c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034e0e3
- (id)description;	// IMP=0x000000000034dffb
- (id)initWithPresentDevice:(id)arg1;	// IMP=0x000000000034dcdb
- (id)initWithIdsIdentifier:(id)arg1 idsDestination:(id)arg2 payload:(id)arg3 assertionTime:(id)arg4;	// IMP=0x000000000034dbd7

@end

