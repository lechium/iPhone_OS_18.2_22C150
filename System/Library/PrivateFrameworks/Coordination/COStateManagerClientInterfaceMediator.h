//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COStateManager, NSString;

__attribute__((visibility("hidden")))
@interface COStateManagerClientInterfaceMediator : NSObject
{
    COStateManager *_manager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001175b
@property(readonly, nonatomic) __weak COStateManager *manager; // @synthesize manager=_manager;
- (void)changesObserved:(id)arg1 forPredicate:(id)arg2;	// IMP=0x00000000000116ce
- (id)initWithStateManager:(id)arg1;	// IMP=0x000000000001166a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

