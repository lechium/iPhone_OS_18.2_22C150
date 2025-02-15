//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface CNTestQuickActionViewContainer : NSObject
{
    NSDictionary *_actionViewsByActionType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000027fb8f
@property(readonly, nonatomic) NSDictionary *actionViewsByActionType; // @synthesize actionViewsByActionType=_actionViewsByActionType;
- (id)viewForActionType:(id)arg1;	// IMP=0x000000000027fb0b
- (id)initWithActionTypes:(id)arg1;	// IMP=0x000000000027fa3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

