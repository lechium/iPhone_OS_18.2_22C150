//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface MRIRRouteRecommendationContext : NSObject
{
    MISSING_TYPE *candidateResults;	// 8 = 0x8
    MISSING_TYPE *contextIdentifier;	// 16 = 0x10
}

+ (id)fromObject:(id)arg1;	// IMP=0x00200000002ae030
- (void).cxx_destruct;	// IMP=0x00400000002ae660
- (id)init;	// IMP=0x00100000002ae610
@property(nonatomic, readonly) NSString *description;
- (id)initWithCandidateResults:(id)arg1 contextIdentifier:(id)arg2;	// IMP=0x00100000002ae0d0
@property(nonatomic, copy) NSString *contextIdentifier;
@property(nonatomic, copy) NSSet *candidateResults;

@end
