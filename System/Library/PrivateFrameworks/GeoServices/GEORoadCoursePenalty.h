//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation;

__attribute__((visibility("hidden")))
@interface GEORoadCoursePenalty : NSObject
{
    GEOLocation *_location;	// 8 = 0x8
    _Bool _useRawLocations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000655418
- (double)penaltyForCandidate:(id)arg1;	// IMP=0x0000000000655203
@property(nonatomic) _Bool useRawLocations;
- (id)initWithLocation:(id)arg1;	// IMP=0x000000000065515a
- (id)init;	// IMP=0x0000000000655116

@end
