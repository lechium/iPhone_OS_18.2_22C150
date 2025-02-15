//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection, NSUUID;

__attribute__((visibility("hidden")))
@interface _MPModelLibraryRegisteredTransientState : NSObject
{
    long long _addState;	// 8 = 0x8
    long long _keepLocalState;	// 16 = 0x10
    long long _favoriteState;	// 24 = 0x18
    MPSectionedCollection *_modelObjects;	// 32 = 0x20
    MPSectionedCollection *_relatedModelObjects;	// 40 = 0x28
    NSUUID *_token;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001dd034
@property(copy, nonatomic) NSUUID *token; // @synthesize token=_token;
@property(copy, nonatomic) MPSectionedCollection *relatedModelObjects; // @synthesize relatedModelObjects=_relatedModelObjects;
@property(copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(nonatomic) long long favoriteState; // @synthesize favoriteState=_favoriteState;
@property(nonatomic) long long keepLocalState; // @synthesize keepLocalState=_keepLocalState;
@property(nonatomic) long long addState; // @synthesize addState=_addState;

@end

