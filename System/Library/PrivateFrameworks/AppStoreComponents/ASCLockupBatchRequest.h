//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupBatchRequest : NSObject
{
    _Bool _enableAppDistribution;	// 8 = 0x8
    NSSet *_ids;	// 16 = 0x10
    NSString *_kind;	// 24 = 0x18
    NSString *_context;	// 32 = 0x20
    NSString *_clientID;	// 40 = 0x28
    NSDictionary *_mediaQueryParams;	// 48 = 0x30
    NSString *_platformOverride;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002e704
+ (id)lockupBatchRequestsFromRequests:(id)arg1;	// IMP=0x001000000002dc78
- (void).cxx_destruct;	// IMP=0x000000000002f9c8
@property(readonly, copy, nonatomic) NSString *platformOverride; // @synthesize platformOverride=_platformOverride;
@property(readonly, copy, nonatomic) NSDictionary *mediaQueryParams; // @synthesize mediaQueryParams=_mediaQueryParams;
@property(readonly, nonatomic) _Bool enableAppDistribution; // @synthesize enableAppDistribution=_enableAppDistribution;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
- (id)lockupBatchRequestWithIDs:(id)arg1;	// IMP=0x000000000002f841
@property(readonly, copy, nonatomic) NSArray *requests;
- (id)description;	// IMP=0x000000000002f1d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ed53
- (unsigned long long)hash;	// IMP=0x000000000002ebc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ebbe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ea1a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e70c
- (id)_initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4 enableAppDistribution:(_Bool)arg5 mediaQueryParams:(id)arg6 platformOverride:(id)arg7;	// IMP=0x000000000002e637
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x000000000002e54b

@end
