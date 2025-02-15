//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VOTTextMovementManager : NSObject
{
    long long _rotorType;	// 8 = 0x8
    unsigned long long _segmentIndex;	// 16 = 0x10
    NSArray *_segments;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000f6eb0
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) unsigned long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) long long rotorType; // @synthesize rotorType=_rotorType;
- (id)_localizedStringForKey:(id)arg1;	// IMP=0x00100000000f6df5
- (void)previousSegment;	// IMP=0x00100000000f6d69
- (void)nextSegment;	// IMP=0x00100000000f6cf6
@property(readonly, nonatomic) NSString *localizedSegmentName;
@property(readonly, nonatomic) NSString *localizedSegmentNameForSelection;
@property(nonatomic) long long segment;
- (id)initWithSegments:(id)arg1;	// IMP=0x00100000000f6a9b

@end

