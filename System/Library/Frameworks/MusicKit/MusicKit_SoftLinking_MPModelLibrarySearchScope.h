//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchScope;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject
{
    MPModelLibrarySearchScope *_underlyingSearchScope;	// 8 = 0x8
    long long _modelObjectType;	// 16 = 0x10
}

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)arg1;	// IMP=0x006000000000311c
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg1;	// IMP=0x0060000000002bfa
- (void).cxx_destruct;	// IMP=0x00000000000034de
@property(readonly, nonatomic) long long modelObjectType; // @synthesize modelObjectType=_modelObjectType;
- (long long)_modelObjectType;	// IMP=0x0000000000003112
- (id)_underlyingSearchScope;	// IMP=0x0000000000003104
- (id)initWithModelObjectType:(long long)arg1;	// IMP=0x0000000000002a88
- (id)_initWithUnderlyingSearchScope:(id)arg1 modelObjectType:(long long)arg2;	// IMP=0x0000000000002a11

@end

