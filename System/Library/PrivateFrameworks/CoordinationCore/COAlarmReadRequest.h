//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface COAlarmReadRequest : COMeshRequest
{
    _Bool _isForMerge;	// 8 = 0x8
    _Bool _requiresFilter;	// 9 = 0x9
    NSUUID *_accessoryUniqueIdentifier;	// 16 = 0x10
    NSString *_eTag;	// 24 = 0x18
}

+ (id)acceptableResponses;	// IMP=0x00600000000270aa
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000270a2
- (void).cxx_destruct;	// IMP=0x0000000000027132
@property(readonly, nonatomic) _Bool requiresFilter; // @synthesize requiresFilter=_requiresFilter;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(readonly, nonatomic) _Bool isForMerge; // @synthesize isForMerge=_isForMerge;
@property(readonly, nonatomic) NSUUID *accessoryUniqueIdentifier; // @synthesize accessoryUniqueIdentifier=_accessoryUniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026f3a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026de1
- (id)initForMerge;	// IMP=0x0000000000026db3
- (id)initWithAccessory:(id)arg1;	// IMP=0x0000000000026d5d
- (id)initWithAccessoryUniqueIdentifier:(id)arg1;	// IMP=0x0000000000026d46
- (id)initWithAccessoryUniqueIdentifier:(id)arg1 requiresFilter:(_Bool)arg2;	// IMP=0x0000000000026cdd

@end

