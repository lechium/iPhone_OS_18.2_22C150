//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetProgress : NSObject
{
    _Bool _isStalled;	// 8 = 0x8
    long long _downloadedAssetCount;	// 16 = 0x10
    long long _remainingAssetCount;	// 24 = 0x18
    long long _totalExpectedBytes;	// 32 = 0x20
    long long _totalWrittenBytes;	// 40 = 0x28
    double _expectedTimeRemainingSecs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c7846
@property(nonatomic) double expectedTimeRemainingSecs; // @synthesize expectedTimeRemainingSecs=_expectedTimeRemainingSecs;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) long long totalWrittenBytes; // @synthesize totalWrittenBytes=_totalWrittenBytes;
@property(nonatomic) long long totalExpectedBytes; // @synthesize totalExpectedBytes=_totalExpectedBytes;
@property(nonatomic) long long remainingAssetCount; // @synthesize remainingAssetCount=_remainingAssetCount;
@property(nonatomic) long long downloadedAssetCount; // @synthesize downloadedAssetCount=_downloadedAssetCount;
- (id)summary;	// IMP=0x00000000000c7ad9
- (id)description;	// IMP=0x00000000000c7ac7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c792a
- (id)copy;	// IMP=0x00000000000c784e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7741
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c764c
- (id)init;	// IMP=0x00000000000c7601

@end

