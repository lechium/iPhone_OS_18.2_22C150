//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject
{
    OADFill *mFill;	// 8 = 0x8
    NSArray *mEffects;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000031fa41
@property(readonly, copy) NSString *description;
- (_Bool)hasEffects;	// IMP=0x000000000031f9f5
- (void)setEffects:(id)arg1;	// IMP=0x0000000000222390
- (id)effects;	// IMP=0x000000000031f9e7
- (void)setFill:(id)arg1;	// IMP=0x0000000000222132
- (id)fill;	// IMP=0x00000000002223b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

