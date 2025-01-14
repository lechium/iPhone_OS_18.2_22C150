//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LayoutConstraintActivationHelper : NSObject
{
    NSMutableArray *_pendingConstraintsToActivate;	// 8 = 0x8
    NSMutableArray *_pendingConstraintsToDeactivate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000a2fd53
@property(retain, nonatomic) NSMutableArray *pendingConstraintsToDeactivate; // @synthesize pendingConstraintsToDeactivate=_pendingConstraintsToDeactivate;
@property(retain, nonatomic) NSMutableArray *pendingConstraintsToActivate; // @synthesize pendingConstraintsToActivate=_pendingConstraintsToActivate;
- (void)commitPendingConstraints;	// IMP=0x0010000000a2fc0d
- (void)clearPendingConstraints;	// IMP=0x0010000000a2fb8c
- (id)pendingConstraintsToActivate:(_Bool)arg1;	// IMP=0x0010000000a2fb34
- (void)scheduleConstraints:(id)arg1 activate:(_Bool)arg2;	// IMP=0x0010000000a2f9b9
- (void)scheduleConstraint:(id)arg1 activate:(_Bool)arg2;	// IMP=0x0010000000a2f8a3
- (id)init;	// IMP=0x0010000000a2f806

@end

