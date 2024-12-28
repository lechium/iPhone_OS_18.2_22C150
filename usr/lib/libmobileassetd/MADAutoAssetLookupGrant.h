//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAssetLookupGrant : NSObject
{
    NSString *_assetType;	// 8 = 0x8
    NSString *_holderJobUUID;	// 16 = 0x10
    NSMutableArray *_awaitingExclusiveGrant;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003ce35
- (void).cxx_destruct;	// IMP=0x000000000003d1a7
@property(retain, nonatomic) NSMutableArray *awaitingExclusiveGrant; // @synthesize awaitingExclusiveGrant=_awaitingExclusiveGrant;
@property(retain, nonatomic) NSString *holderJobUUID; // @synthesize holderJobUUID=_holderJobUUID;
@property(readonly, retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (id)summary;	// IMP=0x000000000003d05f
- (id)description;	// IMP=0x000000000003ce3d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003cd52
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003cba8
- (id)initForAssetType:(id)arg1;	// IMP=0x000000000003cb10

@end
