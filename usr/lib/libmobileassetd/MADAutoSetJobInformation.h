//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoSetDescriptor, MANAutoAssetSetInfoDesire, MANAutoAssetSetInfoFound, MANAutoAssetSetInfoInstance, MANAutoAssetSetStatus, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoSetJobInformation : NSObject
{
    MANAutoAssetSetInfoInstance *_clientInstance;	// 8 = 0x8
    MANAutoAssetSetInfoDesire *_clientDesire;	// 16 = 0x10
    MANAutoAssetSetInfoFound *_foundContent;	// 24 = 0x18
    MADAutoSetDescriptor *_setDescriptor;	// 32 = 0x20
    MANAutoAssetSetStatus *_currentSetStatus;	// 40 = 0x28
    NSString *_assignedAutoAssetUUID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ad627
- (void).cxx_destruct;	// IMP=0x00000000000adad8
@property(retain, nonatomic) NSString *assignedAutoAssetUUID; // @synthesize assignedAutoAssetUUID=_assignedAutoAssetUUID;
@property(retain, nonatomic) MANAutoAssetSetStatus *currentSetStatus; // @synthesize currentSetStatus=_currentSetStatus;
@property(retain, nonatomic) MADAutoSetDescriptor *setDescriptor; // @synthesize setDescriptor=_setDescriptor;
@property(retain, nonatomic) MANAutoAssetSetInfoFound *foundContent; // @synthesize foundContent=_foundContent;
@property(retain, nonatomic) MANAutoAssetSetInfoDesire *clientDesire; // @synthesize clientDesire=_clientDesire;
@property(retain, nonatomic) MANAutoAssetSetInfoInstance *clientInstance; // @synthesize clientInstance=_clientInstance;
- (id)summary;	// IMP=0x00000000000ad7d5
- (id)description;	// IMP=0x00000000000ad7c3
- (id)copy;	// IMP=0x00000000000ad62f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ad4a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ad301
- (id)init;	// IMP=0x00000000000ad271

@end

