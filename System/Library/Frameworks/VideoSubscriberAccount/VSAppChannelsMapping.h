//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAppChannelsMapping : NSObject
{
    NSString *_appAdamID;	// 8 = 0x8
    NSArray *_channelIDs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000352fe
- (void).cxx_destruct;	// IMP=0x00000000000354b3
@property(copy, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (id)description;	// IMP=0x000000000003543c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000353e4
- (unsigned long long)hash;	// IMP=0x00000000000353ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003535b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035306
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003527e
- (id)init;	// IMP=0x00000000000351ea

@end

