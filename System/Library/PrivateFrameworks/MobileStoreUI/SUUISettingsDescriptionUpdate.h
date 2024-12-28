//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface SUUISettingsDescriptionUpdate : NSObject
{
    NSArray *_indexPaths;	// 8 = 0x8
    NSIndexSet *_indexSet;	// 16 = 0x10
    long long _updateType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002c003
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property(retain, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
- (id)initWithUpdateType:(long long)arg1;	// IMP=0x000000000002bf86

@end
